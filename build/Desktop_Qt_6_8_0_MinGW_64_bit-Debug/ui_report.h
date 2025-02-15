/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *add;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *add_2;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName("report");
        report->resize(632, 445);
        label = new QLabel(report);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 0, 201, 41));
        tableWidget = new QTableWidget(report);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 100, 411, 291));
        add = new QPushButton(report);
        add->setObjectName("add");
        add->setGeometry(QRect(10, 400, 161, 21));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        label_4 = new QLabel(report);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(440, 260, 171, 41));
        label_4->setFrameShape(QFrame::Shape::Box);
        label_4->setFrameShadow(QFrame::Shadow::Plain);
        label_4->setLineWidth(2);
        label_4->setMidLineWidth(0);
        label_3 = new QLabel(report);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 200, 171, 41));
        label_3->setFrameShape(QFrame::Shape::Box);
        label_3->setFrameShadow(QFrame::Shadow::Plain);
        label_3->setLineWidth(2);
        label_3->setMidLineWidth(0);
        label_2 = new QLabel(report);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(440, 130, 171, 41));
        label_2->setFrameShape(QFrame::Shape::Box);
        label_2->setFrameShadow(QFrame::Shadow::Plain);
        label_2->setLineWidth(2);
        label_2->setMidLineWidth(0);
        add_2 = new QPushButton(report);
        add_2->setObjectName("add_2");
        add_2->setGeometry(QRect(260, 400, 161, 21));
        add_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        label_5 = new QLabel(report);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 60, 211, 41));
        label_5->setFrameShape(QFrame::Shape::Box);
        label_5->setFrameShadow(QFrame::Shadow::Plain);
        label_5->setLineWidth(2);
        label_5->setMidLineWidth(0);
        label_6 = new QLabel(report);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 60, 201, 41));
        label_6->setFrameShape(QFrame::Shape::Box);
        label_6->setFrameShadow(QFrame::Shadow::Plain);
        label_6->setLineWidth(2);
        label_6->setMidLineWidth(0);

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QDialog *report)
    {
        report->setWindowTitle(QCoreApplication::translate("report", "Report", nullptr));
        label->setText(QCoreApplication::translate("report", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:700;\">REPORT</span></p></body></html>", nullptr));
        add->setText(QCoreApplication::translate("report", "VIEW REPORT", nullptr));
        label_4->setText(QString());
        label_3->setText(QString());
        label_2->setText(QString());
        add_2->setText(QCoreApplication::translate("report", "BACK", nullptr));
        label_5->setText(QCoreApplication::translate("report", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">INCOME</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("report", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">EXPENSE</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
