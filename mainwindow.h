#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "register.h"
#include "secwindow.h"
#include "databasemanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    Register *registerDialog;
    DatabaseManager dbManager;
    secwindow *Secwindow;
    QString userEmail;

};

#endif // MAINWINDOW_H
