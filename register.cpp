#include "register.h"
#include "ui_register.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QRegularExpression>
#include "mainwindow.h"


Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_signup_clicked()
{
    QString firstName = ui->firstname->text();
    QString lastName = ui->lastname->text();
    QString email = ui->email->text();
    QString password = ui->password->text();
    QString confirmPassword = ui->confirm->text();


    if (firstName.isEmpty() || lastName.isEmpty() || email.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Signup", "All fields must be filled!");
        return;
    }

    // Validate email format
    QRegularExpression emailRegex("^[\\w\\.-]+@[\\w\\.-]+\\.[a-zA-Z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Signup", "Please enter a valid email address!");
        return;
    }

    // Check if passwords match
    if (password != confirmPassword) {
        QMessageBox::warning(this, "Signup", "Passwords do not match!");
        return;
    }

    // Create user in the database
    if (dbManager.createUser(firstName, lastName, email, password)) {
        QMessageBox::information(this, "Signup", "Account created successfully!");
        hide();


        close();
        MainWindow *mainwindow;
        mainwindow= new MainWindow(this);
        mainwindow->show();

    } else {
        QMessageBox::warning(this, "Signup", "Error: Could not create account. Email may already be in use.");
    }
}




void Register::on_signup_2_clicked()
{

    hide();
    MainWindow*main =new MainWindow(this);
    main->show();
}

