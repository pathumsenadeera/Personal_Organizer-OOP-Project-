/********************************************************************************
** Form generated from reading UI file 'expense.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSE_H
#define UI_EXPENSE_H

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

class Ui_expense
{
public:
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *discrip;
    QLabel *label_2;
    QComboBox *comboBox2;
    QPushButton *add2;
    QCalendarWidget *calendarWidget;
    QLabel *label_3;
    QLineEdit *amount;
    QLabel *label;
    QPushButton *login_3;
    QTableWidget *tableWidget2;

    void setupUi(QDialog *expense)
    {
        if (expense->objectName().isEmpty())
            expense->setObjectName("expense");
        expense->resize(632, 407);
        label_4 = new QLabel(expense);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 300, 111, 31));
        label_5 = new QLabel(expense);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 80, 51, 31));
        discrip = new QLineEdit(expense);
        discrip->setObjectName("discrip");
        discrip->setGeometry(QRect(20, 330, 151, 21));
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
        label_2 = new QLabel(expense);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 30, 51, 31));
        comboBox2 = new QComboBox(expense);
        comboBox2->setObjectName("comboBox2");
        comboBox2->setGeometry(QRect(20, 60, 161, 22));
        comboBox2->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border-radius:4px;\n"
"}"));
        add2 = new QPushButton(expense);
        add2->setObjectName("add2");
        add2->setGeometry(QRect(20, 370, 151, 21));
        add2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        calendarWidget = new QCalendarWidget(expense);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(20, 110, 201, 131));
        label_3 = new QLabel(expense);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 250, 111, 31));
        amount = new QLineEdit(expense);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(20, 280, 151, 21));
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
        label = new QLabel(expense);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 201, 41));
        login_3 = new QPushButton(expense);
        login_3->setObjectName("login_3");
        login_3->setGeometry(QRect(480, 370, 141, 21));
        login_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        tableWidget2 = new QTableWidget(expense);
        tableWidget2->setObjectName("tableWidget2");
        tableWidget2->setGeometry(QRect(230, 80, 391, 281));

        retranslateUi(expense);

        QMetaObject::connectSlotsByName(expense);
    } // setupUi

    void retranslateUi(QDialog *expense)
    {
        expense->setWindowTitle(QCoreApplication::translate("expense", "Expense", nullptr));
        label_4->setText(QCoreApplication::translate("expense", "<html><head/><body><p><span style=\" font-weight:700;\">Description :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("expense", "<html><head/><body><p><span style=\" font-weight:700;\">Date :</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("expense", "<html><head/><body><p><span style=\" font-weight:700;\">Category</span></p></body></html>", nullptr));
        add2->setText(QCoreApplication::translate("expense", "ADD", nullptr));
        label_3->setText(QCoreApplication::translate("expense", "<html><head/><body><p><span style=\" font-weight:700;\">Amount :</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("expense", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:700;\">EXPENSES</span></p></body></html>", nullptr));
        login_3->setText(QCoreApplication::translate("expense", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expense: public Ui_expense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSE_H
