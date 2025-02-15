#ifndef ACEDAMIC_H
#define ACEDAMIC_H
#include <QDialog>
#include "databasemanager.h"

#include <QDialog>

namespace Ui {
class acedamic;
}

class acedamic : public QDialog
{
    Q_OBJECT

public:
    explicit acedamic(QString userEmail,QWidget *parent = nullptr);
    ~acedamic();

private slots:
    void on_add_clicked();

    void on_add_2_clicked();

    void on_add_3_clicked();

private:
    Ui::acedamic *ui;
    DatabaseManager dbManager;
    QString userEmail;


};

#endif // ACEDAMIC_H
