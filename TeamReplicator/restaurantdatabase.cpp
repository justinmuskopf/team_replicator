#include "restaurantdatabase.h"
#include <QApplication>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QVariant>
#include <QDate>

const QString RestaurantDatabase::getEmployeeFmt         = "SELECT * FROM `employees` WHERE %1=%2";
const QString RestaurantDatabase::addEmployeeFmt         = "INSERT INTO `employees` (Emp_Id, Name, Lvl, Pin) VALUES (%1, %2, %3, %4)";
const QString RestaurantDatabase::addOrderFmt            = "INSERT INTO `sales` (Emp_Id, Sale_Date, Total) VALUES (%1, %2, %3)";
const QString RestaurantDatabase::addItemFmt             = "INSERT INTO `order_items` (Order_Id, Name, Price, Category) VALUES (%1, %2, %3, %4)";
const QString RestaurantDatabase::addOrderTblNameFmt     = "INSERT INTO `sales` (Emp_Id, Sale_Date, Total, Table_Name) VALUES (%1, %2, %3, %4)";
const QString RestaurantDatabase::addEmployeeLoginFmt    = "INSERT INTO `employee_logins` (Emp_Id, Name) VALUES (%1, %2)";
const QString RestaurantDatabase::addSurveyFmt           = "INSERT INTO `surveys` (Rating, Comment) VALUES (%1, %2)";
const QString RestaurantDatabase::addSurveyNoCommentFmt  = "INSERT INTO `surveys` (Rating) VALUES (%1)";
const QString RestaurantDatabase::addItemCommentFmt      = "INSERT INTO `order_items` (Order_Id, Name, Price, Comment, Category) VALUES (%1, %2, %3, %4, %5)";
const QString RestaurantDatabase::getOrderFmt            = "SELECT * FROM `order_items` WHERE Order_Id = %1";
const QString RestaurantDatabase::addCompItemFmt         = "INSERT INTO `comps` (Emp_Id, Comp_Date, Order_Num, Item_Name, Price) VALUES (%1, %2, %3, %4, %5)";
const QString RestaurantDatabase::removeItemFmt          = "DELETE FROM `order_items` WHERE Order_Id = %1 AND Name = %2";
const QString RestaurantDatabase::changeOrderTotalFmt    = "UPDATE `sales` SET Total = %1 WHERE Id = %2";

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
    Employee *emp = getEmployeeFromDb("Pin", pin);
    if (emp == nullptr)
        return nullptr;
    QString name = emp -> getName();
    QString ID = emp -> getId();
    QString queryStr = addEmployeeLoginFmt.arg(ID, "'" + name + "'");
    QSqlQuery query(queryStr, db);

    query.record();

    return emp;
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

    QString tableName;
    QString addOrderStr;
    if ((tableName = order -> getTableName()).length())
        addOrderStr = addOrderTblNameFmt.arg("81117", "'" + dateStr + "'", QString::number(order -> getTotal()), "'" + tableName + "'");
    else
        addOrderStr = addOrderFmt.arg("81117", "'" + dateStr + "'", QString::number(order -> getTotal()));

    QSqlQuery query(addOrderStr, db);
    query.record();

    if (orderNum == -1)
        orderNum = getOrderNumber();

    foreach (MenuItem item, order -> getOrder())
    {
        QString addItemStr;
        if (item.comment.length())
        {
            item.comment.truncate(254);
            addItemStr = addItemCommentFmt.arg(QString::number(orderNum), "'" + item.name + "'", QString::number(item.price), "'" + item.comment + "'", "'" + item.category + "'");
        }
        else
            addItemStr = addItemFmt.arg(QString::number(orderNum), "'" + item.name + "'", QString::number(item.price), "'" + item.category + "'");

        QSqlQuery addQuery(addItemStr, db);
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

QSqlQueryModel *RestaurantDatabase::getAllSales()
{
    QString queryStr = "SELECT * FROM `sales`" ;
    QSqlQuery query(queryStr, db);
    QSqlQueryModel *view = new QSqlQueryModel();
    query.exec();
    view->setQuery(query);
    return view;

}

QSqlQueryModel *RestaurantDatabase::getAllAlerts()
{
    QString queryStr = "SELECT * FROM `table_messages`" ;
    QSqlQuery query(queryStr, db);
    QSqlQueryModel *view = new QSqlQueryModel();
    query.exec();
    view->setQuery(query);
    return view;

}

void RestaurantDatabase::addSurveyToDb(int rating, QString comment)
{
    QString queryStr;
    if (comment.length())
        queryStr = addSurveyFmt.arg(QString::number(rating), "'" + comment + "'");
    else
        queryStr = addSurveyNoCommentFmt.arg(QString::number(rating));

    QSqlQuery query(queryStr, db);

    query.record();
}

Order RestaurantDatabase::getOrderFromDb(int orderNum)
{
    QString queryStr = getOrderFmt.arg(QString::number(orderNum));
    QSqlQuery query(queryStr, db);
    query.exec();

    Order order;
    while (query.next())
    {
        MenuItem item;
        item.name = query.value("Name").toString();
        item.category = query.value("Category").toString();
        item.price = query.value("Price").toFloat();
        item.comment = query.value("Comment").toString();
        order.addToOrder(item);
    }

    return order;
}

void RestaurantDatabase::addCompToDb(int orderNum, Order order)
{
    //(Emp_Id, Comp_Date, Order_Num, Item_Name, Price)
    QDate date = QDate::currentDate();
    QString dateStr = QString::number(date.year()) + "/" +
                      QString::number(date.month()) + "/" +
                      QString::number(date.day());

    foreach (MenuItem item, order.getOrder())
    {
        qDebug() << "Adding comp item: " << item.name;
        QString queryStr = addCompItemFmt.arg("81117",
                                              "'" + dateStr + "'",
                                              QString::number(orderNum),
                                              "'" + item.name + "'",
                                              QString::number(item.price));
        qDebug() << "Query: " << queryStr;
        QSqlQuery query(queryStr, db);
        query.record();
    }
}
