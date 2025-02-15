#include "acedamic.h"
#include "ui_acedamic.h"
#include <QMessageBox>
#include "secwindow.h"
#include "deadline.h"

acedamic::acedamic(QString userEmail,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::acedamic),userEmail(userEmail)
{
    ui->setupUi(this);


    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Course Code" << "Date" << "Time");
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

acedamic::~acedamic()
{
    delete ui;
}

void acedamic::on_add_clicked()
{
    QString courseCode = ui->course->text();
    QDate date = ui->calendarWidget->selectedDate();
    QTime time = ui->timeEdit->time();

    if (courseCode.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a course code.");
        return;
    }


    DatabaseManager dbManager;
    if (dbManager.addAcademicRecord(userEmail, courseCode, date, time)) {
        qDebug() << "Academic record added successfully";


    } else {
        qDebug() << "Failed to add Academic record";
    }



    QSqlQuery query;
    query.prepare("SELECT course_code, date,time FROM academic WHERE user_email = :email");
    query.bindValue(":email", userEmail);

    if (query.exec()){

        int row=0;
        while (query.next()){

            ui->tableWidget->insertRow(row);

            QString courseCode = query.value("course_code").toString();
            QString date = query.value("date").toString();
            QString time =  query.value("time").toString();

            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(courseCode));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(date));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(time));

            row++;
        }

    }
    else {
        qDebug() << "Error fetching academic data: " << query.lastError();
    }



    QMessageBox::information(this, "Success", "Schedule added successfully ");
}


void acedamic::on_add_2_clicked()
{
    hide();
    secwindow *Sec;
    Sec =new secwindow(userEmail,this);
    Sec->show();
}


void acedamic::on_add_3_clicked()
{
    close();
    deadline *Deadline;
    Deadline =new deadline(userEmail,this);
    Deadline->show();

}

