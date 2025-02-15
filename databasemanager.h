

#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class DatabaseManager
{
public:
    DatabaseManager();
    bool createConnection();
    bool createUser(const QString &firstName, const QString &lastName, const QString &email, const QString &password);
    bool userExists(const QString &email, const QString &password);

    bool createIncomeTable(); // creating income table
    bool addIncome(const QString &email, const QString &sourceType, const QDate &date, double amount, const QString &description);

    bool createExpenseTable(); // create expense table
    bool addExpense(const QString &email, const QString &category, const QDate &date, double amount, const QString &description);

    bool createBudgetTable(); // create expense table
    bool addBudget(const QString &email, const QString &category, double amount);

    bool createAcademicTable(); // create academic table
    bool addAcademicRecord(const QString &email, const QString &courseCode, const QDate &date, const QTime &time);


    bool createDeadlineTable(); //create academic table
    bool addDeadline(const QString &email, const QString &courseCode, const QDate &date, const QTime &time, const QString &description);

   double getMonthlyExpenses(const QString &userEmail, const QString &category, const QDate &date) ;

    QList<QPair<QString, QDate>> getDeadlinesDueTomorrow(const QString &userEmail);

   double getBudget(const QString &userEmail, const QString &category);

};

#endif // DATABASEMANAGER_H
