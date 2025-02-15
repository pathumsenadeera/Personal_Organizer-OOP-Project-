/********************************************************************************
** Form generated from reading UI file 'budget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGET_H
#define UI_BUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Budget
{
public:
    QLineEdit *amount;
    QPushButton *add;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *add_2;

    void setupUi(QDialog *Budget)
    {
        if (Budget->objectName().isEmpty())
            Budget->setObjectName("Budget");
        Budget->resize(629, 418);
        amount = new QLineEdit(Budget);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(20, 220, 161, 21));
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
        add = new QPushButton(Budget);
        add->setObjectName("add");
        add->setGeometry(QRect(20, 270, 151, 21));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));
        comboBox = new QComboBox(Budget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 150, 161, 22));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border-radius:4px;\n"
"}"));
        label_3 = new QLabel(Budget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 190, 111, 31));
        label_2 = new QLabel(Budget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 120, 51, 31));
        tableWidget = new QTableWidget(Budget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(200, 70, 391, 281));
        label = new QLabel(Budget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 0, 201, 41));
        add_2 = new QPushButton(Budget);
        add_2->setObjectName("add_2");
        add_2->setGeometry(QRect(440, 370, 151, 21));
        add_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#007cff;\n"
"border-radius:6px;\n"
"font-size:10px;\n"
"font-weight: bold;\n"
"color:white;\n"
"\n"
"}"));

        retranslateUi(Budget);

        QMetaObject::connectSlotsByName(Budget);
    } // setupUi

    void retranslateUi(QDialog *Budget)
    {
        Budget->setWindowTitle(QCoreApplication::translate("Budget", "Dialog", nullptr));
        add->setText(QCoreApplication::translate("Budget", "ADD", nullptr));
        label_3->setText(QCoreApplication::translate("Budget", "<html><head/><body><p><span style=\" font-weight:700;\">Set Limit</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Budget", "<html><head/><body><p><span style=\" font-weight:700;\">Category :</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Budget", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:700;\">BUDGET</span></p></body></html>", nullptr));
        add_2->setText(QCoreApplication::translate("Budget", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Budget: public Ui_Budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_H
