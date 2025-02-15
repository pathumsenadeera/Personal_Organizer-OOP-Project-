#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QMessageBox>
#include "databasemanager.h"
#include "secwindow.h"


namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_signup_clicked();

    void on_signup_2_clicked();

private:
    Ui::Register *ui;
    DatabaseManager dbManager;
    QString userEmail;



};

#endif // REGISTER_H
