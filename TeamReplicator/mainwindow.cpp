#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include <QIcon>
#include <QMessageBox>
#include "icons.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDesktopWidget>
#include <QMovie>


//Tab Index ENUM
enum {
    HOME_TAB,
    ORDER_TAB,
    REFILLS_TAB,
    MENU_TAB,
    LOGIN_TAB,
    WAITSTAFF_TAB,
    KITCHEN_TAB,
    MANAGER_TAB,
    TABLE_TAB,
    PAYMENT_TAB
};

void MainWindow::goToTab(int idx)
{
    ui -> tabWidget -> setCurrentIndex(idx);
}

//MainWindow Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Perform Ui setup
    ui->setupUi(this);

    //Load background into application
    QPixmap bg(BACKGROUND);
    //QSize bgSize = QSize(width(), ui -> spaceLabel -> height());
    if (!bg)
        qDebug() << "Unable to open image " << BACKGROUND;
    ui -> spaceLabel -> setPixmap(bg);//.scaled(bgSize, Qt::IgnoreAspectRatio));

    //Initialize the Employee login box
    ui -> passwordBox -> setFont(QFont("Counter-Strike", 24));
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);

    //Maximize window by default
    showMaximized();

    //Set loginButton icon
    ui -> loginButton -> setIcon(QIcon(SETTINGS_ICON));
    ui -> loginButton -> setIconSize(QSize(30,50));

    //Initialize the main button array
    buttonArr[0] = ui -> backButton;
    //buttonArr[1] = ui -> drinkButton;
    buttonArr[1] = ui -> ticketButton;
    //buttonArr[3] = ui -> gameButton;

    //Refill buttons
    //ui -> drinkButton1 = new DrinkButton;
    //ui -> drinkButton2 = new DrinkButton;
    //ui -> drinkButton3 = new DrinkButton;
    //ui -> drinkButton4 = new DrinkButton;
    refillButtons[0] = DrinkButton(ui -> drinkButton1);
    refillButtons[1] = DrinkButton(ui -> drinkButton2);
    refillButtons[2] = DrinkButton(ui -> drinkButton3);
    refillButtons[3] = DrinkButton(ui -> drinkButton4);

    //Set all menu category icons
    QSize iconSize = ui -> appIcon -> size();
    ui -> appIcon -> setPixmap(QPixmap(APPETIZER_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> sidIcon -> setPixmap(QPixmap(SIDE_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> desIcon -> setPixmap(QPixmap(DESSERT_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> entIcon -> setPixmap(QPixmap(ENTREE_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> driIcon -> setPixmap(QPixmap(DRINK_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> kidIcon -> setPixmap(QPixmap(KIDS_ICON).scaled(iconSize, Qt::KeepAspectRatio));

    //Hide tabs at top of window
    ui -> tabWidget -> findChild<QTabBar *>() -> hide();

    ui -> allergyInput -> setText("N/A");

    beginSession();
}

//Destructor
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::beginSession()
{
    //Get order number from database
    ui -> orderNumLabel -> setText("Order #" + QString::number(db.getOrderNumber()));

    ui -> startOrderButton -> setText("Begin Order");

    //Show the startOrder button
    ui -> startOrderButton -> show();

    //Get the current table as assigned by Restaurant
    thisTable = restaurant.getCurrentTable();

    //Disable buttons until order is begun
    disableButtons();

    //Initialize the back button stack
    backStack.clear();
    backPressed = false;
    lastPage = HOME_TAB;

    //Go to home tab
    goHome();

    //Disable the gameButton and drink button until order is placed
    ui -> gameButton -> setEnabled(false);
    ui -> drinkButton -> setEnabled(false);

    //Clear all lists in the Application by finding them recursively
    foreach (QListWidget *list, findChildren<QListWidget *>())
    {
        list -> clear();
    }
}

//Back button was clicked
void MainWindow::on_backButton_clicked()
{
    //Back is pressed
    backPressed = true;

    //Set index to most recent page, home if stack is empty
    if (!backStack.isEmpty())
        goToTab(backStack.pop());
    else
        goHome();
}

//Refills button clicked
void MainWindow::on_drinkButton_clicked()
{
    //Set current tab to the refills tab
    goToTab(REFILLS_TAB);
}

//My Ticket button clicked
void MainWindow::on_ticketButton_clicked()
{
    //Set current tab to the order tab
    goToTab(ORDER_TAB);
}

//Games button clicked
void MainWindow::on_gameButton_clicked()
{

}

//Assitance button clicked
void MainWindow::on_assistButton_clicked()
{
    QMessageBox msgBox(QMessageBox::Information,
                       "Assistance",
                       "Your Server has been notified, and will be with you shortly.",
                       QMessageBox::Ok, this);
    msgBox.setStyleSheet("background-color: rgb(188, 188, 188);\nfont: 57 20pt \"Counter-Strike\";");
    msgBox.exec();
}

//Help button clicked
void MainWindow::on_helpButton_clicked()
{
}

//Go to home page
void MainWindow::goHome()
{
    goToTab(HOME_TAB);
}

//Login button clicked
void MainWindow::on_loginButton_clicked()
{
    goToTab(LOGIN_TAB);
}

/* Employee Pin-pad widget buttons                            */
/**************************************************************/
void MainWindow::on_zeroButton_clicked()  {addToLoginBox(0);}
void MainWindow::on_oneButton_clicked()   {addToLoginBox(1);}
void MainWindow::on_twoButton_clicked()   {addToLoginBox(2);}
void MainWindow::on_threeButton_clicked() {addToLoginBox(3);}
void MainWindow::on_fourButton_clicked()  {addToLoginBox(4);}
void MainWindow::on_fiveButton_clicked()  {addToLoginBox(5);}
void MainWindow::on_sixButton_clicked()   {addToLoginBox(6);}
void MainWindow::on_sevenButton_clicked() {addToLoginBox(7);}
void MainWindow::on_eightButton_clicked() {addToLoginBox(8);}
void MainWindow::on_nineButton_clicked()  {addToLoginBox(9);}
//Add the pressed number to the text of the login box
void MainWindow::addToLoginBox(int num)
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + QString::number(num));
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}
/**************************************************************/

//Clear the password box
void MainWindow::on_clearButton_clicked() {ui -> passwordBox -> setText("");}

//Submit the employee pin
void MainWindow::on_enterButton_clicked()
{
    QString pin = ui -> passwordBox -> toPlainText().trimmed();
    ui -> passwordBox -> setText("");

    Employee *employee = db.getEmployeeByPin(pin);
    if (employee == nullptr)
    {
       qDebug() << "No employee returned...";
       return;
    }

    QString level = employee -> getLevel();
    if (level == "waitstaff")
    {
        ui -> waitstaffWelcomeLabel -> setText("Welcome " + employee -> getName());
        goToTab(WAITSTAFF_TAB);
    }
    else if (level == "kitchen")
    {
        ui -> kitchenWelcomeLabel -> setText("Welcome " + employee -> getName());
        goToTab(KITCHEN_TAB);
    }
    else if (level == "manager")
    {
        ui -> managerWelcomeLabel -> setText("Welcome " + employee -> getName());
        goToTab(MANAGER_TAB);
    }

}

//Disable all main buttons
void MainWindow::disableButtons()
{
    for (int i = 0; i < NUM_BUTTONS; i++)
    {
        buttonArr[i] -> setEnabled(false);
    }
}

//Enable all buttons
void MainWindow::enableButtons()
{
    for (int i = 0; i < NUM_BUTTONS; i++)
    {
        buttonArr[i] -> setEnabled(true);
    }
}

//Current tab changed
void MainWindow::on_tabWidget_currentChanged(int index)
{
    //If back was pressed, reset it
    if (backPressed)
        backPressed = false;
    //Add last page to stack
    else
        backStack.push(lastPage);

    //Current page becomes last
    lastPage = index;
}

/* Menu category buttons                                         */
/*****************************************************************/
void MainWindow::on_appButton_clicked() {loadMenu(APPETIZERS);}
void MainWindow::on_entButton_clicked() {loadMenu(ENTREES);}
void MainWindow::on_driButton_clicked() {loadMenu(DRINKS);}
void MainWindow::on_desButton_clicked() {loadMenu(DESSERTS);}
void MainWindow::on_sidButton_clicked() {loadMenu(SIDES);}
void MainWindow::on_kidButton_clicked() {loadMenu(KIDS);}
/*****************************************************************/

//Load the requested menu onto the menu page
void MainWindow::loadMenu(int type)
{
    const QString textFmt = "%1\n%2.....%3";    //Menu format (name, description, price)
    MenuVector typeMenu = restaurant.getMenu(type);   //Get the requested menu
    restaurant.setMenuCategory((Category)type); //Set the category of the current menu

    //Set all of the menu pictures
    QSize imgSize = ui -> menu1_pic -> size();
    ui -> menu1_pic -> setPixmap(typeMenu[0].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu2_pic -> setPixmap(typeMenu[1].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu3_pic -> setPixmap(typeMenu[2].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu4_pic -> setPixmap(typeMenu[3].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu5_pic -> setPixmap(typeMenu[4].image.scaled(imgSize, Qt::KeepAspectRatio));

    //Set all menu descriptions
    ui -> menu1_text -> setText(textFmt.arg(typeMenu[0].name).arg(typeMenu[0].description).arg(typeMenu[0].price));
    ui -> menu2_text -> setText(textFmt.arg(typeMenu[1].name).arg(typeMenu[1].description).arg(typeMenu[1].price));
    ui -> menu3_text -> setText(textFmt.arg(typeMenu[2].name).arg(typeMenu[2].description).arg(typeMenu[2].price));
    ui -> menu4_text -> setText(textFmt.arg(typeMenu[3].name).arg(typeMenu[3].description).arg(typeMenu[3].price));
    ui -> menu5_text -> setText(textFmt.arg(typeMenu[4].name).arg(typeMenu[4].description).arg(typeMenu[4].price));

    //Set current index to loaded menu
    goToTab(MENU_TAB);
}

//"Go back to menu" button clicked
void MainWindow::on_menuBackButton_clicked()
{
    //When leaving menu page, deselect all selected items
    foreach(QListWidgetItem *item, ui -> menuList -> selectedItems())
        item -> setSelected(false);

    //Go back to the order page using stack
    ui -> backButton -> click();
}

//"Remove from order" button clicked
void MainWindow::on_menuRemoveButton_clicked()
{
    //Current order
    Order *currentOrder= thisTable -> getCurrentCustomer() -> getOrder();

    //All selected items, return on empty selection or name of customer
    QList<QListWidgetItem *> selected = ui -> menuList -> selectedItems();
    if (selected.isEmpty() || selected[0] -> text()[0] != " ")
        return;

    //Get names of all selected items, and remove them from the order
    QStringList labels;
    foreach (QListWidgetItem *item, selected)
        labels.push_back(item -> text().trimmed().split(".")[0]);
    foreach (QString str, labels)
    {
        qDebug() << "Removing " << str;
        currentOrder -> removeFromOrder(str);
    }
    //Delete from the list and update order list
    qDeleteAll(ui -> menuList -> selectedItems());

    ui -> menuTotalLabel -> setText("Total: $" + QString::number(thisTable -> getTotal()));

    updateOrderList();

}

/* Add buttons                                                              */
/****************************************************************************/
void MainWindow::on_addButton1_clicked() {addToOrderList(0);}
void MainWindow::on_addButton2_clicked() {addToOrderList(1);}
void MainWindow::on_addButton3_clicked() {addToOrderList(2);}
void MainWindow::on_addButton4_clicked() {addToOrderList(3);}
void MainWindow::on_addButton5_clicked() {addToOrderList(4);}
void MainWindow::addToOrderList(int num)
{
    //Get current customer, order, and the item selected
    Customer *currentCustomer = thisTable -> getCurrentCustomer();
    Order *currentOrder = currentCustomer -> getOrder();
    MenuItem item = restaurant.getMenu(restaurant.getMenuCategory())[num];

    //Add menu item to list and current order
    ui -> menuList -> addItem(formatForList(item));
    currentOrder -> addToOrder(item);

    ui -> menuTotalLabel -> setText("Total: $" + QString::number(thisTable -> getTotal()));

    //Update the order list
    updateOrderList();


}
/****************************************************************************/

//Start Order button clicked
void MainWindow::on_startOrderButton_clicked()
{
    //Change to table tab and hide button
    QString buttonText = ui -> startOrderButton -> text();
    goToTab(TABLE_TAB);

    if (buttonText == "Begin Order")
    {
        ui -> startOrderButton -> setText("Pay For Order");
        ui -> startOrderButton -> setEnabled(false);
    }

    if (buttonText == "Pay For Order")
    {
        initPaymentScreen();
        goToTab(PAYMENT_TAB);
    }
}

//Add To Table button clicked
void MainWindow::on_addToTableButton_clicked()
{
    //Get name, allergies, and create a new customer with data
    QString name = ui -> nameInput -> toPlainText().trimmed();
    QString allergies = ui -> allergyInput -> toPlainText().trimmed();
    Customer *customer = new Customer(name, allergies);

    //Add customer to table
    thisTable -> addCustomerToTable(customer);

    //Count of customers at table for list
    int count = thisTable -> getCustomers().size();

    //Add customer to list
    ui -> tableList -> addItem(QString::number(count) + ". Name: " + name + "..... " + allergies + "\n");

    //Reset input boxes
    ui -> allergyInput -> setText("N/A");
    ui -> nameInput -> setText("");
}

//Begin Order button clicked
void MainWindow::on_beginOrderButton_clicked()
{
    if (thisTable -> getCustomers().size() == 0)
        return;

    //Get name of first customer and add to lists
    QString firstCustomer = thisTable -> getCurrentCustomer() -> getName();
    ui -> menuList -> addItem(firstCustomer);
    updateOrderList();

    if (thisTable -> isLastCustomer())
            ui -> placeOrderButton -> setText("Place Order");

    //Change page to order tab and enable buttons
    goToTab(ORDER_TAB);
    enableButtons();
}

//Place Order/Next Order button clicked
void MainWindow::on_placeOrderButton_clicked()
{
    //Place the order for the current customer
    thisTable -> getCurrentCustomer() -> placeOrder();
    float total = thisTable -> getCurrentCustomer() -> getOrder() -> getTotal();
    ui -> menuList -> addItem("   Total: $" + QString::number(total));

    //Get next customer and add name to the lists
    Customer *nextCustomer = thisTable -> getNextCustomer();
    if (nextCustomer != NULL)
    {
        ui -> menuList -> addItem(nextCustomer -> getName());
        updateOrderList();

        if (thisTable -> isLastCustomer())
                ui -> placeOrderButton -> setText("Place Order");
    }
    else
    {
        goToTab(HOME_TAB);
        ui -> startOrderButton -> setEnabled(true);
        ui -> gameButton -> setEnabled(true);
        ui -> drinkButton -> setEnabled(true);
        initRefillScreen();
    }
}

//Copy the menu list to the order list
void MainWindow::updateOrderList()
{
    //Clear list and add each element from menu list to order list
    ui -> orderList -> clear();
    for (int i = 0; i < ui -> menuList -> count(); i++)
    {
        ui -> orderList -> addItem(ui -> menuList -> item(i) -> text());
    }

    ui -> orderTotalLabel -> setText(ui -> menuTotalLabel -> text());
}

//Item in menu list was clicked
void MainWindow::on_menuList_itemClicked(QListWidgetItem *item)
{
    //Don't allow selecting a person's name for removal
    if (item -> text()[0] != " ")
        item -> setSelected(false);
}

//Order Page Remove button clicked
void MainWindow::on_orderRemoveButton_clicked()
{
    //Get list index of current item
    int idx = ui -> orderList -> selectionModel() -> selectedIndexes()[0].row();

    //Use menuRemove slot to delete from both lists
    ui -> menuList -> item(idx) -> setSelected(true);
    ui -> menuRemoveButton -> click();
}

QString formatForList(MenuItem item)
{
    QString formatted = "   " + item.name;
    for (int i = formatted.length(); i < 70; i++)
        formatted += ".";
    formatted += QString::number(item.price);

    return formatted;
}

//Used for debugging, navigate pages with numbers on keyboard
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QString text = event -> text();
    if (text == "1")
        goToTab(HOME_TAB);
    else if (text == "2")
        goToTab(ORDER_TAB);
    else if (text == "3")
        goToTab(REFILLS_TAB);
    else if (text == "4")
        goToTab(MENU_TAB);
    else if (text == "5")
        goToTab(LOGIN_TAB);
    else if (text == "6")
        goToTab(WAITSTAFF_TAB);
    else if (text == "7")
        goToTab(KITCHEN_TAB);
    else if (text == "8")
        goToTab(MANAGER_TAB);
    else if (text == "9")
        goToTab(TABLE_TAB);
    else if (text == "0")
        goToTab(PAYMENT_TAB);
}
//Initialize the payment tab
void MainWindow::initPaymentScreen()
{
    //Add each Customer and their total to the yetToPayList
    foreach (Customer *customer, thisTable -> getCustomers())
    {
        QString custStr = customer -> getName() + ".....$" + QString::number(customer -> getOrder() -> getTotal());
        ui -> yetToPayList -> addItem(custStr);
    }

    //Update the payment totals
    updatePaymentTotals();
}

//Add a Customer to the current payment
void MainWindow::on_addToPaymentButton_clicked()
{
    //Get all selected customers and add each one to the paymentList
    QList<QListWidgetItem *> selectedCustomers = ui -> yetToPayList -> selectedItems();
    foreach (QListWidgetItem *customer, selectedCustomers)
    {
        //Add each Customer to the payment list, and delete from yetToPayList
        ui -> paymentList -> addItem(customer -> text());
        qDeleteAll(selectedCustomers);
    }

    //Update totals
    updatePaymentTotals();
}

//Remove Customer from current payment
void MainWindow::on_removeFromPaymentButton_clicked()
{
    //Get all selected Customers and remove each from current payment
    QList<QListWidgetItem *> selectedCustomers = ui -> paymentList -> selectedItems();
    foreach (QListWidgetItem *customer, selectedCustomers)
    {
        //Add each Customer to the yetToPayList and remove from paymentList
        ui -> yetToPayList -> addItem(customer -> text());
        qDeleteAll(selectedCustomers);
    }

    //Update totals
    updatePaymentTotals();
}

//Update the totals on the payment screen
void MainWindow::updatePaymentTotals()
{
    //Init both totals to zero
    float remainingTotal = 0;
    float paymentTotal = 0;

    //Reference payment list and remaining payment list
    QListWidget *payList = ui -> paymentList;
    QListWidget *remainList = ui -> yetToPayList;

    //For each item in paymentList
    for (int i = 0; i < payList -> count(); i++)
    {
        //Get the total from each line in list
        QStringList splitStr = payList -> item(i) -> text().split(".");
        int len = splitStr.size();
        paymentTotal += (splitStr[len - 2] + "." + splitStr[len - 1]).toFloat();
    }

    //For each item in yetToPay list
    for (int i = 0; i < remainList -> count(); i++)
    {
        //Get the total from each line in list
        QStringList splitStr = remainList -> item(i) -> text().split(".");
        int len = splitStr.size();
        remainingTotal += (splitStr[len - 2] + "." + splitStr[len - 1]).toFloat();
    }

    //Set total labels
    ui -> totalRemainingLabel -> setText("Total Remaining: $" + QString::number(remainingTotal));
    ui -> totalToPayLabel -> setText("Total: $" + QString::number(paymentTotal));
}

//Paying for oder
void MainWindow::on_payForOrderButton_clicked()
{
 /*   //Process payment window, set to delete itself and children on close
    QDialog *processDlg = new QDialog(this);//, Qt::FramelessWindowHint | Qt::WindowTitleHint);
    processDlg -> setAttribute(Qt::WA_DeleteOnClose, true);

    //Set the location of the processDlg
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width() - processDlg->width()) / 2;
    int y = (screenGeometry.height() - processDlg->height()) / 2;
    processDlg->move(x, y);

    //Create children of process window
    QLabel *movieLabel = new QLabel(processDlg);//GIF holding label
    QLabel *textLabel = new QLabel(processDlg); //textLabel to display
    QMovie *movie = new QMovie(LOADING_GIF);    //GIF object
    QGridLayout *layout = new QGridLayout;      //Layout of processDlg

    //Set the movie label's movie to GIF
    movieLabel -> setMovie(movie);

    //Add the movieLabel to the processDlg
    layout -> addWidget(movieLabel, 0, 0, 1, 1, Qt::AlignCenter);

    //Set processDlg's layout to Grid
    processDlg -> setLayout(layout);

    //Show the processDlg
    processDlg -> show();

    //Show the GIF and start it
    movieLabel -> show();
    movie -> start();
*/
    QVector<Customer *> customers;
    for (int i = 0; i < ui -> paymentList -> count(); i++)
    {
        QString name = ui -> paymentList -> item(i) -> text().split(".")[0];
        Customer *tempCustomer = thisTable -> getCustomerByName(name);
        if (tempCustomer != nullptr)
            customers.push_back(tempCustomer);
    }

    ui -> paymentList -> clear();

    //For every customer in current payment, add their order to DB
    foreach (Customer *customer, customers)
    {
        db.addOrderToDb(customer -> getOrder(), db.getOrderNumber());
    }

    updatePaymentTotals();

    //resetSession();
}

//End the current dining session
void MainWindow::endSession()
{
    //Clear the table and reset total labels
    thisTable -> clearTable();
    ui -> totalRemainingLabel -> setText("Total Remaining: $0.00");
    ui -> totalToPayLabel -> setText("Total: $0.00");
    ui -> orderTotalLabel -> setText("Total: $0.00");
    ui -> menuTotalLabel -> setText("Total: $0.00");
}

//Reset the Table's session
void MainWindow::resetSession()
{
    endSession();
    beginSession();
}

//Initialize the refill screen post order
void MainWindow::initRefillScreen()
{
    //Get all customers, and set the RefillButtons to their drinks
    QVector<Customer *> customers = thisTable -> getCustomers();
    int idx;
    for (idx = 0; idx < customers.size(); idx++)
    {
        refillButtons[idx].setDrink(customers[idx] -> getOrder() -> getDrink());
        refillButtons[idx].setText(customers[idx] -> getName());
    }
}

//Adding items to the refill list
void MainWindow::addToRefillList(DrinkButton drinkButton)
{
    QString num = QString::number(ui -> refillList -> count() + 1);
    ui -> refillList -> addItem(num + ". " + drinkButton.getDrink().name);
    drinkButton.setEnabled(false);
}
void MainWindow::on_drinkButton1_clicked() {addToRefillList(refillButtons[0]);}
void MainWindow::on_drinkButton2_clicked() {addToRefillList(refillButtons[1]);}
void MainWindow::on_drinkButton3_clicked() {addToRefillList(refillButtons[2]);}
void MainWindow::on_drinkButton4_clicked() {addToRefillList(refillButtons[3]);}

//Clear the refill list on cancel
void MainWindow::on_removeFromRefillButton_clicked()
{
    //QListWidgetItem *item = [0];
    ui -> refillList -> clear();
    for (int i = 0; i < thisTable -> getCustomers().size(); i++)
    {
        refillButtons[i].setEnabled(true);
    }
}

//User requested refills
void MainWindow::on_orderRefillButton_clicked()
{
    if (ui -> refillList -> count() == 0)
        return;

    QMessageBox msgBox(QMessageBox::Information,
                       "Refills",
                       "Your Refills Are on The Way!",
                       QMessageBox::Ok, this);
    msgBox.setStyleSheet("background-color: rgb(188, 188, 188);\nfont: 57 20pt \"Counter-Strike\";");
    msgBox.exec();

    goHome();

    enableRefillButtons();

    ui -> refillList -> clear();
}

//Enable refill buttons
void MainWindow::enableRefillButtons()
{
    //Only enable as many as there are customers
    for (int i = 0; i < thisTable -> getCustomers().size(); i++)
    {
        refillButtons[i].setEnabled(true);
    }
}

//Disable refill buttons
void MainWindow::disableRefillButtons()
{
    //Only disable as many as there are customers
    for (int i = 0; i < thisTable -> getCustomers().size(); i++)
    {
        refillButtons[i].setEnabled(false);
    }
}
