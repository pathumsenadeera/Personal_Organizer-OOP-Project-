/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_login;
    QLineEdit *username;
    QLabel *label_username;
    QLineEdit *password;
    QLabel *label_password;
    QPushButton *login;
    QLabel *label_login_2;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(530, 350);
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(210, 0, 301, 301));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image:url(:/image/bg.png/);\n"
"}"));
        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(40, 20, 121, 31));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(20, 80, 191, 21));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        label_username = new QLabel(centralwidget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(20, 60, 121, 21));
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(20, 130, 191, 21));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        password->setEchoMode(QLineEdit::EchoMode::Password);
        label_password = new QLabel(centralwidget);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(20, 110, 121, 21));
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(40, 190, 141, 21));
        login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        label_login_2 = new QLabel(centralwidget);
        label_login_2->setObjectName("label_login_2");
        label_login_2->setGeometry(QRect(50, 210, 121, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 240, 141, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 160, 101, 18));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_login->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">LOGIN</span></p></body></html>", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">E-mail</span></p></body></html>", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Password</span></p></body></html>", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_login_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">or</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "CREATE  ACCOUNT", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
