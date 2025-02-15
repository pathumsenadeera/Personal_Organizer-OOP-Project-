/********************************************************************************
** Form generated from reading UI file 'deadline.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEADLINE_H
#define UI_DEADLINE_H

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

class Ui_deadline
{
public:
    QLabel *label;
    QPushButton *login_3;
    QCalendarWidget *calendarWidget;
    QLineEdit *discrip;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QPushButton *add;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *course;
    QLabel *label_6;
    QTimeEdit *timeEdit;

    void setupUi(QDialog *deadline)
    {
        if (deadline->objectName().isEmpty())
            deadline->setObjectName("deadline");
        deadline->resize(644, 418);
        label = new QLabel(deadline);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 201, 41));
        login_3 = new QPushButton(deadline);
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
        calendarWidget = new QCalendarWidget(deadline);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(20, 130, 201, 131));
        discrip = new QLineEdit(deadline);
        discrip->setObjectName("discrip");
        discrip->setGeometry(QRect(20, 340, 151, 21));
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
        tableWidget = new QTableWidget(deadline);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(230, 70, 391, 291));
        label_4 = new QLabel(deadline);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 310, 111, 31));
        add = new QPushButton(deadline);
        add->setObjectName("add");
        add->setGeometry(QRect(20, 370, 151, 21));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        label_3 = new QLabel(deadline);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 50, 111, 31));
        label_5 = new QLabel(deadline);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 100, 81, 31));
        course = new QLineEdit(deadline);
        course->setObjectName("course");
        course->setGeometry(QRect(20, 80, 151, 21));
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
        label_6 = new QLabel(deadline);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 260, 51, 31));
        timeEdit = new QTimeEdit(deadline);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(20, 290, 151, 22));
        timeEdit->setStyleSheet(QString::fromUtf8("QTime{\n"
"border-radius:4px;\n"
"}"));

        retranslateUi(deadline);

        QMetaObject::connectSlotsByName(deadline);
    } // setupUi

    void retranslateUi(QDialog *deadline)
    {
        deadline->setWindowTitle(QCoreApplication::translate("deadline", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deadline", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:700;\">DEADLINE</span></p></body></html>", nullptr));
        login_3->setText(QCoreApplication::translate("deadline", "BACK", nullptr));
        label_4->setText(QCoreApplication::translate("deadline", "<html><head/><body><p><span style=\" font-weight:700;\">Description :</span></p></body></html>", nullptr));
        add->setText(QCoreApplication::translate("deadline", "ADD", nullptr));
        label_3->setText(QCoreApplication::translate("deadline", "<html><head/><body><p><span style=\" font-weight:700;\">Course Code :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("deadline", "<html><head/><body><p><span style=\" font-weight:700;\">Deadline Date :</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("deadline", "<html><head/><body><p><span style=\" font-weight:700;\">Time :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deadline: public Ui_deadline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEADLINE_H
