#include "report.h"
#include "ui_report.h"
#include "databasemanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidgetItem>
#include <QDebug>
#include "secwindow.h"

report::report(QString &userEmail,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::report)
    , userEmail(userEmail)
{
    ui->setupUi(this);


    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Source Type" << "Income Amount" << "Category" << "Expense Amount");
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);


}

report::~report()
{
    delete ui;
}

void report::on_add_clicked()
{
    DatabaseManager dbManager;
    double totalIncome = 0.0;
    double totalExpense = 0.0;
    int row = 0;


    QSqlQuery incomeQuery;
    incomeQuery.prepare("SELECT source_type, amount FROM income WHERE user_email = :email");
    incomeQuery.bindValue(":email", userEmail);
    if (incomeQuery.exec()) {
        while (incomeQuery.next()) {
            QString sourceType = incomeQuery.value(0).toString();
            double incomeAmount = incomeQuery.value(1).toDouble();


            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(sourceType));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(incomeAmount, 'f', 2)));

            totalIncome += incomeAmount;
            row++;
        }
    } else {
        qDebug() << "Error fetching income data: " << incomeQuery.lastError();
    }


    QSqlQuery expenseQuery;
    expenseQuery.prepare("SELECT category, amount FROM expenses WHERE user_email = :email");
    expenseQuery.bindValue(":email", userEmail);
    row = 0;

    if (expenseQuery.exec()) {
        while (expenseQuery.next()) {
            QString category = expenseQuery.value(0).toString();
            double expenseAmount = expenseQuery.value(1).toDouble();


            if (row < ui->tableWidget->rowCount()) {
                ui->tableWidget->setItem(row, 2, new QTableWidgetItem(category));
                ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(expenseAmount, 'f', 2)));
            } else {
                ui->tableWidget->insertRow(row);
                ui->tableWidget->setItem(row, 2, new QTableWidgetItem(category));
                ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(expenseAmount, 'f', 2)));
            }

            totalExpense += expenseAmount;
            row++;
        }
    } else {
        qDebug() << "Error fetching expense data: " << expenseQuery.lastError();
    }


    double savings = totalIncome - totalExpense;
    ui->label_2->setText("Total Income: " + QString::number(totalIncome, 'f', 2));
    ui->label_3->setText("Total Expense: " + QString::number(totalExpense, 'f', 2));
    ui->label_4->setText("Savings: " + QString::number(savings, 'f', 2));
}


void report::on_add_2_clicked()
{
    hide();
    secwindow *Sec;
    Sec =new secwindow(userEmail,this);
    Sec->show();
}
