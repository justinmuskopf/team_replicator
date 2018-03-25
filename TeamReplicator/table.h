/*
 *  This header files declares the Table class
*/
#ifndef TABLE_H
#define TABLE_H

#include <QVector>
#include "customer.h"
#include "employee.h"

#define NUM_TABLES 16 //Number of tables in restaurant

class Table
{
public:
    Table();                                    //Default Constructor
    Table(int num);                             //Initializing Constructor
    QVector<Customer*> getCustomers();          //Return Customers at table
    void addCustomerToTable(Customer *customer);//Add a Customer to the table
    void setWaitstaff(Employee *ws);            //Set the WaitStaff attending the Table
    Customer *getCurrentCustomer();             //Get the current Customer in focus
    Customer *getNextCustomer();                //Get the next Customer at Table
    Customer *getCustomerByName(QString name);  //Get a customer by their name
    void printCustomers();                      //Print info of all Customers at Table
    bool hasCustomers();                        //Is the Table empty?
    bool isLastCustomer();                      //Last Customer in focus?
    float getTotal();                           //Return the subtotal of all Orders at table
    void clearTable();                          //Clear the Table of Customers
private:
    unsigned int tableNum;                      //The table number
    int orderNum;                               //Current Order number
    Customer *currentCustomer;                  //Current Customer in focus
    QVector<Customer*> customers;               //All Customers at table
    Employee *waitstaff;                        //WaitStaff attending table
};

#endif // TABLE_H
