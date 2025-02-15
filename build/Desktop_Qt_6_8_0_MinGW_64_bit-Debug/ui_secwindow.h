/********************************************************************************
** Form generated from reading UI file 'secwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECWINDOW_H
#define UI_SECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secwindow
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *emaillabel;
    QPushButton *pushButton_7;

    void setupUi(QDialog *secwindow)
    {
        if (secwindow->objectName().isEmpty())
            secwindow->setObjectName("secwindow");
        secwindow->resize(586, 356);
        pushButton_2 = new QPushButton(secwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 140, 131, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"}"));
        pushButton_3 = new QPushButton(secwindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 190, 131, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"}"));
        widget = new QWidget(secwindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(200, 40, 331, 311));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image:url(:/image/sec.png/);\n"
"}"));
        pushButton_5 = new QPushButton(secwindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 90, 131, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"}"));
        pushButton_6 = new QPushButton(secwindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 250, 131, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"}"));
        emaillabel = new QLabel(secwindow);
        emaillabel->setObjectName("emaillabel");
        emaillabel->setGeometry(QRect(30, 10, 311, 41));
        emaillabel->setTextFormat(Qt::TextFormat::RichText);
        emaillabel->setScaledContents(false);
        pushButton_7 = new QPushButton(secwindow);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(450, 310, 111, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"}"));
        widget->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        emaillabel->raise();
        pushButton_7->raise();

        retranslateUi(secwindow);

        QMetaObject::connectSlotsByName(secwindow);
    } // setupUi

    void retranslateUi(QDialog *secwindow)
    {
        secwindow->setWindowTitle(QCoreApplication::translate("secwindow", "Personal Organizer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("secwindow", "Add Expense", nullptr));
        pushButton_3->setText(QCoreApplication::translate("secwindow", "Generate Report", nullptr));
        pushButton_5->setText(QCoreApplication::translate("secwindow", "Add Income", nullptr));
        pushButton_6->setText(QCoreApplication::translate("secwindow", "Academic Schedule", nullptr));
        emaillabel->setText(QCoreApplication::translate("secwindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\"><br/></span></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("secwindow", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secwindow: public Ui_secwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECWINDOW_H
