/********************************************************************************
** Form generated from reading UI file 'income.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_H
#define UI_INCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_income
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLineEdit *amount;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QCalendarWidget *calendarWidget;
    QLineEdit *discrip;
    QPushButton *add;
    QPushButton *login_3;
    QPushButton *login_4;

    void setupUi(QDialog *income)
    {
        if (income->objectName().isEmpty())
            income->setObjectName("income");
        income->resize(637, 398);
        label = new QLabel(income);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 0, 201, 41));
        label_2 = new QLabel(income);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 51, 31));
        comboBox = new QComboBox(income);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 50, 161, 22));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border-radius:4px;\n"
"}"));
        label_3 = new QLabel(income);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 240, 111, 31));
        amount = new QLineEdit(income);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(20, 270, 151, 21));
        amount->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        amount->setEchoMode(QLineEdit::EchoMode::Normal);
        amount->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        label_4 = new QLabel(income);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 290, 111, 31));
        tableWidget = new QTableWidget(income);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(230, 70, 391, 281));
        label_5 = new QLabel(income);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 70, 51, 31));
        calendarWidget = new QCalendarWidget(income);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(20, 100, 201, 131));
        discrip = new QLineEdit(income);
        discrip->setObjectName("discrip");
        discrip->setGeometry(QRect(20, 320, 151, 21));
        discrip->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        discrip->setEchoMode(QLineEdit::EchoMode::Normal);
        discrip->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        add = new QPushButton(income);
        add->setObjectName("add");
        add->setGeometry(QRect(20, 360, 151, 21));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        login_3 = new QPushButton(income);
        login_3->setObjectName("login_3");
        login_3->setGeometry(QRect(480, 360, 141, 21));
        login_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        login_4 = new QPushButton(income);
        login_4->setObjectName("login_4");
        login_4->setGeometry(QRect(230, 360, 141, 21));
        login_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));

        retranslateUi(income);

        QMetaObject::connectSlotsByName(income);
    } // setupUi

    void retranslateUi(QDialog *income)
    {
        income->setWindowTitle(QCoreApplication::translate("income", "Income", nullptr));
        label->setText(QCoreApplication::translate("income", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:700;\">INCOME</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("income", "<html><head/><body><p><span style=\" font-weight:700;\">Source :</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("income", "<html><head/><body><p><span style=\" font-weight:700;\">Amount :</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("income", "<html><head/><body><p><span style=\" font-weight:700;\">Description :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("income", "<html><head/><body><p><span style=\" font-weight:700;\">Date :</span></p></body></html>", nullptr));
        add->setText(QCoreApplication::translate("income", "ADD", nullptr));
        login_3->setText(QCoreApplication::translate("income", "BACK", nullptr));
        login_4->setText(QCoreApplication::translate("income", "SET BUDGET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class income: public Ui_income {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_H
