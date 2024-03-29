/*
 *  This header files declares the RestaurantDatabase class
*/
#ifndef RESTAURANTDATABASE_H
#define RESTAURANTDATABASE_H

#include <QSqlDatabase>
#include "employee.h"
#include "order.h"
#include <QSqlQueryModel>

#define DB_USER "repuser"        //DB Username
#define DB_PASS "pass"           //DB Password
#define DB_HOST "se1.cse.unt.edu"//DB Host
#define DB_NAME "replicator"     //DB Name
#define DB_TYPE "QMYSQL"         //DB Driver Type
#define DB_PORT 1051

typedef enum {
              REFILL_MESSAGE,
              ASSIST_MESSAGE,
              MANAGER_MESSAGE,
              ORDER_PLACED_MESSAGE
             } Messages;

class RestaurantDatabase
{
public:
    RestaurantDatabase();                                   //Default Constructor
    Employee *getEmployeeByName(QString name);              //Retrieve an Employee from DB by name
    Employee *getEmployeeById(QString ID);                  //Retrieve an Employee from DB by ID
    Employee *getEmployeeByPin(QString pin);                //Retrieve an Employee from DB by Pin
    void     addEmployeeToDb(Employee *employee);           //Add an Employee to the DB
    void     addOrderToDb(Order *order, int orderNum = -1); //Add an Order to the DB
    int      getOrderNumber();                              //Returns the current order number
    QSqlQueryModel *getAllSales();                          //Returns table of all sales
    QSqlQueryModel *getAllAlerts();                         //Returns table of all alerts
    void addSurveyToDb(int rating, QString comment);
    Order getOrderFromDb(int orderNum);
    void addCompToDb(int orderNum, Order order);
    QSqlQueryModel *getBestSellers();
    QSqlQueryModel *getAllComps();
    QSqlQueryModel *getKitchenOrders();

private:
    QSqlDatabase db;                                        //Database
    Employee *getEmployeeFromDb(QString key, QString value);//Internal function to get Employee from DB
    static const QString getEmployeeFmt;                    //Format of get Employee from DB query
    static const QString addEmployeeFmt;                    //Format add Employee to DB query
    static const QString addOrderFmt;                       //Format of add Order to DB query
    static const QString addOrderTblNameFmt;                //Format of add Order to DB (w/Table_Num) query
    static const QString addItemFmt;                        //Format of Add Item to DB query
    static const QString addEmployeeLoginFmt;               //Adds employee login time to DB
    static const QString addSurveyFmt;                      //Add survey rating and comment to DB
    static const QString addSurveyNoCommentFmt;             //Add survey rating without comment to DB
    static const QString addItemCommentFmt;                 //Add item to DB with comment
    static const QString getOrderFmt;                       //Get order from DB
    static const QString addCompItemFmt;                    //Add a comped item to db
    static const QString removeItemFmt;
    static const QString changeOrderTotalFmt;
};

#endif // RESTAURANTDATABASE_H
