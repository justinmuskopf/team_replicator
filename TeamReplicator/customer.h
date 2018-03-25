//The header file that declares the Customer class
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "order.h"

class Customer
{
public:
    Customer();                                 //Default Constructor
    Customer(QString _name, QString _allergies);//Initializing Constructor
    QString getName();                          //Returns the name of the customer
    QString getAllergies();                     //Returns the allergy string of the customer
    Order *getOrder();                          //Returns the Order object of the customer
    void placeOrder();                          //Sets the boolean orderPlaced to true
    void printInfo();                           //Prints Customer info
    void addToOrder(MenuItem item);             //Adds a menuItem to customer's order
    bool isOrderPlaced();                       //Has the customer placed their order?
    ~Customer();                                //Destructor
private:
    bool orderPlaced;                           //Has the customer placed their order?
    Order *order;                               //Pointer to customer's order
    QString name;                               //Customer's name
    QString allergies;                          //Customer's allergies
};

#endif // CUSTOMER_H
