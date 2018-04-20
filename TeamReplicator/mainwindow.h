/*
 * The defining header file for the MainWindow class
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include "menu.h"
#include <QPushButton>
#include <QStack>
#include "restaurant.h"
#include <QListWidget>
#include "restaurantdatabase.h"
#include <QKeyEvent>
#include "drinkbutton.h"
#include "dessertgame.h"

#define NUM_BUTTONS 2 //Number of buttons to include when enabling/disabling them
#define MAX_CUSTOMERS 4

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    /*    Main set of buttons   */
    /****************************/
    void on_backButton_clicked();               //Back button clicked
    void on_drinkButton_clicked();              //Refills button clicked
    void on_ticketButton_clicked();             //My Ticket button clicked
    void on_gameButton_clicked();               //Games button clicked
    void on_assistButton_clicked();             //Assistance button clicked
    void on_helpButton_clicked();               //Help button clicked
    void on_loginButton_clicked();              //Employee Login button clicked
    /****************************/

    /*  Employee Pin-Pad Widget */
    /****************************/
    void on_oneButton_clicked();
    void on_twoButton_clicked();
    void on_threeButton_clicked();
    void on_fourButton_clicked();
    void on_fiveButton_clicked();
    void on_sixButton_clicked();
    void on_sevenButton_clicked();
    void on_eightButton_clicked();
    void on_nineButton_clicked();
    void on_clearButton_clicked();
    void on_zeroButton_clicked();
    void on_enterButton_clicked();
    /****************************/

    void on_tabWidget_currentChanged(int index);//If current tab changes

    /*   Menu category buttons  */
    /****************************/
    void on_appButton_clicked();
    void on_entButton_clicked();
    void on_driButton_clicked();
    void on_desButton_clicked();
    void on_sidButton_clicked();
    void on_kidButton_clicked();
    /****************************/

    /*     Menu Add buttons     */
    /****************************/
    void on_addButton1_clicked();
    void on_addButton2_clicked();
    void on_addButton3_clicked();               //And their related functions
    void on_addButton4_clicked();
    void on_addButton5_clicked();
    /****************************/

    /*       Game buttons       */
    /****************************/
    void on_gameButton1_clicked();
    void on_gameButton2_clicked();
    /****************************/

    void on_menuBackButton_clicked();           //Back to Menu button clicked
    void on_menuRemoveButton_clicked();         //Menu remove button clicked
    void on_startOrderButton_clicked();         //Start Order button clicked
    void on_addToTableButton_clicked();         //Adding Customer to table
    void on_beginOrderButton_clicked();         //Begin Order button clicked
    void on_placeOrderButton_clicked();         //Place Order button clicked
    void on_menuList_itemClicked(QListWidgetItem *item); //Item selected in menu list
    void on_orderRemoveButton_clicked();        //Remove From Order button clicked
    void on_addToPaymentButton_clicked();       //Add Customer to current payment
    void on_removeFromPaymentButton_clicked();  //Removing Customer from current payment
    void on_payForOrderButton_clicked();        //Pay For Order button clicked
    void initPaymentScreen();                   //Initialize the payment screen
    void initRefillScreen();                    //Initialize the refill screen
    void updatePaymentTotals();                 //Update payment totals


    void on_drinkButton1_clicked();

    void on_drinkButton2_clicked();

    void on_drinkButton3_clicked();

    void on_drinkButton4_clicked();

    void on_removeFromRefillButton_clicked();

    void on_orderRefillButton_clicked();

    void on_gameButton_1_clicked();

    void on_gameButton_2_clicked();

    void on_gameButton_3_clicked();

    void on_gameButton_4_clicked();

    void on_gameButton_5_clicked();    void on_surveyButton_clicked();

    void on_surveySubmitButton_clicked();void on_cashButton_clicked();

    void on_creditButton_clicked();

    void initReceiptTab();

    void on_couponButton_clicked();

private:
    Ui::MainWindow *ui;                         //Ui reference
    QPushButton *buttonArr[NUM_BUTTONS];        //Array of main buttons
    DrinkButton refillButtons[MAX_CUSTOMERS];  //Array of refill buttons
    QPixmap logo;                               //Logo
    QStack<int> backStack;                      //Stack for back button
    Restaurant restaurant;                      //Restaurant object
    RestaurantDatabase db;                      //Database
    Table *thisTable;                           //Current table
    dGame dessertGame;
    bool backPressed;                           //Back button pressed
    int lastPage;                               //Index of last page
    void beginSession();                        //Begin dining session
    void endSession();                          //End dining session
    void resetSession();                        //Reset "Kiosk"
    void goHome();                              //Go to main page
    void disableButtons();                      //Disable main buttons
    void enableButtons();                       //Enable main buttons
    void enableRefillButtons();                 //Enable refill buttons
    void disableRefillButtons();                //Disable refill buttons
    void loadMenu(int type);                    //Load menu onto Menu page
    void addToLoginBox(int num);                //Add numbers to login box
    void addToOrderList(int num);               //Add items to order list
    void updateOrderList();                     //Copy values of menu list to order list
    void keyPressEvent(QKeyEvent *event);       //Key has been pressed
    void goToTab(int idx);                      //Set the current tab
    void addToRefillList(DrinkButton drinkButton);         //Add drink to refill list
};

QString formatForList(MenuItem item);           //Format name and price into list standard

#endif // MAINWINDOW_H
