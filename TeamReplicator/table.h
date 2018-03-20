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
    void addCustomerToTable(Customer customer);
    void setWaitstaff(Employee *ws);
    void printCustomers();
private:
    unsigned int tableNum;
    QVector<Customer> customers;
    Employee *waitstaff;
};

#endif // TABLE_H
