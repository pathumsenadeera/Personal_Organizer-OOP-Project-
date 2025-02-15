#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QDialog>
#include "expense.h"

namespace Ui {
class secwindow;
}

class secwindow : public QDialog
{
    Q_OBJECT

public:

    explicit secwindow(const QString &userEmail,QWidget *parent = nullptr);
    ~secwindow();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::secwindow *ui;
    QString userEmail;
    expense *Expense;
};

#endif // SECWINDOW_H
