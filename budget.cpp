#include "budget.h"
#include "ui_budget.h"
#include "databasemanager.h"
#include <QDate>
#include <QDebug>
#include <QMessageBox>
#include "income.h"

Budget::Budget(QString userEmail,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Budget),userEmail(userEmail)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Choose");
    ui->comboBox->addItem("Food");
    ui->comboBox->addItem("Entertainment");
    ui->comboBox->addItem("Travelling");
    ui->comboBox->addItem("Clothing");
    ui->comboBox->addItem("Educational Equipment");
    ui->comboBox->addItem("University Fees");


    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Category"<<"Amount");
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

Budget::~Budget()
{
    delete ui;
}


void Budget::on_add_clicked()
{
    QString category = ui->comboBox->currentText();
    double amount = ui->amount->text().toDouble();



    if (category == "Choose" || amount <= 0) {
        qDebug() << "Invalid input data";
        QMessageBox::warning(this, "Invalid Input", "Please select a valid category and enter a positive amount.");
        return;
    }


    DatabaseManager dbManager;
    if (dbManager.addBudget(userEmail, category, amount)) {
        qDebug() << "Budget record added successfully";
        QMessageBox::information(this, "Success", "Budget added successfully.");
    } else {
        qDebug() << "Failed to add Budget record";
        QMessageBox::critical(this, "Error", "Failed to add Budget to the database.");
    }


    ui->tableWidget->setRowCount(0);


    QSqlQuery query;
    query.prepare("SELECT category, amount FROM budget WHERE user_email = :email");
    query.bindValue(":email", userEmail);

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->tableWidget->insertRow(row);

            QString category = query.value("category").toString();
            QString amount = QString::number(query.value("amount").toDouble(), 'f', 2);

            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(category));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(amount));

            row++;
        }
    } else {
        qDebug() << "Error fetching budget data: " << query.lastError();
    }
}



void Budget::on_add_2_clicked()
{
    close();
    income * Income;
    Income = new income(userEmail,this);
    Income->show();
}

