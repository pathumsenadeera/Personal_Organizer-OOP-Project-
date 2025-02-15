#include "secwindow.h"
#include "ui_secwindow.h"
#include "income.h"
#include "report.h"
#include "mainwindow.h"
#include "acedamic.h"


secwindow::secwindow(const QString &userEmail, QWidget *parent)
    : QDialog(parent), ui(new Ui::secwindow), userEmail(userEmail)
{
    ui->setupUi(this);
    ui->emaillabel->setText("WELCOME " + userEmail);
}
secwindow::~secwindow()
{
    delete ui;
}

void secwindow::on_pushButton_5_clicked()
{
    income *Income;
    close();
    Income =new income(userEmail,this);
    Income->show();

}


void secwindow::on_pushButton_2_clicked()
{
    close();
    Expense= new expense(userEmail,this);
    Expense->show();
}


void secwindow::on_pushButton_3_clicked()
{
    close();
    report *Report;
    Report = new report(userEmail,this);
    Report->show();
}


void secwindow::on_pushButton_7_clicked()
{
    close();
    MainWindow*main =new MainWindow(this);
    main->show();
}


void secwindow::on_pushButton_6_clicked()
{
    close();
    acedamic *Academic;
    Academic = new acedamic(userEmail,this);
    Academic->show();

}
