/********************************************************************************
** Form generated from reading UI file 'acedamic.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACEDAMIC_H
#define UI_ACEDAMIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_acedamic
{
public:
    QLineEdit *course;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QPushButton *add;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QPushButton *add_2;
    QPushButton *add_3;

    void setupUi(QDialog *acedamic)
    {
        if (acedamic->objectName().isEmpty())
            acedamic->setObjectName("acedamic");
        acedamic->resize(683, 417);
        course = new QLineEdit(acedamic);
        course->setObjectName("course");
        course->setGeometry(QRect(30, 100, 151, 21));
        course->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"  \n"
"  border-radius: 4px; \n"
" \n"
"  background-color: #393939;x;\n"
"}\n"
""));
        course->setEchoMode(QLineEdit::EchoMode::Normal);
        course->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        label_3 = new QLabel(acedamic);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 70, 111, 31));
        tableWidget = new QTableWidget(acedamic);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(250, 80, 391, 281));
        add = new QPushButton(acedamic);
        add->setObjectName("add");
        add->setGeometry(QRect(30, 370, 151, 21));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        calendarWidget = new QCalendarWidget(acedamic);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(30, 150, 201, 131));
        label = new QLabel(acedamic);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 201, 41));
        label_5 = new QLabel(acedamic);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 120, 51, 31));
        label_6 = new QLabel(acedamic);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 290, 51, 31));
        timeEdit = new QTimeEdit(acedamic);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(30, 320, 151, 22));
        timeEdit->setStyleSheet(QString::fromUtf8("QTime{\n"
"border-radius:4px;\n"
"}"));
        add_2 = new QPushButton(acedamic);
        add_2->setObjectName("add_2");
        add_2->setGeometry(QRect(490, 370, 151, 21));
        add_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        add_3 = new QPushButton(acedamic);
        add_3->setObjectName("add_3");
        add_3->setGeometry(QRect(250, 370, 151, 21));
        add_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));

        retranslateUi(acedamic);

        QMetaObject::connectSlotsByName(acedamic);
    } // setupUi

    void retranslateUi(QDialog *acedamic)
    {
        acedamic->setWindowTitle(QCoreApplication::translate("acedamic", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("acedamic", "<html><head/><body><p><span style=\" font-weight:700;\">Course Code :</span></p></body></html>", nullptr));
        add->setText(QCoreApplication::translate("acedamic", "ADD", nullptr));
        label->setText(QCoreApplication::translate("acedamic", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:700;\">SCHEDULE</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("acedamic", "<html><head/><body><p><span style=\" font-weight:700;\">Date :</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("acedamic", "<html><head/><body><p><span style=\" font-weight:700;\">Time :</span></p></body></html>", nullptr));
        add_2->setText(QCoreApplication::translate("acedamic", "BACK", nullptr));
        add_3->setText(QCoreApplication::translate("acedamic", "SET DEADLINE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class acedamic: public Ui_acedamic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACEDAMIC_H
