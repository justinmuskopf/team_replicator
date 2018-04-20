#include "restaurantdatabase.h"
#include <QApplication>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QVariant>
#include <QDate>
const QString RestaurantDatabase::getEmployeeFmt = "SELECT * FROM `employees` WHERE %1=%2";
const QString RestaurantDatabase::addEmployeeFmt = "INSERT INTO `employees` (Emp_Id, Name, Lvl, Pin) VALUES (%1, %2, %3, %4)";
//const QString RestaurantDatabase::addOrderFmt = "INSERT INTO `sales` (Emp_Id, Sale_Date, Total) VALUES (%1, %2, %3)";
const QString RestaurantDatabase::addOrderFmt = "INSERT INTO `sales` (Emp_Id, Sale_Date, Total, Table_Name) VALUES (%1, %2, %3, %4)"; //nk: 04/19/18: added 4th variable
const QString RestaurantDatabase::addItemFmt = "INSERT INTO `order_items` (Order_Id, Name, Price) VALUES (%1, %2, %3)";

//
RestaurantDatabase::RestaurantDatabase()
{
    db = QSqlDatabase::addDatabase(DB_TYPE);
    db.setHostName(DB_HOST);
    db.setDatabaseName(DB_NAME);
    db.setUserName(DB_USER);
    db.setPassword(DB_PASS);
    //db.setPort(DB_PORT);
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

void RestaurantDatabase::addOrderToDb(Order *order, int orderNum)
{
    QDate date = QDate::currentDate();
    QString dateStr = QString::number(date.year()) + "/" +
                      QString::number(date.month()) + "/" +
                      QString::number(date.day());

   QString TN = "Table_Name"; // nk - 04/19/18 hard coded value so I could check if working
   //QString TN = tableNameStr; // nk - 04/19/18 pass
    // QString TN = order -> getTableName(); // nk - need to write getTableName function


   //QString addOrderStr = addOrderFmt.arg("81117", "'" + dateStr + "'", QString::number(order -> getTotal()));
  QString addOrderStr = addOrderFmt.arg("81117", "'" + dateStr + "'", QString::number(order -> getTotal()), "'" + TN + "'"); // nk - 04/19/18: added table name to string saved to db

   qDebug() << addOrderStr;

    QSqlQuery query(addOrderStr, db);
    query.record();

    if (orderNum == -1)
        orderNum = getOrderNumber();

    foreach (MenuItem item, order -> getOrder())
    {
        QString addItemStr = addItemFmt.arg(QString::number(orderNum), "'" + item.name + "'", QString::number(item.price));
        qDebug() << addItemStr;
        QSqlQuery addQuery(addItemStr, db);
        //query.prepare(addItemStr);
        //addQuery.exec();
        addQuery.record();
    }
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