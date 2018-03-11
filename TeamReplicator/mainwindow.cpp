#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include <QIcon>
#include <QMessageBox>
#include "icons.h"
enum {
    HOME_TAB,
    ORDER_TAB,
    REFILLS_TAB,
    MENU_TAB,
    LOGIN_TAB,
    WAITSTAFF_TAB,
    KITCHEN_TAB,
    MANAGER_TAB
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap test(BACKGROUND);
    if (!test)
    {
        qDebug() << "Unable to open image " << BACKGROUND;
    }
    ui -> spaceLabel -> setPixmap(test);
    //ui -> spaceLabel -> show();

    ui -> orderNumLabel -> setText("Order #" + QString::number(qrand() % 500));

    ui -> passwordBox -> setFont(QFont("Counter-Strike", 24));
    ui -> passwordBox -> setText("\n\n\t");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);

    showMaximized();

    ui -> loginButton -> setIcon(QIcon(SETTINGS_ICON));
    ui -> loginButton -> setIconSize(QSize(30,50));

    buttonArr[0] = ui -> backButton;
    buttonArr[1] = ui -> drinkButton;
    buttonArr[2] = ui -> ticketButton;
    buttonArr[3] = ui -> helpButton;
    buttonArr[4] = ui -> assistButton;

    QSize iconSize = ui -> appIcon -> size();
    ui -> appIcon-> setPixmap(QPixmap(APPETIZER_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> sidIcon-> setPixmap(QPixmap(SIDE_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> desIcon-> setPixmap(QPixmap(DESSERT_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> entIcon-> setPixmap(QPixmap(ENTREE_ICON).scaled(iconSize, Qt::KeepAspectRatio));
    ui -> driIcon-> setPixmap(QPixmap(DRINK_ICON).scaled(iconSize, Qt::KeepAspectRatio));

    //backStack.push(HOME_TAB);
    backPressed = false;
    lastPage = HOME_TAB;

    ui -> tabWidget -> setCurrentIndex(HOME_TAB);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_backButton_clicked()
{
    backPressed = true;

    if (!backStack.isEmpty())
        ui -> tabWidget -> setCurrentIndex(backStack.pop());
    else
        ui -> tabWidget -> setCurrentIndex(HOME_TAB);
}

void MainWindow::on_drinkButton_clicked()
{
    MenuVector typeMenu = menu.getMenu(DRINKS);

    QSize imgSize = ui -> drink1_pic -> size();
    ui -> drink1_pic -> setPixmap(typeMenu[0].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink2_pic -> setPixmap(typeMenu[1].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink3_pic -> setPixmap(typeMenu[2].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink4_pic -> setPixmap(typeMenu[3].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> drink5_pic -> setPixmap(typeMenu[4].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> tabWidget -> setCurrentIndex(REFILLS_TAB);
}

void MainWindow::on_ticketButton_clicked()
{
    ui -> tabWidget -> setCurrentIndex(ORDER_TAB);
}

void MainWindow::on_gameButton_clicked()
{

}

void MainWindow::on_assistButton_clicked()
{
    QMessageBox* msgBox = new QMessageBox(this);
    msgBox->setAttribute(Qt::WA_DeleteOnClose);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox -> setStyleSheet("background-color: rgb(188, 188, 188);\nfont: 57 20pt \"Counter-Strike\";");
    msgBox->setWindowTitle("Help");
    msgBox->setText( tr("Your Server has been notified, and will be with you shortly.") );
    msgBox->open( this, SLOT(msgBoxClosed(QAbstractButton*)) );

}

void MainWindow::on_helpButton_clicked()
{

}

void MainWindow::hideAll()
{/*
    ui -> orderNumLabel -> hide();
    ui -> listView -> hide();
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COL; col++)
        {
            gridLabels[row][col] -> hide();
        }
    }*/
}

void MainWindow::goHome()
{
    hideAll();

}

void MainWindow::on_loginButton_clicked()
{
    ui -> tabWidget -> setCurrentIndex(LOGIN_TAB);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QString input = event -> text().toLower();
    qDebug() << input;
}

void MainWindow::on_oneButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "1");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);

}

void MainWindow::on_twoButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "2");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_threeButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "3");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_fourButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "4");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_fiveButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "5");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_sixButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "6");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_sevenButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "7");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_eightButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "8");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_nineButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "9");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_zeroButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "0");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_clearButton_clicked()
{
    ui -> passwordBox -> setText("\n\n\t");
}

void MainWindow::on_enterButton_clicked()
{
    QString pin = ui -> passwordBox -> toPlainText().trimmed();
    ui -> passwordBox -> setText("\n\n\t");
    qDebug() << pin;
}

void MainWindow::disableButtons()
{
    for (int i = 0; i < NUM_BUTTONS; i++)
    {
        buttonArr[i] -> setEnabled(false);
    }
}

void MainWindow::enableButtons()
{
    for (int i = 0; i < NUM_BUTTONS; i++)
    {
        buttonArr[i] -> setEnabled(true);
    }
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    if (backPressed)
        backPressed = false;
    else
        backStack.push(lastPage);

    lastPage = index;
}

void MainWindow::on_appButton_clicked()
{
    loadMenu(APPETIZERS);
    ui -> tabWidget -> setCurrentIndex(MENU_TAB);
}

void MainWindow::on_entButton_clicked()
{
    loadMenu(ENTREES);
    ui -> tabWidget -> setCurrentIndex(MENU_TAB);
}

void MainWindow::on_driButton_clicked()
{
    loadMenu(DRINKS);
    ui -> tabWidget -> setCurrentIndex(MENU_TAB);
}

void MainWindow::on_desButton_clicked()
{
    loadMenu(DESSERTS);
    ui -> tabWidget -> setCurrentIndex(MENU_TAB);
}

void MainWindow::on_sidButton_clicked()
{
    loadMenu(SIDES);
    ui -> tabWidget -> setCurrentIndex(MENU_TAB);
}

void MainWindow::loadMenu(int type)
{
    const QString textFmt = "%1\n%2.....%3";
    MenuVector typeMenu = menu.getMenu(type);
    menu.setCategory((Category)type);

    QSize imgSize = ui -> menu1_pic -> size();
    ui -> menu1_pic -> setPixmap(typeMenu[0].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu2_pic -> setPixmap(typeMenu[1].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu3_pic -> setPixmap(typeMenu[2].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu4_pic -> setPixmap(typeMenu[3].image.scaled(imgSize, Qt::KeepAspectRatio));
    ui -> menu5_pic -> setPixmap(typeMenu[4].image.scaled(imgSize, Qt::KeepAspectRatio));

    ui -> menu1_text -> setText(textFmt.arg(typeMenu[0].name).arg(typeMenu[0].description).arg(typeMenu[0].price));
    ui -> menu2_text -> setText(textFmt.arg(typeMenu[1].name).arg(typeMenu[1].description).arg(typeMenu[1].price));
    ui -> menu3_text -> setText(textFmt.arg(typeMenu[2].name).arg(typeMenu[2].description).arg(typeMenu[2].price));
    ui -> menu4_text -> setText(textFmt.arg(typeMenu[3].name).arg(typeMenu[3].description).arg(typeMenu[3].price));
    ui -> menu5_text -> setText(textFmt.arg(typeMenu[4].name).arg(typeMenu[4].description).arg(typeMenu[4].price));
}


void MainWindow::on_addButton1_clicked()
{
    MenuItem item = menu.getMenu(menu.getCategory())[0];
    ui -> menuList -> addItem(item.name);
}


void MainWindow::on_menuBackButton_clicked()
{
    ui -> backButton -> click();
}

void MainWindow::on_menuRemoveButton_clicked()
{
    qDeleteAll(ui -> menuList -> selectedItems());
}
