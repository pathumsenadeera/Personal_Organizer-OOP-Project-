
#ifndef INCOME_H
#define INCOME_H

#include <QDialog>
#include "databasemanager.h"
#include <QTableWidget>

namespace Ui {
class income;
}

class income : public QDialog
{
    Q_OBJECT

public:
  explicit income(const QString &userEmail, QWidget *parent = nullptr);

    ~income();

private slots:


    void on_add_clicked();



    void on_login_3_clicked();

    void on_login_4_clicked();

private:


    Ui::income *ui;
    DatabaseManager dbManager;
    QString userEmail;

};

#endif // INCOME_H

