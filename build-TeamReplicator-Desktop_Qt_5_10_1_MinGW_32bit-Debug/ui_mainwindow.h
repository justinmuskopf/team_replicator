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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QVBoxLayout *verticalLayout_8;
    QLabel *spaceLabel;
    QPushButton *startOrderButton;
    QPushButton *loginButton;
    QWidget *orderTab_7;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QPushButton *appButton;
    QPushButton *desButton;
    QPushButton *entButton;
    QLabel *appIcon;
    QPushButton *driButton;
    QPushButton *sidButton;
    QLabel *driIcon;
    QLabel *desIcon;
    QLabel *sidIcon;
    QLabel *entIcon;
    QLabel *kidIcon;
    QPushButton *kidButton;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout;
    QLabel *orderNumLabel;
    QListWidget *orderList;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *orderRemoveButton;
    QPushButton *placeOrderButton;
    QLabel *orderTotalLabel;
    QWidget *refillsTab;
    QHBoxLayout *horizontalLayout;
    QLabel *drink1_pic;
    QLabel *drink2_pic;
    QLabel *drink3_pic;
    QLabel *drink4_pic;
    QLabel *drink5_pic;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listWidget_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *menuTab;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QLabel *menu1_pic;
    QLabel *menu2_pic;
    QLabel *menu3_pic;
    QLabel *menu4_pic;
    QLabel *menu5_pic;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *menu1_text;
    QLabel *menu2_text;
    QLabel *menu3_text;
    QLabel *menu4_text;
    QLabel *menu5_text;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addButton1;
    QPushButton *addButton2;
    QPushButton *addButton3;
    QPushButton *addButton4;
    QPushButton *addButton5;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *orderNumLabel_2;
    QListWidget *menuList;
    QLabel *menuTotalLabel;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *menuRemoveButton;
    QPushButton *menuBackButton;
    QWidget *loginTab;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_4;
    QPushButton *oneButton;
    QPushButton *fourButton;
    QPushButton *twoButton;
    QPushButton *sevenButton;
    QPushButton *nineButton;
    QPushButton *sixButton;
    QPushButton *fiveButton;
    QPushButton *eightButton;
    QPushButton *threeButton;
    QPushButton *zeroButton;
    QPushButton *clearButton;
    QPushButton *enterButton;
    QTextBrowser *passwordBox;
    QWidget *waitstaffTab;
    QVBoxLayout *verticalLayout_11;
    QLabel *waitstaffWelcomeLabel;
    QWidget *kitchenTab;
    QVBoxLayout *verticalLayout_12;
    QLabel *kitchenWelcomeLabel;
    QWidget *managerTab;
    QVBoxLayout *verticalLayout_13;
    QLabel *managerWelcomeLabel;
    QWidget *Table;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QTextEdit *nameInput;
    QLabel *label_2;
    QTextEdit *allergyInput;
    QPushButton *addToTableButton;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_10;
    QListWidget *tableList;
    QPushButton *beginOrderButton;
    QWidget *payment;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_111;
    QListWidget *yetToPayList;
    QLabel *totalRemainingLabel;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_121;
    QPushButton *addToPaymentButton;
    QPushButton *removeFromPaymentButton;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_131;
    QListWidget *paymentList;
    QLabel *totalToPayLabel;
    QPushButton *payForOrderButton;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QPushButton *drinkButton;
    QPushButton *ticketButton;
    QPushButton *gameButton;
    QPushButton *assistButton;
    QPushButton *helpButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1968, 791);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(46, 47, 48);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(46, 47, 48);"));
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        verticalLayout_8 = new QVBoxLayout(homeTab);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        spaceLabel = new QLabel(homeTab);
        spaceLabel->setObjectName(QStringLiteral("spaceLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spaceLabel->sizePolicy().hasHeightForWidth());
        spaceLabel->setSizePolicy(sizePolicy1);
        spaceLabel->setMaximumSize(QSize(16777215, 500));

        verticalLayout_8->addWidget(spaceLabel);

        startOrderButton = new QPushButton(homeTab);
        startOrderButton->setObjectName(QStringLiteral("startOrderButton"));
        sizePolicy.setHeightForWidth(startOrderButton->sizePolicy().hasHeightForWidth());
        startOrderButton->setSizePolicy(sizePolicy);
        startOrderButton->setMinimumSize(QSize(200, 100));
        startOrderButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 32pt \"Counter-Strike\";"));

        verticalLayout_8->addWidget(startOrderButton);

        loginButton = new QPushButton(homeTab);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        loginButton->setMinimumSize(QSize(0, 50));
        loginButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_8->addWidget(loginButton, 0, Qt::AlignRight|Qt::AlignBottom);

        tabWidget->addTab(homeTab, QString());
        orderTab_7 = new QWidget();
        orderTab_7->setObjectName(QStringLiteral("orderTab_7"));
        gridLayout_7 = new QGridLayout(orderTab_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_6 = new QLabel(orderTab_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 50));
        label_6->setStyleSheet(QStringLiteral("font: 57 20pt \"Counter-Strike\";"));

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(orderTab_7);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QStringLiteral("font: 57 16pt \"Counter-Strike\";"));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        appButton = new QPushButton(groupBox_2);
        appButton->setObjectName(QStringLiteral("appButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(appButton->sizePolicy().hasHeightForWidth());
        appButton->setSizePolicy(sizePolicy3);
        appButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(appButton, 0, 1, 1, 1);

        desButton = new QPushButton(groupBox_2);
        desButton->setObjectName(QStringLiteral("desButton"));
        sizePolicy3.setHeightForWidth(desButton->sizePolicy().hasHeightForWidth());
        desButton->setSizePolicy(sizePolicy3);
        desButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(desButton, 3, 1, 1, 1);

        entButton = new QPushButton(groupBox_2);
        entButton->setObjectName(QStringLiteral("entButton"));
        sizePolicy3.setHeightForWidth(entButton->sizePolicy().hasHeightForWidth());
        entButton->setSizePolicy(sizePolicy3);
        entButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(entButton, 1, 1, 1, 1);

        appIcon = new QLabel(groupBox_2);
        appIcon->setObjectName(QStringLiteral("appIcon"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(appIcon->sizePolicy().hasHeightForWidth());
        appIcon->setSizePolicy(sizePolicy4);
        appIcon->setMinimumSize(QSize(100, 100));
        appIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(appIcon, 0, 0, 1, 1);

        driButton = new QPushButton(groupBox_2);
        driButton->setObjectName(QStringLiteral("driButton"));
        sizePolicy3.setHeightForWidth(driButton->sizePolicy().hasHeightForWidth());
        driButton->setSizePolicy(sizePolicy3);
        driButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(driButton, 2, 1, 1, 1);

        sidButton = new QPushButton(groupBox_2);
        sidButton->setObjectName(QStringLiteral("sidButton"));
        sizePolicy3.setHeightForWidth(sidButton->sizePolicy().hasHeightForWidth());
        sidButton->setSizePolicy(sizePolicy3);
        sidButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(sidButton, 4, 1, 1, 1);

        driIcon = new QLabel(groupBox_2);
        driIcon->setObjectName(QStringLiteral("driIcon"));
        sizePolicy4.setHeightForWidth(driIcon->sizePolicy().hasHeightForWidth());
        driIcon->setSizePolicy(sizePolicy4);
        driIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(driIcon, 2, 0, 1, 1);

        desIcon = new QLabel(groupBox_2);
        desIcon->setObjectName(QStringLiteral("desIcon"));
        sizePolicy4.setHeightForWidth(desIcon->sizePolicy().hasHeightForWidth());
        desIcon->setSizePolicy(sizePolicy4);
        desIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(desIcon, 3, 0, 1, 1);

        sidIcon = new QLabel(groupBox_2);
        sidIcon->setObjectName(QStringLiteral("sidIcon"));
        sizePolicy4.setHeightForWidth(sidIcon->sizePolicy().hasHeightForWidth());
        sidIcon->setSizePolicy(sizePolicy4);
        sidIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(sidIcon, 4, 0, 1, 1);

        entIcon = new QLabel(groupBox_2);
        entIcon->setObjectName(QStringLiteral("entIcon"));
        sizePolicy4.setHeightForWidth(entIcon->sizePolicy().hasHeightForWidth());
        entIcon->setSizePolicy(sizePolicy4);
        entIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(entIcon, 1, 0, 1, 1);

        kidIcon = new QLabel(groupBox_2);
        kidIcon->setObjectName(QStringLiteral("kidIcon"));

        gridLayout_8->addWidget(kidIcon, 5, 0, 1, 1);

        kidButton = new QPushButton(groupBox_2);
        kidButton->setObjectName(QStringLiteral("kidButton"));
        sizePolicy2.setHeightForWidth(kidButton->sizePolicy().hasHeightForWidth());
        kidButton->setSizePolicy(sizePolicy2);
        kidButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(kidButton, 5, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 2, 1);

        groupBox_6 = new QGroupBox(orderTab_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        orderNumLabel = new QLabel(groupBox_6);
        orderNumLabel->setObjectName(QStringLiteral("orderNumLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(orderNumLabel->sizePolicy().hasHeightForWidth());
        orderNumLabel->setSizePolicy(sizePolicy5);
        orderNumLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Counter-Strike\";\n"
"color: rgb(198, 198, 198);"));

        gridLayout->addWidget(orderNumLabel, 0, 0, 1, 1, Qt::AlignTop);

        orderList = new QListWidget(groupBox_6);
        orderList->setObjectName(QStringLiteral("orderList"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(orderList->sizePolicy().hasHeightForWidth());
        orderList->setSizePolicy(sizePolicy6);
        orderList->setStyleSheet(QLatin1String("font: 57 16pt \"Counter-Strike\";\n"
"color: rgb(188, 188, 188);"));

        gridLayout->addWidget(orderList, 1, 0, 1, 1);

        frame_5 = new QFrame(groupBox_6);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(0, 75));
        frame_5->setMaximumSize(QSize(16777215, 100));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        orderRemoveButton = new QPushButton(frame_5);
        orderRemoveButton->setObjectName(QStringLiteral("orderRemoveButton"));
        sizePolicy3.setHeightForWidth(orderRemoveButton->sizePolicy().hasHeightForWidth());
        orderRemoveButton->setSizePolicy(sizePolicy3);
        orderRemoveButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_5->addWidget(orderRemoveButton);

        placeOrderButton = new QPushButton(frame_5);
        placeOrderButton->setObjectName(QStringLiteral("placeOrderButton"));
        sizePolicy3.setHeightForWidth(placeOrderButton->sizePolicy().hasHeightForWidth());
        placeOrderButton->setSizePolicy(sizePolicy3);
        placeOrderButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_5->addWidget(placeOrderButton);


        gridLayout->addWidget(frame_5, 3, 0, 1, 1);

        orderTotalLabel = new QLabel(groupBox_6);
        orderTotalLabel->setObjectName(QStringLiteral("orderTotalLabel"));
        orderTotalLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Counter-Strike\";\n"
"color: rgb(188, 188, 188);"));

        gridLayout->addWidget(orderTotalLabel, 2, 0, 1, 1, Qt::AlignRight);


        gridLayout_7->addWidget(groupBox_6, 1, 5, 3, 1);

        tabWidget->addTab(orderTab_7, QString());
        refillsTab = new QWidget();
        refillsTab->setObjectName(QStringLiteral("refillsTab"));
        horizontalLayout = new QHBoxLayout(refillsTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        drink1_pic = new QLabel(refillsTab);
        drink1_pic->setObjectName(QStringLiteral("drink1_pic"));
        drink1_pic->setMinimumSize(QSize(100, 100));
        drink1_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink1_pic);

        drink2_pic = new QLabel(refillsTab);
        drink2_pic->setObjectName(QStringLiteral("drink2_pic"));
        drink2_pic->setMinimumSize(QSize(100, 100));
        drink2_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink2_pic);

        drink3_pic = new QLabel(refillsTab);
        drink3_pic->setObjectName(QStringLiteral("drink3_pic"));
        drink3_pic->setMinimumSize(QSize(100, 100));
        drink3_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink3_pic);

        drink4_pic = new QLabel(refillsTab);
        drink4_pic->setObjectName(QStringLiteral("drink4_pic"));
        drink4_pic->setMinimumSize(QSize(100, 100));
        drink4_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink4_pic);

        drink5_pic = new QLabel(refillsTab);
        drink5_pic->setObjectName(QStringLiteral("drink5_pic"));
        sizePolicy.setHeightForWidth(drink5_pic->sizePolicy().hasHeightForWidth());
        drink5_pic->setSizePolicy(sizePolicy);
        drink5_pic->setMinimumSize(QSize(100, 100));
        drink5_pic->setMaximumSize(QSize(150, 150));
        drink5_pic->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(drink5_pic);

        groupBox_3 = new QGroupBox(refillsTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMaximumSize(QSize(500, 16777215));
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        listWidget_2 = new QListWidget(groupBox_3);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy7);

        verticalLayout_9->addWidget(listWidget_2);

        frame = new QFrame(groupBox_3);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy8);
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_9->addWidget(frame);


        horizontalLayout->addWidget(groupBox_3);

        tabWidget->addTab(refillsTab, QString());
        menuTab = new QWidget();
        menuTab->setObjectName(QStringLiteral("menuTab"));
        horizontalLayout_3 = new QHBoxLayout(menuTab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        frame_3 = new QFrame(menuTab);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy9);
        frame_3->setMinimumSize(QSize(100, 0));
        frame_3->setMaximumSize(QSize(100, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        menu1_pic = new QLabel(frame_3);
        menu1_pic->setObjectName(QStringLiteral("menu1_pic"));
        sizePolicy4.setHeightForWidth(menu1_pic->sizePolicy().hasHeightForWidth());
        menu1_pic->setSizePolicy(sizePolicy4);
        menu1_pic->setMinimumSize(QSize(100, 100));
        menu1_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu1_pic);

        menu2_pic = new QLabel(frame_3);
        menu2_pic->setObjectName(QStringLiteral("menu2_pic"));
        sizePolicy4.setHeightForWidth(menu2_pic->sizePolicy().hasHeightForWidth());
        menu2_pic->setSizePolicy(sizePolicy4);
        menu2_pic->setMinimumSize(QSize(100, 100));
        menu2_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu2_pic);

        menu3_pic = new QLabel(frame_3);
        menu3_pic->setObjectName(QStringLiteral("menu3_pic"));
        sizePolicy4.setHeightForWidth(menu3_pic->sizePolicy().hasHeightForWidth());
        menu3_pic->setSizePolicy(sizePolicy4);
        menu3_pic->setMinimumSize(QSize(100, 100));
        menu3_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu3_pic);

        menu4_pic = new QLabel(frame_3);
        menu4_pic->setObjectName(QStringLiteral("menu4_pic"));
        sizePolicy4.setHeightForWidth(menu4_pic->sizePolicy().hasHeightForWidth());
        menu4_pic->setSizePolicy(sizePolicy4);
        menu4_pic->setMinimumSize(QSize(100, 100));
        menu4_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu4_pic);

        menu5_pic = new QLabel(frame_3);
        menu5_pic->setObjectName(QStringLiteral("menu5_pic"));
        sizePolicy4.setHeightForWidth(menu5_pic->sizePolicy().hasHeightForWidth());
        menu5_pic->setSizePolicy(sizePolicy4);
        menu5_pic->setMinimumSize(QSize(100, 100));
        menu5_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu5_pic);


        horizontalLayout_3->addWidget(frame_3);

        frame_2 = new QFrame(menuTab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        menu1_text = new QLabel(frame_2);
        menu1_text->setObjectName(QStringLiteral("menu1_text"));
        sizePolicy5.setHeightForWidth(menu1_text->sizePolicy().hasHeightForWidth());
        menu1_text->setSizePolicy(sizePolicy5);
        menu1_text->setMinimumSize(QSize(0, 100));
        menu1_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu1_text->setFrameShape(QFrame::Box);
        menu1_text->setFrameShadow(QFrame::Raised);
        menu1_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu1_text);

        menu2_text = new QLabel(frame_2);
        menu2_text->setObjectName(QStringLiteral("menu2_text"));
        sizePolicy5.setHeightForWidth(menu2_text->sizePolicy().hasHeightForWidth());
        menu2_text->setSizePolicy(sizePolicy5);
        menu2_text->setMinimumSize(QSize(0, 100));
        menu2_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu2_text->setFrameShape(QFrame::Box);
        menu2_text->setFrameShadow(QFrame::Raised);
        menu2_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu2_text);

        menu3_text = new QLabel(frame_2);
        menu3_text->setObjectName(QStringLiteral("menu3_text"));
        sizePolicy5.setHeightForWidth(menu3_text->sizePolicy().hasHeightForWidth());
        menu3_text->setSizePolicy(sizePolicy5);
        menu3_text->setMinimumSize(QSize(0, 100));
        menu3_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu3_text->setFrameShape(QFrame::Box);
        menu3_text->setFrameShadow(QFrame::Raised);
        menu3_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu3_text);

        menu4_text = new QLabel(frame_2);
        menu4_text->setObjectName(QStringLiteral("menu4_text"));
        sizePolicy5.setHeightForWidth(menu4_text->sizePolicy().hasHeightForWidth());
        menu4_text->setSizePolicy(sizePolicy5);
        menu4_text->setMinimumSize(QSize(0, 100));
        menu4_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu4_text->setFrameShape(QFrame::Box);
        menu4_text->setFrameShadow(QFrame::Raised);
        menu4_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu4_text);

        menu5_text = new QLabel(frame_2);
        menu5_text->setObjectName(QStringLiteral("menu5_text"));
        sizePolicy5.setHeightForWidth(menu5_text->sizePolicy().hasHeightForWidth());
        menu5_text->setSizePolicy(sizePolicy5);
        menu5_text->setMinimumSize(QSize(0, 100));
        menu5_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu5_text->setFrameShape(QFrame::Box);
        menu5_text->setFrameShadow(QFrame::Raised);
        menu5_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu5_text);


        horizontalLayout_3->addWidget(frame_2);

        frame_4 = new QFrame(menuTab);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMaximumSize(QSize(150, 16777215));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        addButton1 = new QPushButton(frame_4);
        addButton1->setObjectName(QStringLiteral("addButton1"));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(addButton1->sizePolicy().hasHeightForWidth());
        addButton1->setSizePolicy(sizePolicy10);
        addButton1->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton1);

        addButton2 = new QPushButton(frame_4);
        addButton2->setObjectName(QStringLiteral("addButton2"));
        sizePolicy10.setHeightForWidth(addButton2->sizePolicy().hasHeightForWidth());
        addButton2->setSizePolicy(sizePolicy10);
        addButton2->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton2);

        addButton3 = new QPushButton(frame_4);
        addButton3->setObjectName(QStringLiteral("addButton3"));
        sizePolicy10.setHeightForWidth(addButton3->sizePolicy().hasHeightForWidth());
        addButton3->setSizePolicy(sizePolicy10);
        addButton3->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton3);

        addButton4 = new QPushButton(frame_4);
        addButton4->setObjectName(QStringLiteral("addButton4"));
        sizePolicy10.setHeightForWidth(addButton4->sizePolicy().hasHeightForWidth());
        addButton4->setSizePolicy(sizePolicy10);
        addButton4->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton4);

        addButton5 = new QPushButton(frame_4);
        addButton5->setObjectName(QStringLiteral("addButton5"));
        sizePolicy10.setHeightForWidth(addButton5->sizePolicy().hasHeightForWidth());
        addButton5->setSizePolicy(sizePolicy10);
        addButton5->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton5);


        horizontalLayout_3->addWidget(frame_4);

        groupBox_5 = new QGroupBox(menuTab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        orderNumLabel_2 = new QLabel(groupBox_5);
        orderNumLabel_2->setObjectName(QStringLiteral("orderNumLabel_2"));
        sizePolicy5.setHeightForWidth(orderNumLabel_2->sizePolicy().hasHeightForWidth());
        orderNumLabel_2->setSizePolicy(sizePolicy5);
        orderNumLabel_2->setStyleSheet(QStringLiteral("font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_2->addWidget(orderNumLabel_2);

        menuList = new QListWidget(groupBox_5);
        menuList->setObjectName(QStringLiteral("menuList"));
        sizePolicy8.setHeightForWidth(menuList->sizePolicy().hasHeightForWidth());
        menuList->setSizePolicy(sizePolicy8);
        menuList->setStyleSheet(QLatin1String("font: 57 16pt \"Counter-Strike\";\n"
"color: rgb(188, 188, 188);"));

        verticalLayout_2->addWidget(menuList);

        menuTotalLabel = new QLabel(groupBox_5);
        menuTotalLabel->setObjectName(QStringLiteral("menuTotalLabel"));
        sizePolicy5.setHeightForWidth(menuTotalLabel->sizePolicy().hasHeightForWidth());
        menuTotalLabel->setSizePolicy(sizePolicy5);
        menuTotalLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Counter-Strike\";\n"
"color: rgb(188, 188, 188);"));

        verticalLayout_2->addWidget(menuTotalLabel, 0, Qt::AlignRight);

        frame_6 = new QFrame(groupBox_5);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setMaximumSize(QSize(16777215, 75));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        menuRemoveButton = new QPushButton(frame_6);
        menuRemoveButton->setObjectName(QStringLiteral("menuRemoveButton"));
        sizePolicy3.setHeightForWidth(menuRemoveButton->sizePolicy().hasHeightForWidth());
        menuRemoveButton->setSizePolicy(sizePolicy3);
        menuRemoveButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_6->addWidget(menuRemoveButton);

        menuBackButton = new QPushButton(frame_6);
        menuBackButton->setObjectName(QStringLiteral("menuBackButton"));
        sizePolicy3.setHeightForWidth(menuBackButton->sizePolicy().hasHeightForWidth());
        menuBackButton->setSizePolicy(sizePolicy3);
        menuBackButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_6->addWidget(menuBackButton);


        verticalLayout_2->addWidget(frame_6);

        menuList->raise();
        orderNumLabel_2->raise();
        frame_6->raise();
        menuTotalLabel->raise();

        horizontalLayout_3->addWidget(groupBox_5);

        tabWidget->addTab(menuTab, QString());
        loginTab = new QWidget();
        loginTab->setObjectName(QStringLiteral("loginTab"));
        gridLayout_10 = new QGridLayout(loginTab);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        groupBox_4 = new QGroupBox(loginTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy5.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy5);
        groupBox_4->setMaximumSize(QSize(350, 500));
        oneButton = new QPushButton(groupBox_4);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(30, 190, 80, 51));
        QSizePolicy sizePolicy11(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy11);
        oneButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        fourButton = new QPushButton(groupBox_4);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(30, 260, 80, 51));
        sizePolicy11.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy11);
        fourButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        twoButton = new QPushButton(groupBox_4);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(140, 190, 80, 51));
        sizePolicy11.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy11);
        twoButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        sevenButton = new QPushButton(groupBox_4);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setGeometry(QRect(30, 330, 80, 51));
        sizePolicy11.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy11);
        sevenButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        nineButton = new QPushButton(groupBox_4);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setGeometry(QRect(250, 330, 80, 51));
        sizePolicy11.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy11);
        nineButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        sixButton = new QPushButton(groupBox_4);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setGeometry(QRect(250, 260, 80, 51));
        sizePolicy11.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy11);
        sixButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        fiveButton = new QPushButton(groupBox_4);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(140, 260, 80, 51));
        sizePolicy11.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy11);
        fiveButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        eightButton = new QPushButton(groupBox_4);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setGeometry(QRect(140, 330, 80, 51));
        sizePolicy11.setHeightForWidth(eightButton->sizePolicy().hasHeightForWidth());
        eightButton->setSizePolicy(sizePolicy11);
        eightButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        threeButton = new QPushButton(groupBox_4);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(250, 190, 80, 51));
        sizePolicy11.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy11);
        threeButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        zeroButton = new QPushButton(groupBox_4);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setGeometry(QRect(140, 400, 80, 51));
        sizePolicy11.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy11);
        zeroButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        clearButton = new QPushButton(groupBox_4);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(30, 400, 80, 51));
        sizePolicy11.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy11);
        clearButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 16pt \"Counter-Strike\";"));
        enterButton = new QPushButton(groupBox_4);
        enterButton->setObjectName(QStringLiteral("enterButton"));
        enterButton->setGeometry(QRect(250, 400, 80, 51));
        sizePolicy11.setHeightForWidth(enterButton->sizePolicy().hasHeightForWidth());
        enterButton->setSizePolicy(sizePolicy11);
        enterButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 16pt \"Counter-Strike\";"));
        passwordBox = new QTextBrowser(groupBox_4);
        passwordBox->setObjectName(QStringLiteral("passwordBox"));
        passwordBox->setGeometry(QRect(25, 40, 311, 131));
        QPalette palette;
        QBrush brush(QColor(198, 198, 198, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(46, 47, 48, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        passwordBox->setPalette(palette);
        passwordBox->setStyleSheet(QLatin1String("font: 57 32pt \"Counter-Strike\";\n"
"color: rgb(198, 198, 198);"));
        passwordBox->setFrameShape(QFrame::Box);
        passwordBox->setFrameShadow(QFrame::Plain);
        passwordBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        passwordBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        passwordBox->setProperty("test", QVariant(0));

        gridLayout_10->addWidget(groupBox_4, 0, 0, 1, 1);

        tabWidget->addTab(loginTab, QString());
        waitstaffTab = new QWidget();
        waitstaffTab->setObjectName(QStringLiteral("waitstaffTab"));
        verticalLayout_11 = new QVBoxLayout(waitstaffTab);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        waitstaffWelcomeLabel = new QLabel(waitstaffTab);
        waitstaffWelcomeLabel->setObjectName(QStringLiteral("waitstaffWelcomeLabel"));
        waitstaffWelcomeLabel->setStyleSheet(QLatin1String("font: 57 32pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));

        verticalLayout_11->addWidget(waitstaffWelcomeLabel);

        tabWidget->addTab(waitstaffTab, QString());
        kitchenTab = new QWidget();
        kitchenTab->setObjectName(QStringLiteral("kitchenTab"));
        verticalLayout_12 = new QVBoxLayout(kitchenTab);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        kitchenWelcomeLabel = new QLabel(kitchenTab);
        kitchenWelcomeLabel->setObjectName(QStringLiteral("kitchenWelcomeLabel"));
        kitchenWelcomeLabel->setStyleSheet(QLatin1String("font: 57 32pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));

        verticalLayout_12->addWidget(kitchenWelcomeLabel);

        tabWidget->addTab(kitchenTab, QString());
        managerTab = new QWidget();
        managerTab->setObjectName(QStringLiteral("managerTab"));
        verticalLayout_13 = new QVBoxLayout(managerTab);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        managerWelcomeLabel = new QLabel(managerTab);
        managerWelcomeLabel->setObjectName(QStringLiteral("managerWelcomeLabel"));
        managerWelcomeLabel->setStyleSheet(QLatin1String("font: 57 32pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));

        verticalLayout_13->addWidget(managerWelcomeLabel);

        tabWidget->addTab(managerTab, QString());
        Table = new QWidget();
        Table->setObjectName(QStringLiteral("Table"));
        horizontalLayout_7 = new QHBoxLayout(Table);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox_8 = new QGroupBox(Table);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(groupBox_8);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame_7 = new QFrame(groupBox_8);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_7);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label = new QLabel(frame_7);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy11.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy11);
        label->setStyleSheet(QStringLiteral("font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_6->addWidget(label);

        nameInput = new QTextEdit(frame_7);
        nameInput->setObjectName(QStringLiteral("nameInput"));
        QSizePolicy sizePolicy12(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(nameInput->sizePolicy().hasHeightForWidth());
        nameInput->setSizePolicy(sizePolicy12);
        nameInput->setStyleSheet(QLatin1String("font: 57 28pt \"Counter-Strike\";\n"
"color: rgb(238, 238, 236);"));

        verticalLayout_6->addWidget(nameInput);

        label_2 = new QLabel(frame_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setStyleSheet(QStringLiteral("font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_6->addWidget(label_2);

        allergyInput = new QTextEdit(frame_7);
        allergyInput->setObjectName(QStringLiteral("allergyInput"));
        sizePolicy12.setHeightForWidth(allergyInput->sizePolicy().hasHeightForWidth());
        allergyInput->setSizePolicy(sizePolicy12);
        allergyInput->setStyleSheet(QLatin1String("font: 57 28pt \"Counter-Strike\";\n"
"color: rgb(238, 238, 236);"));

        verticalLayout_6->addWidget(allergyInput);

        addToTableButton = new QPushButton(frame_7);
        addToTableButton->setObjectName(QStringLiteral("addToTableButton"));
        addToTableButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_6->addWidget(addToTableButton);


        verticalLayout_5->addWidget(frame_7);


        horizontalLayout_7->addWidget(groupBox_8);

        groupBox_7 = new QGroupBox(Table);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        verticalLayout_10 = new QVBoxLayout(groupBox_7);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        tableList = new QListWidget(groupBox_7);
        new QListWidgetItem(tableList);
        new QListWidgetItem(tableList);
        tableList->setObjectName(QStringLiteral("tableList"));
        sizePolicy.setHeightForWidth(tableList->sizePolicy().hasHeightForWidth());
        tableList->setSizePolicy(sizePolicy);
        tableList->setStyleSheet(QLatin1String("font: 57 28pt \"Counter-Strike\";\n"
"color: rgb(238, 238, 236);"));

        verticalLayout_10->addWidget(tableList);

        beginOrderButton = new QPushButton(groupBox_7);
        beginOrderButton->setObjectName(QStringLiteral("beginOrderButton"));
        beginOrderButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_10->addWidget(beginOrderButton);


        horizontalLayout_7->addWidget(groupBox_7);

        tabWidget->addTab(Table, QString());
        payment = new QWidget();
        payment->setObjectName(QStringLiteral("payment"));
        horizontalLayout_8 = new QHBoxLayout(payment);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        frame_10 = new QFrame(payment);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        sizePolicy.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy);
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_111 = new QVBoxLayout(frame_10);
        verticalLayout_111->setSpacing(6);
        verticalLayout_111->setContentsMargins(11, 11, 11, 11);
        verticalLayout_111->setObjectName(QStringLiteral("verticalLayout_111"));
        yetToPayList = new QListWidget(frame_10);
        yetToPayList->setObjectName(QStringLiteral("yetToPayList"));
        yetToPayList->setStyleSheet(QLatin1String("font: 57 28pt \"Counter-Strike\";\n"
"color: rgb(238, 238, 236);"));

        verticalLayout_111->addWidget(yetToPayList);

        totalRemainingLabel = new QLabel(frame_10);
        totalRemainingLabel->setObjectName(QStringLiteral("totalRemainingLabel"));
        totalRemainingLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Counter-Strike\";\n"
"color: rgb(188, 188, 188);"));

        verticalLayout_111->addWidget(totalRemainingLabel, 0, Qt::AlignRight);


        horizontalLayout_8->addWidget(frame_10);

        frame_9 = new QFrame(payment);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_121 = new QVBoxLayout(frame_9);
        verticalLayout_121->setSpacing(6);
        verticalLayout_121->setContentsMargins(11, 11, 11, 11);
        verticalLayout_121->setObjectName(QStringLiteral("verticalLayout_121"));
        addToPaymentButton = new QPushButton(frame_9);
        addToPaymentButton->setObjectName(QStringLiteral("addToPaymentButton"));
        sizePolicy.setHeightForWidth(addToPaymentButton->sizePolicy().hasHeightForWidth());
        addToPaymentButton->setSizePolicy(sizePolicy);
        addToPaymentButton->setMinimumSize(QSize(200, 0));
        addToPaymentButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_121->addWidget(addToPaymentButton);

        removeFromPaymentButton = new QPushButton(frame_9);
        removeFromPaymentButton->setObjectName(QStringLiteral("removeFromPaymentButton"));
        sizePolicy.setHeightForWidth(removeFromPaymentButton->sizePolicy().hasHeightForWidth());
        removeFromPaymentButton->setSizePolicy(sizePolicy);
        removeFromPaymentButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_121->addWidget(removeFromPaymentButton);


        horizontalLayout_8->addWidget(frame_9);

        frame_8 = new QFrame(payment);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_131 = new QVBoxLayout(frame_8);
        verticalLayout_131->setSpacing(6);
        verticalLayout_131->setContentsMargins(11, 11, 11, 11);
        verticalLayout_131->setObjectName(QStringLiteral("verticalLayout_131"));
        paymentList = new QListWidget(frame_8);
        paymentList->setObjectName(QStringLiteral("paymentList"));
        paymentList->setStyleSheet(QLatin1String("font: 57 28pt \"Counter-Strike\";\n"
"color: rgb(238, 238, 236);"));

        verticalLayout_131->addWidget(paymentList);

        totalToPayLabel = new QLabel(frame_8);
        totalToPayLabel->setObjectName(QStringLiteral("totalToPayLabel"));
        totalToPayLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Counter-Strike\";\n"
"color: rgb(188, 188, 188);"));

        verticalLayout_131->addWidget(totalToPayLabel, 0, Qt::AlignRight);

        payForOrderButton = new QPushButton(frame_8);
        payForOrderButton->setObjectName(QStringLiteral("payForOrderButton"));
        sizePolicy3.setHeightForWidth(payForOrderButton->sizePolicy().hasHeightForWidth());
        payForOrderButton->setSizePolicy(sizePolicy3);
        payForOrderButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_131->addWidget(payForOrderButton);


        horizontalLayout_8->addWidget(frame_8);

        tabWidget->addTab(payment, QString());

        verticalLayout_7->addWidget(tabWidget);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setMinimumSize(QSize(0, 150));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(46, 47, 48);"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backButton = new QPushButton(groupBox);
        backButton->setObjectName(QStringLiteral("backButton"));
        sizePolicy3.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy3);
        QPalette palette1;
        QBrush brush2(QColor(188, 188, 188, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        backButton->setPalette(palette1);
        backButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(backButton);

        drinkButton = new QPushButton(groupBox);
        drinkButton->setObjectName(QStringLiteral("drinkButton"));
        sizePolicy3.setHeightForWidth(drinkButton->sizePolicy().hasHeightForWidth());
        drinkButton->setSizePolicy(sizePolicy3);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        drinkButton->setPalette(palette2);
        drinkButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(drinkButton);

        ticketButton = new QPushButton(groupBox);
        ticketButton->setObjectName(QStringLiteral("ticketButton"));
        sizePolicy3.setHeightForWidth(ticketButton->sizePolicy().hasHeightForWidth());
        ticketButton->setSizePolicy(sizePolicy3);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        ticketButton->setPalette(palette3);
        ticketButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(ticketButton);

        gameButton = new QPushButton(groupBox);
        gameButton->setObjectName(QStringLiteral("gameButton"));
        sizePolicy3.setHeightForWidth(gameButton->sizePolicy().hasHeightForWidth());
        gameButton->setSizePolicy(sizePolicy3);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        gameButton->setPalette(palette4);
        gameButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(gameButton);

        assistButton = new QPushButton(groupBox);
        assistButton->setObjectName(QStringLiteral("assistButton"));
        sizePolicy3.setHeightForWidth(assistButton->sizePolicy().hasHeightForWidth());
        assistButton->setSizePolicy(sizePolicy3);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        assistButton->setPalette(palette5);
        assistButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(assistButton);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy3.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy3);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        helpButton->setPalette(palette6);
        helpButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(helpButton);


        verticalLayout_7->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        spaceLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        startOrderButton->setText(QApplication::translate("MainWindow", "Place Order", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Employee Login", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("MainWindow", "Home", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#c6c6c6;\">Category</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        appButton->setText(QApplication::translate("MainWindow", "Appetizers", nullptr));
        desButton->setText(QApplication::translate("MainWindow", "Desserts", nullptr));
        entButton->setText(QApplication::translate("MainWindow", "Entrees", nullptr));
        appIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        driButton->setText(QApplication::translate("MainWindow", "Drinks", nullptr));
        sidButton->setText(QApplication::translate("MainWindow", "Sides", nullptr));
        driIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        desIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        sidIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        entIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        kidIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        kidButton->setText(QApplication::translate("MainWindow", "Kids' Menu", nullptr));
        groupBox_6->setTitle(QString());
        orderNumLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#c6c6c6;\">Order #</span></p></body></html>", nullptr));
        orderRemoveButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        placeOrderButton->setText(QApplication::translate("MainWindow", "Next Order", nullptr));
        orderTotalLabel->setText(QApplication::translate("MainWindow", "Total:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(orderTab_7), QApplication::translate("MainWindow", "Order", nullptr));
        drink1_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        drink2_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        drink3_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        drink4_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        drink5_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_3->setTitle(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(refillsTab), QApplication::translate("MainWindow", "Refills", nullptr));
        menu1_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu2_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu3_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu4_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu5_pic->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu1_text->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu2_text->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu3_text->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu4_text->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu5_text->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        addButton1->setText(QApplication::translate("MainWindow", "ADD", nullptr));
        addButton2->setText(QApplication::translate("MainWindow", "ADD", nullptr));
        addButton3->setText(QApplication::translate("MainWindow", "ADD", nullptr));
        addButton4->setText(QApplication::translate("MainWindow", "ADD", nullptr));
        addButton5->setText(QApplication::translate("MainWindow", "ADD", nullptr));
        groupBox_5->setTitle(QString());
        orderNumLabel_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#c6c6c6;\">Order #</span></p></body></html>", nullptr));
        menuTotalLabel->setText(QApplication::translate("MainWindow", "Total: ", nullptr));
        menuRemoveButton->setText(QApplication::translate("MainWindow", "Remove From Order", nullptr));
        menuBackButton->setText(QApplication::translate("MainWindow", "Back to Menu", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(menuTab), QApplication::translate("MainWindow", "Menu", nullptr));
        groupBox_4->setTitle(QString());
        oneButton->setText(QApplication::translate("MainWindow", "1", nullptr));
        fourButton->setText(QApplication::translate("MainWindow", "4", nullptr));
        twoButton->setText(QApplication::translate("MainWindow", "2", nullptr));
        sevenButton->setText(QApplication::translate("MainWindow", "7", nullptr));
        nineButton->setText(QApplication::translate("MainWindow", "9", nullptr));
        sixButton->setText(QApplication::translate("MainWindow", "6", nullptr));
        fiveButton->setText(QApplication::translate("MainWindow", "5", nullptr));
        eightButton->setText(QApplication::translate("MainWindow", "8", nullptr));
        threeButton->setText(QApplication::translate("MainWindow", "3", nullptr));
        zeroButton->setText(QApplication::translate("MainWindow", "0", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "CLEAR", nullptr));
        enterButton->setText(QApplication::translate("MainWindow", "ENTER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(loginTab), QApplication::translate("MainWindow", "Login", nullptr));
        waitstaffWelcomeLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(waitstaffTab), QApplication::translate("MainWindow", "Waitstaff", nullptr));
        kitchenWelcomeLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(kitchenTab), QApplication::translate("MainWindow", "Kitchen", nullptr));
        managerWelcomeLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(managerTab), QApplication::translate("MainWindow", "Manager", nullptr));
        groupBox_8->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#eeeeec;\">Name</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#eeeeec;\">Allergies</span></p></body></html>", nullptr));
        addToTableButton->setText(QApplication::translate("MainWindow", "Add to Table", nullptr));
        groupBox_7->setTitle(QString());

        const bool __sortingEnabled = tableList->isSortingEnabled();
        tableList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = tableList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Customers", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = tableList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "================================", nullptr));
        tableList->setSortingEnabled(__sortingEnabled);

        beginOrderButton->setText(QApplication::translate("MainWindow", "Begin Order", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Table), QApplication::translate("MainWindow", "Table", nullptr));
        totalRemainingLabel->setText(QApplication::translate("MainWindow", "Total Remaining:", nullptr));
        addToPaymentButton->setText(QApplication::translate("MainWindow", "Add to Payment\n"
"-------->", nullptr));
        removeFromPaymentButton->setText(QApplication::translate("MainWindow", "Remove From Payment\n"
"<--------", nullptr));
        totalToPayLabel->setText(QApplication::translate("MainWindow", "Total:", nullptr));
        payForOrderButton->setText(QApplication::translate("MainWindow", "Pay and Place Order", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(payment), QApplication::translate("MainWindow", "Payment", nullptr));
        backButton->setText(QApplication::translate("MainWindow", "Back", nullptr));
        drinkButton->setText(QApplication::translate("MainWindow", "Refills", nullptr));
        ticketButton->setText(QApplication::translate("MainWindow", "My Ticket", nullptr));
        gameButton->setText(QApplication::translate("MainWindow", "Games", nullptr));
        assistButton->setText(QApplication::translate("MainWindow", "Request Assistance", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
