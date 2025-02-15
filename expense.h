#ifndef EXPENSE_H
#define EXPENSE_H

#include <QDialog>
#include "databasemanager.h"
#include <QTableWidget>

namespace Ui {
class expense;
}

class expense : public QDialog
{
    Q_OBJECT

public:

    explicit expense(const QString userEmail, QWidget *parent = nullptr);

    ~expense();

private slots:


    void on_add2_clicked();

    void on_login_3_clicked();

private:
    Ui::expense *ui;
    DatabaseManager dbManager;
    QString userEmail;
};

#endif // EXPENSE_H
