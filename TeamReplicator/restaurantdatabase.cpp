#include "restaurantdatabase.h"
#include <QApplication>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QVariant>
const QString RestaurantDatabase::getEmployeeFmt = "SELECT * FROM `employees` WHERE %1=%2";
const QString RestaurantDatabase::addEmployeeFmt = "INSERT INTO `employees` (Emp_Id, Name, Lvl, Pin) VALUES (%1, %2, %3, %4)";
const QString RestaurantDatabase::addOrderFmt = "INSERT INTO ";
const QString RestaurantDatabase::addItemFmt = "";


RestaurantDatabase::RestaurantDatabase()
{

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("replicator");
    db.setUserName("root");
    db.setPassword("");
    if (!db.open())
    {
        qDebug() << "Database not open! Quitting Application.";
        QApplication::quit();
    }
}

Employee *RestaurantDatabase::getEmployeeFromDb(QString key, QString value)
{
    QString queryStr = getEmployeeFmt.arg(key, value);
    qDebug() << "Query: " << queryStr;
    QSqlQuery query(queryStr, db);

    query.exec();
    query.next();

    if (!query.isValid())
        return nullptr;

    Employee *employee = new Employee;
    employee -> setName(query.value("Name").toString());
    employee -> setLevel(query.value("Lvl").toInt());
    employee -> setPin(query.value("Pin").toString());
    employee -> setId(query.value("Emp_Id").toString());

    return employee;
}

Employee *RestaurantDatabase::getEmployeeByName(QString name)
{
    return getEmployeeFromDb("Name", "'" + name + "'");
}

Employee *RestaurantDatabase::getEmployeeById(QString ID)
{
    return getEmployeeFromDb("Emp_Id", ID);
}

Employee *RestaurantDatabase::getEmployeeByPin(QString pin)
{
    return getEmployeeFromDb("Pin", pin);
}

void RestaurantDatabase::addEmployeeToDb(Employee *employee)
{
    QString name = employee -> getName();
    QString level = employee -> getLevel();
    QString pin = employee -> getPin();
    QString ID = employee -> getId();

    QString queryStr = addEmployeeFmt.arg(ID, name, level, pin);
    QSqlQuery query(queryStr, db);

    query.exec();

    if (!query.isValid())
        qDebug() << "addEmployeeToDb: Failed to insert " << name << " to DB!";
}

void RestaurantDatabase::addOrderToDb(Order *order)
{

}

int RestaurantDatabase::getOrderNumber()
{
    QString queryStr = "SELECT Id FROM `sales` ORDER BY Id DESC LIMIT 1";
    QSqlQuery query(queryStr, db);

    query.exec();
    query.next();

    int orderNum = query.value("Id").toInt();

    return (orderNum != 0) ? orderNum + 1 : -1;
}
