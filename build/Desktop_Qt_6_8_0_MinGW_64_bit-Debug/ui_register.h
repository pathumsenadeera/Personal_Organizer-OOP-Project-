/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QLabel *label;
    QLabel *label_username;
    QLineEdit *firstname;
    QLabel *label_username_2;
    QLineEdit *lastname;
    QLabel *label_username_3;
    QLineEdit *email;
    QLabel *label_username_4;
    QLineEdit *password;
    QLabel *label_username_5;
    QLineEdit *confirm;
    QPushButton *signup;
    QLabel *label_username_6;
    QPushButton *signup_2;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(531, 338);
        widget = new QWidget(Register);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(220, 0, 291, 301));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image:url(:/image/signup.png/);\n"
"}"));
        label = new QLabel(Register);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 191, 31));
        label_username = new QLabel(Register);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(20, 40, 121, 21));
        firstname = new QLineEdit(Register);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(20, 60, 191, 21));
        firstname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        label_username_2 = new QLabel(Register);
        label_username_2->setObjectName("label_username_2");
        label_username_2->setGeometry(QRect(20, 80, 121, 21));
        lastname = new QLineEdit(Register);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(20, 100, 191, 21));
        lastname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        label_username_3 = new QLabel(Register);
        label_username_3->setObjectName("label_username_3");
        label_username_3->setGeometry(QRect(20, 120, 121, 21));
        email = new QLineEdit(Register);
        email->setObjectName("email");
        email->setGeometry(QRect(20, 140, 191, 21));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        label_username_4 = new QLabel(Register);
        label_username_4->setObjectName("label_username_4");
        label_username_4->setGeometry(QRect(20, 160, 121, 21));
        password = new QLineEdit(Register);
        password->setObjectName("password");
        password->setGeometry(QRect(20, 180, 191, 21));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        password->setEchoMode(QLineEdit::EchoMode::Password);
        label_username_5 = new QLabel(Register);
        label_username_5->setObjectName("label_username_5");
        label_username_5->setGeometry(QRect(20, 200, 121, 21));
        confirm = new QLineEdit(Register);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(20, 220, 191, 21));
        confirm->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        confirm->setEchoMode(QLineEdit::EchoMode::Password);
        signup = new QPushButton(Register);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(50, 250, 121, 21));
        signup->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        label_username_6 = new QLabel(Register);
        label_username_6->setObjectName("label_username_6");
        label_username_6->setGeometry(QRect(20, 270, 211, 21));
        signup_2 = new QPushButton(Register);
        signup_2->setObjectName("signup_2");
        signup_2->setGeometry(QRect(50, 290, 121, 21));
        signup_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Signup", nullptr));
        label->setText(QCoreApplication::translate("Register", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">CREATE ACCOUNT</span></p></body></html>", nullptr));
        label_username->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">First name</span></p></body></html>", nullptr));
        label_username_2->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Last name</span></p></body></html>", nullptr));
        label_username_3->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">E-mail</span></p></body></html>", nullptr));
        label_username_4->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Password</span></p></body></html>", nullptr));
        label_username_5->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Confirm Password</span></p></body></html>", nullptr));
        signup->setText(QCoreApplication::translate("Register", "SIGN UP", nullptr));
        label_username_6->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt;\">Do you have an account?</span></p></body></html>", nullptr));
        signup_2->setText(QCoreApplication::translate("Register", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
