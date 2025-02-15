#ifndef REPORT_H
#define REPORT_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class report;
}

class report : public QDialog
{
    Q_OBJECT

public:
    explicit report(QString &userEmail,QWidget *parent = nullptr);

    ~report();

private slots:
    void on_add_clicked();

    void on_add_2_clicked();

private:
    Ui::report *ui;
    QString userEmail;
};

#endif // REPORT_H
