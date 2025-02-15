/********************************************************************************
** Form generated from reading UI file 'barchart.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCHART_H
#define UI_BARCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_barchart
{
public:
    QScrollBar *verticalScrollBar;

    void setupUi(QDialog *barchart)
    {
        if (barchart->objectName().isEmpty())
            barchart->setObjectName("barchart");
        barchart->resize(643, 437);
        verticalScrollBar = new QScrollBar(barchart);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(70, 60, 521, 311));
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);

        retranslateUi(barchart);

        QMetaObject::connectSlotsByName(barchart);
    } // setupUi

    void retranslateUi(QDialog *barchart)
    {
        barchart->setWindowTitle(QCoreApplication::translate("barchart", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class barchart: public Ui_barchart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCHART_H
