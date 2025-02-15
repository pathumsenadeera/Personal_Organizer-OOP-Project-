#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secwindow.h"
#include <QSqlDatabase>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_login_clicked()
{
    QString email = ui->username->text();
    QString password = ui->password->text();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Signup", "All fields must be filled!");
        return;
    }

    if (dbManager.userExists(email, password)) {
        QMessageBox::information(this, "Login", "Login successful");
        userEmail = email;
        hide();
        Secwindow = new secwindow(userEmail, this);
        Secwindow->show();
    } else {
        QMessageBox::warning(this, "Login", "Invalid email or password");
    }
}



void MainWindow::on_pushButton_2_clicked()
{
   close();
    registerDialog = new Register(this);
    registerDialog->show();
}



