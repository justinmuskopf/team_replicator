#ifndef TABLE_H
#define TABLE_H

#include <QVector>
#include "customer.h"
#include "employee.h"

#define NUM_TABLES 16

class Table
{
public:
    Table();
    Table(int num);
    QVector<Customer*> getCustomers();
    void addCustomerToTable(Customer *customer);
    void setWaitstaff(Employee *ws);
    Customer *getCurrentCustomer();
    Customer *getNextCustomer();
    void printCustomers();
    bool hasCustomers();
    bool isLastCustomer();
    float getTotal();
    void clearTable();
private:
    unsigned int tableNum;
    int orderNum;
    Customer *currentCustomer;
    QVector<Customer*> customers;
    Employee *waitstaff;
};

#endif // TABLE_H
