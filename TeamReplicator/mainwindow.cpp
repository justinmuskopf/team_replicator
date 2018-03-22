#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include <QIcon>
#include <QMessageBox>
#include "icons.h"

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
    BEGIN_TAB
};

//MainWindow Constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Perform Ui setup
    ui->setupUi(this);

    //Load background into application
    QPixmap bg(BACKGROUND);
    QSize bgSize = QSize(width(), ui -> spaceLabel -> height());
    if (!bg)
        qDebug() << "Unable to open image " << BACKGROUND;
    ui -> spaceLabel -> setPixmap(bg);//.scaled(bgSize, Qt::IgnoreAspectRatio));

    //Random order # (for now)
    ui -> orderNumLabel -> setText("Order #" + QString::number(qrand() % 500));

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
    buttonArr[1] = ui -> drinkButton;
    buttonArr[2] = ui -> ticketButton;
    buttonArr[3] = ui -> gameButton;
    //buttonArr[4] = ui -> myTableButton;
    //buttonArr[4] = ui -> helpButton;
    //buttonArr[5] = ui -> assistButton;

    thisTable = restaurant.getCurrentTable();

    //Set all menu category icons
    QSize iconSize = ui -> appIcon -> size();
    ui -> appIcon -> setPixmap(QPixmap(APPETIZER_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> sidIcon -> setPixmap(QPixmap(SIDE_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> desIcon -> setPixmap(QPixmap(DESSERT_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> entIcon -> setPixmap(QPixmap(ENTREE_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> driIcon -> setPixmap(QPixmap(DRINK_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> kidIcon -> setPixmap(QPixmap(KIDS_ICON).scaled(iconSize, Qt::KeepAspectRatio));

    //Set refills page icons
    QSize imgSize = ui -> drink1_pic -> size();
    MenuVector typeMenu = restaurant.getMenu(DRINKS);
    ui -> drink1_pic -> setPixmap(typeMenu[0].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink2_pic -> setPixmap(typeMenu[1].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink3_pic -> setPixmap(typeMenu[2].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink4_pic -> setPixmap(typeMenu[3].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink5_pic -> setPixmap(typeMenu[4].image.scaled(imgSize, Qt::KeepAspectRatio));

    //Initialize the back button stack
    backPressed = false;
    lastPage = HOME_TAB;

    //Hide tabs at top of window
    ui -> tabWidget -> setCurrentIndex(HOME_TAB);
    ui -> tabWidget -> findChild<QTabBar *>() -> hide();

    ui -> allergyInput -> setText("N/A");

    disableButtons();
}

//Destructor
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::beginSession()
{

}

//Back button was clicked
void MainWindow::on_backButton_clicked()
{

    //Back is pressed
    backPressed = true;

    //Set index to most recent page, home if stack is empty
    if (!backStack.isEmpty())
        ui -> tabWidget -> setCurrentIndex(backStack.pop());
    else
        ui -> tabWidget -> setCurrentIndex(HOME_TAB);
}

//Refills button clicked
void MainWindow::on_drinkButton_clicked()
{
    //Set current tab to the refills tab
    ui -> tabWidget -> setCurrentIndex(REFILLS_TAB);
}

//My Ticket button clicked
void MainWindow::on_ticketButton_clicked()
{
    //Set current tab to the order tab
    ui -> tabWidget -> setCurrentIndex(ORDER_TAB);
}

//Games button clicked
void MainWindow::on_gameButton_clicked()
{

}

//Assitance button clicked
void MainWindow::on_assistButton_clicked()
{
    //Create and display a message box to the user
    QMessageBox* msgBox = new QMessageBox(this);
    msgBox->setAttribute(Qt::WA_DeleteOnClose);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox -> setStyleSheet("background-color: rgb(188, 188, 188);\nfont: 57 20pt \"Counter-Strike\";");
    msgBox->setWindowTitle("Help");
    msgBox->setText( tr("Your Server has been notified, and will be with you shortly.") );
    msgBox->open( this, SLOT(msgBoxClosed(QAbstractButton*)) );
}

//Help button clicked
void MainWindow::on_helpButton_clicked()
{
}

//Go to home page
void MainWindow::goHome()
{
    ui -> tabWidget -> setCurrentIndex(HOME_TAB);
}

//Login button clicked
void MainWindow::on_loginButton_clicked()
{
    ui -> tabWidget -> setCurrentIndex(LOGIN_TAB);
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
    qDebug() << pin;
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
    ui -> tabWidget -> setCurrentIndex(MENU_TAB);
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
    updateOrderList();

    ui -> totalLabel -> setText("Total: " + QString::number(thisTable -> getTotal()));
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

    //Update the order list
    updateOrderList();

    ui -> totalLabel -> setText("Total: " + QString::number(thisTable -> getTotal()));
}
/****************************************************************************/

//Start Order button clicked
void MainWindow::on_startOrderButton_clicked()
{
    //Change to table tab and hide button
    ui -> tabWidget -> setCurrentIndex(TABLE_TAB);
    ui -> startOrderButton -> hide();
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

    //Change page to order tab and enable buttons
    ui -> tabWidget -> setCurrentIndex(ORDER_TAB);
    enableButtons();
}

//Place Order/Next Order button clicked
void MainWindow::on_placeOrderButton_clicked()
{
    //Place the order for the current customer
    thisTable -> getCurrentCustomer() -> placeOrder();
    float total = thisTable -> getCurrentCustomer() -> getOrder() -> getTotal();
    ui -> menuList -> addItem("   Total: " + QString::number(total));

    //Get next customer and add name to the lists
    Customer *nextCustomer = thisTable -> getNextCustomer();
    if (nextCustomer != NULL)
    {
        ui -> menuList -> addItem(nextCustomer -> getName());
        updateOrderList();
    }

    if (thisTable -> isLastCustomer())
        ui -> placeOrderButton -> setText("Place Order");
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
