#ifndef RESTAURANTDATABASE_H
#define RESTAURANTDATABASE_H

#include <QSqlDatabase>
#include "employee.h"
#include "order.h"

#define DB_USER "root"
#define DB_PASS ""
#define DB_HOST "localhost"
#define DB_NAME "replicator"
#define DB_TYPE "QMYSQL"

class RestaurantDatabase
{
public:
    RestaurantDatabase();
    Employee *getEmployeeByName(QString name);
    Employee *getEmployeeById(QString ID);
    Employee *getEmployeeByPin(QString pin);
    void     addEmployeeToDb(Employee *employee);
    void     addOrderToDb(Order *order);
    int      getOrderNumber();
private:
    QSqlDatabase db;
    Employee *getEmployeeFromDb(QString key, QString value);
    static const QString getEmployeeFmt;
    static const QString addEmployeeFmt;
    static const QString addOrderFmt;
    static const QString addItemFmt;

};

#endif // RESTAURANTDATABASE_H
