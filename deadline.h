#ifndef DEADLINE_H
#define DEADLINE_H

#include <QDialog>
#include "databasemanager.h"
#include <QTableWidget>


namespace Ui {
class deadline;
}

class deadline : public QDialog
{
    Q_OBJECT

public:
    explicit deadline(QString userEmail,QWidget *parent = nullptr);
    ~deadline();

private slots:
    void on_add_clicked();

    void on_login_3_clicked();

private:
    Ui::deadline *ui;
    DatabaseManager dbManager;
    QString userEmail;

    void checkDeadlinesDueTomorrow();
    void loadDeadlines();

};

#endif // DEADLINE_H
