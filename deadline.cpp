#include "deadline.h"
#include "ui_deadline.h"
#include <QMessageBox>
#include "acedamic.h"


void deadline::checkDeadlinesDueTomorrow()
{
    QList<QPair<QString, QDate>> deadlines = dbManager.getDeadlinesDueTomorrow(userEmail);

    if (!deadlines.isEmpty()) {
        QString message = "You have deadlines tomorrow:\n";
        for (const auto &deadline : deadlines) {
            message += QString("Course: %1, Date: %2\n").arg(deadline.first, deadline.second.toString("yyyy-MM-dd"));
        }
        QMessageBox::information(this, "Upcoming Deadlines", message);
    }
}


deadline::deadline(QString userEmail, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deadline), userEmail(userEmail)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Course Code" << "Date" << "Time" << "Description");
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    checkDeadlinesDueTomorrow();
}


deadline::~deadline()
{
    delete ui;
}


void deadline::on_add_clicked()
{
    QString courseCode = ui->course->text();
    QDate date = ui->calendarWidget->selectedDate();
    QTime time = ui->timeEdit->time();
    QString description = ui->discrip->text();

    if (courseCode.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a course code.");
        return;
    }


    DatabaseManager dbManager;
    if (dbManager.addDeadline(userEmail, courseCode, date, time, description)) {
        qDebug() << "Deadline record added successfully";


        loadDeadlines();
    } else {
        qDebug() << "Failed to add deadline record";
    }

    QMessageBox::information(this, "Success", "Deadline added successfully");
}


void deadline::loadDeadlines()
{
    QSqlQuery query;
    query.prepare("SELECT course_code, date,time,description FROM deadline WHERE user_email = :email");
    query.bindValue(":email", userEmail);

    if (query.exec()) {
        ui->tableWidget->setRowCount(0);
        int row = 0;

        while (query.next()) {
            QString courseCode = query.value("course_code").toString();
            QString date = query.value("date").toString();
            QString time =  query.value("time").toString();
            QString description = query.value("description").toString();

            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(courseCode));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(date));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(time));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(description));

            row++;
        }
    } else {
        qDebug() << "Error fetching deadline data: " << query.lastError();
    }
}


void deadline::on_login_3_clicked()
{
    close();
    acedamic *Academic;
    Academic = new acedamic(userEmail,this);
    Academic->show();
}

