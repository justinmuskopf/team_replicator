/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *backButton;
    QPushButton *drinkButton;
    QPushButton *ticketButton;
    QPushButton *gameButton;
    QPushButton *helpButton;
    QPushButton *assistButton;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QPushButton *loginButton;
    QLabel *homeLabel;
    QTextEdit *passBox;
    QLabel *logoLabel;
    QLabel *spaceLabel;
    QWidget *orderTab;
    QLabel *categoryLabel;
    QLabel *restName;
    QListView *listView;
    QFrame *line_2;
    QLabel *orderNumLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *tab;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(920, 468);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-1, 359, 921, 91));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(46, 47, 48);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(20, 20, 80, 41));
        QPalette palette;
        QBrush brush(QColor(188, 188, 188, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        backButton->setPalette(palette);
        backButton->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188);"));
        drinkButton = new QPushButton(frame);
        drinkButton->setObjectName(QStringLiteral("drinkButton"));
        drinkButton->setGeometry(QRect(130, 20, 80, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        drinkButton->setPalette(palette1);
        drinkButton->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188);"));
        ticketButton = new QPushButton(frame);
        ticketButton->setObjectName(QStringLiteral("ticketButton"));
        ticketButton->setGeometry(QRect(240, 20, 80, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ticketButton->setPalette(palette2);
        ticketButton->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188);"));
        gameButton = new QPushButton(frame);
        gameButton->setObjectName(QStringLiteral("gameButton"));
        gameButton->setGeometry(QRect(350, 20, 80, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        gameButton->setPalette(palette3);
        gameButton->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188);"));
        helpButton = new QPushButton(frame);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setGeometry(QRect(810, 20, 80, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        helpButton->setPalette(palette4);
        helpButton->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188);"));
        assistButton = new QPushButton(frame);
        assistButton->setObjectName(QStringLiteral("assistButton"));
        assistButton->setGeometry(QRect(669, 20, 111, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        assistButton->setPalette(palette5);
        assistButton->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188);"));
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, -20, 951, 31));
        line->setLineWidth(10);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 921, 361));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setStyleSheet(QStringLiteral(""));
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        loginButton = new QPushButton(homeTab);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(402, 250, 80, 41));
        loginButton->setStyleSheet(QStringLiteral("background-color: rgb(188, 188, 188);"));
        homeLabel = new QLabel(homeTab);
        homeLabel->setObjectName(QStringLiteral("homeLabel"));
        homeLabel->setGeometry(QRect(100, 10, 681, 71));
        passBox = new QTextEdit(homeTab);
        passBox->setObjectName(QStringLiteral("passBox"));
        passBox->setGeometry(QRect(353, 200, 181, 41));
        passBox->setInputMethodHints(Qt::ImhNone);
        passBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        passBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        logoLabel = new QLabel(homeTab);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        logoLabel->setGeometry(QRect(385, 80, 171, 121));
        spaceLabel = new QLabel(homeTab);
        spaceLabel->setObjectName(QStringLiteral("spaceLabel"));
        spaceLabel->setGeometry(QRect(-4, 2, 921, 341));
        tabWidget->addTab(homeTab, QString());
        spaceLabel->raise();
        loginButton->raise();
        homeLabel->raise();
        passBox->raise();
        logoLabel->raise();
        orderTab = new QWidget();
        orderTab->setObjectName(QStringLiteral("orderTab"));
        categoryLabel = new QLabel(orderTab);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));
        categoryLabel->setGeometry(QRect(10, 50, 61, 16));
        restName = new QLabel(orderTab);
        restName->setObjectName(QStringLiteral("restName"));
        restName->setGeometry(QRect(10, 10, 171, 31));
        listView = new QListView(orderTab);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(610, 50, 256, 251));
        line_2 = new QFrame(orderTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 30, 211, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        orderNumLabel = new QLabel(orderTab);
        orderNumLabel->setObjectName(QStringLiteral("orderNumLabel"));
        orderNumLabel->setGeometry(QRect(610, 20, 121, 31));
        gridLayoutWidget = new QWidget(orderTab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 421, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(orderTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        backButton->setText(QApplication::translate("MainWindow", "Back", nullptr));
        drinkButton->setText(QApplication::translate("MainWindow", "Refills", nullptr));
        ticketButton->setText(QApplication::translate("MainWindow", "My Ticket", nullptr));
        gameButton->setText(QApplication::translate("MainWindow", "Games", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "Help", nullptr));
        assistButton->setText(QApplication::translate("MainWindow", "Request Assistance", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        homeLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; color:#ffffff;\">The Replicator</span></p></body></html>", nullptr));
        logoLabel->setText(QString());
        spaceLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("MainWindow", "Home", nullptr));
        categoryLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Category</span></p></body></html>", nullptr));
        restName->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Replicator Restaurant</span></p></body></html>", nullptr));
        orderNumLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Order #</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(orderTab), QApplication::translate("MainWindow", "Order", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Refills", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
