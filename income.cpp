
#include "income.h"
#include "ui_income.h"
#include "databasemanager.h"
#include <QDate>
#include <QDebug>
#include <QMessageBox>
#include "secwindow.h"
#include "budget.h"

income::income(const QString &userEmail, QWidget *parent)
    : QDialog(parent), ui(new Ui::income), userEmail(userEmail)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Choose");
    ui->comboBox->addItem("Job");
    ui->comboBox->addItem("From Parents");
    ui->comboBox->addItem("Scholarship");
    ui->comboBox->addItem("Student Aid");

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Source Type" << "Date" << "Amount" << "Description");
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);



}

income::~income()
{
    delete ui;
}

void income::on_add_clicked()
{
    QString sourceType = ui->comboBox->currentText();
    QDate date = ui->calendarWidget->selectedDate();
    double amount = ui->amount->text().toDouble();
    QString description = ui->discrip->text();



    if (sourceType == "Choose" || amount <= 0) {
        qDebug() << "Invalid input data";
        return;
    }


    DatabaseManager dbManager;
    if (dbManager.addIncome(userEmail, sourceType, date, amount, description)) {
        qDebug() << "Income record added successfully";
    } else {
        qDebug() << "Failed to add income record";
    }


    ui->tableWidget->setRowCount(0);


    QSqlQuery query;
    query.prepare("SELECT source_type, date, amount, description FROM income WHERE user_email = :email");
    query.bindValue(":email", userEmail);

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->tableWidget->insertRow(row);

            QString sourceType = query.value("source_type").toString();
            QString date = query.value("date").toString();
            QString amount = QString::number(query.value("amount").toDouble(), 'f', 2);
            QString description = query.value("description").toString();

            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(sourceType));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(date));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(amount));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(description));

            row++;
        }
    } else {
        qDebug() << "Error fetching income data: " << query.lastError();
    }

 QMessageBox::information(this, "Success", "Income added successfully ");
}



void income::on_login_3_clicked()
{
    hide();
    secwindow *Sec;
    Sec =new secwindow(userEmail,this);
    Sec->show();
}


void income::on_login_4_clicked()
{
    close();
    Budget *budget;
    budget=new Budget(userEmail,this);
    budget->show();

}

