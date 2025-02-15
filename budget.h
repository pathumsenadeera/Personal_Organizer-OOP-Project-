#ifndef BUDGET_H
#define BUDGET_H
#include "databasemanager.h"

#include <QDialog>

namespace Ui {
class Budget;
}

class Budget : public QDialog
{
    Q_OBJECT

public:
    explicit Budget(QString userEmail,QWidget *parent = nullptr);
    ~Budget();

private slots:
    void on_add_clicked();

    void on_add_2_clicked();

private:
    Ui::Budget *ui;
    DatabaseManager dbManager;
    QString userEmail;
};

#endif // BUDGET_H
