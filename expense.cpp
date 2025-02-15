#include "expense.h"
#include "ui_expense.h"
#include "databasemanager.h"
#include <QDate>
#include <QDebug>
#include <QMessageBox>
#include "secwindow.h"


expense::expense(const QString userEmail, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::expense),userEmail(userEmail)
{
    ui->setupUi(this);
    ui->comboBox2->addItem("Choose");
    ui->comboBox2->addItem("Food");
    ui->comboBox2->addItem("Entertainment");
    ui->comboBox2->addItem("Travelling");
    ui->comboBox2->addItem("Clothing");
    ui->comboBox2->addItem("Educational Equipment");
    ui->comboBox2->addItem("University Fees");


    ui->tableWidget2->setColumnCount(4);
    ui->tableWidget2->setHorizontalHeaderLabels(QStringList() << "Category" << "Date" << "Amount" << "Description");
    ui->tableWidget2->horizontalHeader()->setStretchLastSection(true);


}

expense::~expense()
{
    delete ui;
}




void expense::on_add2_clicked() {
    QString category = ui->comboBox2->currentText();
    QDate date = ui->calendarWidget->selectedDate();
    double amount = ui->amount->text().toDouble();
    QString description = ui->discrip->text();


    if (category == "Choose" || amount <= 0) {
        qDebug() << "Invalid input data";
        QMessageBox::warning(this, "Invalid Input", "Please select a valid category and enter a positive amount.");
        return;
    }

    DatabaseManager dbManager;


    if (dbManager.addExpense(userEmail, category, date, amount, description)) {
        qDebug() << "Expense record added successfully";
    } else {
        qDebug() << "Failed to add expense record";
        QMessageBox::critical(this, "Error", "Failed to add expense to the database.");
        return;
    }


    double monthlyExpenses = dbManager.getMonthlyExpenses(userEmail, category, date);
    double budgetAmount = dbManager.getBudget(userEmail, category);


    if (monthlyExpenses > budgetAmount) {
        QString message = QString("Warning: You have exceeded your budget for %1! "
                                  "Budget: Rs. %2, Current spending: Rs. %3.")
                              .arg(category)
                              .arg(budgetAmount, 0, 'f', 2)
                              .arg(monthlyExpenses, 0, 'f', 2);
        QMessageBox::warning(this, "Budget Exceeded", message);
    } else {
        QMessageBox::information(this, "Success", "Expense added successfully.");
    }


    ui->tableWidget2->setRowCount(0);
    QSqlQuery query;
    query.prepare("SELECT category, date, amount, description FROM expenses WHERE user_email = :user_email");
    query.bindValue(":user_email", userEmail);

    if(query.exec()) {
        int row = 0;
        while(query.next()) {
            ui->tableWidget2->insertRow(row);

            QString category = query.value("category").toString();
            QString date = query.value("date").toString();
            QString amount = QString::number(query.value("amount").toDouble(), 'f', 2);
            QString description = query.value("description").toString();

            ui->tableWidget2->setItem(row, 0, new QTableWidgetItem(category));
            ui->tableWidget2->setItem(row, 1, new QTableWidgetItem(date));
            ui->tableWidget2->setItem(row, 2, new QTableWidgetItem(amount));
            ui->tableWidget2->setItem(row, 3, new QTableWidgetItem(description));

            row++;
        }
    } else {
        qDebug() << "Error fetching expense data: " << query.lastError().text();
    }
}



void expense::on_login_3_clicked()
{
    hide();
    secwindow *Sec;
    Sec =new secwindow(userEmail,this);
    Sec->show();
}



