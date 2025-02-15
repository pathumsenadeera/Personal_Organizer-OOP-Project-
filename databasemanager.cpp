

#include "databasemanager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDate>

DatabaseManager::DatabaseManager()
{
    createConnection();
    createIncomeTable();
    createExpenseTable();
    createBudgetTable();
    createAcademicTable();
    createDeadlineTable();
}

bool DatabaseManager::createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("users.db");

    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
        return false;
    } else {
        qDebug() << "Database: connection ok";
        QSqlQuery query;
        query.exec("CREATE TABLE IF NOT EXISTS users ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "first_name TEXT NOT NULL, "
                   "last_name TEXT NOT NULL, "
                   "email TEXT NOT NULL UNIQUE, "
                   "password TEXT NOT NULL)");
        return true;
    }
}

bool DatabaseManager::createUser(const QString &firstName, const QString &lastName, const QString &email, const QString &password)
{
    QSqlQuery query;
    query.prepare("INSERT INTO users (first_name, last_name, email, password) VALUES (:first_name, :last_name, :email, :password)");
    query.bindValue(":first_name", firstName);
    query.bindValue(":last_name", lastName);
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error creating user: " << query.lastError();
        return false;
    }
}

bool DatabaseManager::userExists(const QString &email, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE email = :email AND password = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        return true;
    } else {
        return false;
    }
}

bool DatabaseManager::createIncomeTable()
{
    QSqlQuery query;
    return query.exec("CREATE TABLE IF NOT EXISTS income ("
                      "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                      "user_email TEXT NOT NULL, "
                      "source_type TEXT NOT NULL, "
                      "date DATE NOT NULL, "
                      "amount REAL NOT NULL, "
                      "description TEXT, "
                      "FOREIGN KEY (user_email) REFERENCES users(email))");
}

bool DatabaseManager::addIncome(const QString &email, const QString &sourceType, const QDate &date, double amount, const QString &description)
{
    QSqlQuery query;
    query.prepare("INSERT INTO income (user_email, source_type, date, amount, description) "
                  "VALUES (:user_email, :source_type, :date, :amount, :description)");
    query.bindValue(":user_email", email);
    query.bindValue(":source_type", sourceType);
    query.bindValue(":date", date.toString("yyyy-MM-dd"));
    query.bindValue(":amount", amount);
    query.bindValue(":description", description);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding income: " << query.lastError();
        return false;
    }

}




bool DatabaseManager::createExpenseTable()
{
    QSqlQuery query;
    return query.exec("CREATE TABLE IF NOT EXISTS expenses ("
                      "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                      "user_email TEXT NOT NULL, "
                      "category TEXT NOT NULL, "
                      "date DATE NOT NULL, "
                      "amount REAL NOT NULL, "
                      "description TEXT, "
                      "FOREIGN KEY (user_email) REFERENCES users(email))");
}

bool DatabaseManager::addExpense(const QString &email, const QString &category, const QDate &date, double amount, const QString &description)
{
    QSqlQuery query;
    query.prepare("INSERT INTO expenses (user_email, category, date, amount, description) "
                  "VALUES (:user_email, :category, :date, :amount, :description)");
    query.bindValue(":user_email", email);
    query.bindValue(":category", category);
    query.bindValue(":date", date.toString("yyyy-MM-dd"));
    query.bindValue(":amount", amount);
    query.bindValue(":description", description);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding expense: " << query.lastError();
        return false;
    }
}



bool DatabaseManager::createBudgetTable()
{
    QSqlQuery query;
    return query.exec("CREATE TABLE IF NOT EXISTS Budget ("
                      "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                      "user_email TEXT NOT NULL, "
                      "category TEXT NOT NULL, "
                      "amount REAL NOT NULL, "

                      "FOREIGN KEY (user_email) REFERENCES users(email))");
}

bool DatabaseManager::addBudget(const QString &email, const QString &category,double amount)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Budget (user_email, category, amount) "
                  "VALUES (:user_email, :category,:amount)");
    query.bindValue(":user_email", email);
    query.bindValue(":category", category);

    query.bindValue(":amount", amount);


    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding Budget: " << query.lastError();
        return false;
    }
}



bool DatabaseManager::createAcademicTable()
{
    QSqlQuery query;
    return query.exec("CREATE TABLE IF NOT EXISTS academic ("
                      "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                      "user_email TEXT NOT NULL, "
                      "course_code TEXT NOT NULL, "
                      "date DATE NOT NULL, "
                      "time TIME NOT NULL, "
                      "FOREIGN KEY (user_email) REFERENCES users(email))");
}

bool DatabaseManager::addAcademicRecord(const QString &email, const QString &courseCode, const QDate &date, const QTime &time)
{
    QSqlQuery query;
    query.prepare("INSERT INTO academic (user_email, course_code, date, time) "
                  "VALUES (:user_email, :course_code, :date, :time)");
    query.bindValue(":user_email", email);
    query.bindValue(":course_code", courseCode);
    query.bindValue(":date", date.toString("yyyy-MM-dd"));
    query.bindValue(":time", time.toString("HH:mm:ss"));

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding academic record: " << query.lastError();
        return false;
    }
}



bool DatabaseManager::createDeadlineTable()
{
    QSqlQuery query;
    return query.exec("CREATE TABLE IF NOT EXISTS deadline ("
                      "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                      "user_email TEXT NOT NULL, "
                      "course_code TEXT NOT NULL, "
                      "date DATE NOT NULL, "
                      "time TIME NOT NULL, "
                      "description TEXT, "
                      "FOREIGN KEY (user_email) REFERENCES users(email))");
}



bool DatabaseManager::addDeadline(const QString &email, const QString &courseCode, const QDate &date, const QTime &time, const QString &description)
{
    QSqlQuery query;
    query.prepare("INSERT INTO deadline (user_email, course_code, date, time, description) "
                  "VALUES (:user_email, :course_code, :date, :time, :description)");
    query.bindValue(":user_email", email);
    query.bindValue(":course_code", courseCode);
    query.bindValue(":date", date.toString("yyyy-MM-dd"));
    query.bindValue(":time", time.toString("HH:mm:ss"));
    query.bindValue(":description", description);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding deadline record: " << query.lastError();
        return false;
    }
}




QList<QPair<QString, QDate>> DatabaseManager::getDeadlinesDueTomorrow(const QString &userEmail)
{
    QList<QPair<QString, QDate>> deadlines;

    QSqlQuery query;
    query.prepare("SELECT course_code, date FROM deadline WHERE user_email = :email AND date = :tomorrow");
    query.bindValue(":email", userEmail);
    query.bindValue(":tomorrow", QDate::currentDate().addDays(1).toString("yyyy-MM-dd"));

    if (query.exec()) {
        while (query.next()) {
            QString courseCode = query.value("course_code").toString();
            QDate date = query.value("date").toDate();
            deadlines.append(qMakePair(courseCode, date));
        }
    } else {
        qDebug() << "Error fetching deadlines due tomorrow: " << query.lastError();
    }
    return deadlines;
}


double DatabaseManager::getBudget(const QString &userEmail, const QString &category) {
    QSqlQuery query;
    query.prepare("SELECT amount FROM Budget WHERE user_email = :userEmail AND category = :category");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":category", category);

    if (query.exec() && query.next()) {
        return query.value(0).toDouble();
    }
    return 0.0; // Return 0 if no budget is set
}

double DatabaseManager::getMonthlyExpenses(const QString &userEmail, const QString &category, const QDate &date) {
    QSqlQuery query;
    query.prepare("SELECT SUM(amount) FROM expenses "
                  "WHERE user_email = :user_email AND category = :category "
                  "AND strftime('%Y-%m', date) = :monthYear");
    query.bindValue(":user_email", userEmail);
    query.bindValue(":category", category);
    query.bindValue(":monthYear", date.toString("yyyy-MM"));

    if (query.exec() && query.next()) {
        return query.value(0).toDouble();
    } else {
        qDebug() << "Error calculating monthly expenses: " << query.lastError();
        return 0.0;
    }
}
