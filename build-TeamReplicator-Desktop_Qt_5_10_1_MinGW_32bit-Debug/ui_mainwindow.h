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
    QPushButton *loginButton;
    QWidget *orderTab_7;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QPushButton *appButton;
    QPushButton *entButton;
    QPushButton *desButton;
    QPushButton *driButton;
    QLabel *appIcon;
    QPushButton *sidButton;
    QLabel *entIcon;
    QLabel *driIcon;
    QLabel *sidIcon;
    QLabel *desIcon;
    QLabel *label_6;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout;
    QLabel *orderNumLabel;
    QListWidget *orderList;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_9;
    QPushButton *placeOrderButton;
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
    QWidget *kitchenTab;
    QWidget *managerTab;
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
        MainWindow->resize(1968, 759);
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
        sizePolicy.setHeightForWidth(spaceLabel->sizePolicy().hasHeightForWidth());
        spaceLabel->setSizePolicy(sizePolicy);
        spaceLabel->setMinimumSize(QSize(1900, 0));

        verticalLayout_8->addWidget(spaceLabel);

        loginButton = new QPushButton(homeTab);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);
        loginButton->setMinimumSize(QSize(0, 50));
        loginButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_8->addWidget(loginButton, 0, Qt::AlignRight);

        tabWidget->addTab(homeTab, QString());
        orderTab_7 = new QWidget();
        orderTab_7->setObjectName(QStringLiteral("orderTab_7"));
        gridLayout_7 = new QGridLayout(orderTab_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
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
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(appButton->sizePolicy().hasHeightForWidth());
        appButton->setSizePolicy(sizePolicy2);
        appButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(appButton, 0, 1, 1, 1);

        entButton = new QPushButton(groupBox_2);
        entButton->setObjectName(QStringLiteral("entButton"));
        sizePolicy2.setHeightForWidth(entButton->sizePolicy().hasHeightForWidth());
        entButton->setSizePolicy(sizePolicy2);
        entButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(entButton, 1, 1, 1, 1);

        desButton = new QPushButton(groupBox_2);
        desButton->setObjectName(QStringLiteral("desButton"));
        sizePolicy2.setHeightForWidth(desButton->sizePolicy().hasHeightForWidth());
        desButton->setSizePolicy(sizePolicy2);
        desButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(desButton, 3, 1, 1, 1);

        driButton = new QPushButton(groupBox_2);
        driButton->setObjectName(QStringLiteral("driButton"));
        sizePolicy2.setHeightForWidth(driButton->sizePolicy().hasHeightForWidth());
        driButton->setSizePolicy(sizePolicy2);
        driButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(driButton, 2, 1, 1, 1);

        appIcon = new QLabel(groupBox_2);
        appIcon->setObjectName(QStringLiteral("appIcon"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(appIcon->sizePolicy().hasHeightForWidth());
        appIcon->setSizePolicy(sizePolicy3);
        appIcon->setMinimumSize(QSize(100, 100));
        appIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(appIcon, 0, 0, 1, 1);

        sidButton = new QPushButton(groupBox_2);
        sidButton->setObjectName(QStringLiteral("sidButton"));
        sizePolicy2.setHeightForWidth(sidButton->sizePolicy().hasHeightForWidth());
        sidButton->setSizePolicy(sizePolicy2);
        sidButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(sidButton, 4, 1, 1, 1);

        entIcon = new QLabel(groupBox_2);
        entIcon->setObjectName(QStringLiteral("entIcon"));
        sizePolicy3.setHeightForWidth(entIcon->sizePolicy().hasHeightForWidth());
        entIcon->setSizePolicy(sizePolicy3);
        entIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(entIcon, 1, 0, 1, 1);

        driIcon = new QLabel(groupBox_2);
        driIcon->setObjectName(QStringLiteral("driIcon"));
        sizePolicy3.setHeightForWidth(driIcon->sizePolicy().hasHeightForWidth());
        driIcon->setSizePolicy(sizePolicy3);
        driIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(driIcon, 2, 0, 1, 1);

        sidIcon = new QLabel(groupBox_2);
        sidIcon->setObjectName(QStringLiteral("sidIcon"));
        sizePolicy3.setHeightForWidth(sidIcon->sizePolicy().hasHeightForWidth());
        sidIcon->setSizePolicy(sizePolicy3);
        sidIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(sidIcon, 4, 0, 1, 1);

        desIcon = new QLabel(groupBox_2);
        desIcon->setObjectName(QStringLiteral("desIcon"));
        sizePolicy3.setHeightForWidth(desIcon->sizePolicy().hasHeightForWidth());
        desIcon->setSizePolicy(sizePolicy3);
        desIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(desIcon, 3, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 2, 1);

        label_6 = new QLabel(orderTab_7);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 50));
        label_6->setStyleSheet(QStringLiteral("font: 57 20pt \"Counter-Strike\";"));

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(orderTab_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        orderNumLabel = new QLabel(groupBox_6);
        orderNumLabel->setObjectName(QStringLiteral("orderNumLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(orderNumLabel->sizePolicy().hasHeightForWidth());
        orderNumLabel->setSizePolicy(sizePolicy4);
        orderNumLabel->setStyleSheet(QLatin1String("font: 57 20pt \"Counter-Strike\";\n"
"color: rgb(198, 198, 198);"));

        gridLayout->addWidget(orderNumLabel, 0, 0, 1, 1, Qt::AlignTop);

        orderList = new QListWidget(groupBox_6);
        orderList->setObjectName(QStringLiteral("orderList"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(orderList->sizePolicy().hasHeightForWidth());
        orderList->setSizePolicy(sizePolicy5);

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
        pushButton_9 = new QPushButton(frame_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_5->addWidget(pushButton_9);

        placeOrderButton = new QPushButton(frame_5);
        placeOrderButton->setObjectName(QStringLiteral("placeOrderButton"));
        sizePolicy2.setHeightForWidth(placeOrderButton->sizePolicy().hasHeightForWidth());
        placeOrderButton->setSizePolicy(sizePolicy2);
        placeOrderButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_5->addWidget(placeOrderButton);


        gridLayout->addWidget(frame_5, 2, 0, 1, 1);


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
        drink1_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink1_pic);

        drink2_pic = new QLabel(refillsTab);
        drink2_pic->setObjectName(QStringLiteral("drink2_pic"));
        drink2_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink2_pic);

        drink3_pic = new QLabel(refillsTab);
        drink3_pic->setObjectName(QStringLiteral("drink3_pic"));
        drink3_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink3_pic);

        drink4_pic = new QLabel(refillsTab);
        drink4_pic->setObjectName(QStringLiteral("drink4_pic"));
        drink4_pic->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(drink4_pic);

        drink5_pic = new QLabel(refillsTab);
        drink5_pic->setObjectName(QStringLiteral("drink5_pic"));
        sizePolicy.setHeightForWidth(drink5_pic->sizePolicy().hasHeightForWidth());
        drink5_pic->setSizePolicy(sizePolicy);
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
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy6);

        verticalLayout_9->addWidget(listWidget_2);

        frame = new QFrame(groupBox_3);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy7);
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
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
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy8);
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
        sizePolicy3.setHeightForWidth(menu1_pic->sizePolicy().hasHeightForWidth());
        menu1_pic->setSizePolicy(sizePolicy3);
        menu1_pic->setMinimumSize(QSize(100, 100));
        menu1_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu1_pic);

        menu2_pic = new QLabel(frame_3);
        menu2_pic->setObjectName(QStringLiteral("menu2_pic"));
        sizePolicy3.setHeightForWidth(menu2_pic->sizePolicy().hasHeightForWidth());
        menu2_pic->setSizePolicy(sizePolicy3);
        menu2_pic->setMinimumSize(QSize(100, 100));
        menu2_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu2_pic);

        menu3_pic = new QLabel(frame_3);
        menu3_pic->setObjectName(QStringLiteral("menu3_pic"));
        sizePolicy3.setHeightForWidth(menu3_pic->sizePolicy().hasHeightForWidth());
        menu3_pic->setSizePolicy(sizePolicy3);
        menu3_pic->setMinimumSize(QSize(100, 100));
        menu3_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu3_pic);

        menu4_pic = new QLabel(frame_3);
        menu4_pic->setObjectName(QStringLiteral("menu4_pic"));
        sizePolicy3.setHeightForWidth(menu4_pic->sizePolicy().hasHeightForWidth());
        menu4_pic->setSizePolicy(sizePolicy3);
        menu4_pic->setMinimumSize(QSize(100, 100));
        menu4_pic->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(menu4_pic);

        menu5_pic = new QLabel(frame_3);
        menu5_pic->setObjectName(QStringLiteral("menu5_pic"));
        sizePolicy3.setHeightForWidth(menu5_pic->sizePolicy().hasHeightForWidth());
        menu5_pic->setSizePolicy(sizePolicy3);
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
        sizePolicy4.setHeightForWidth(menu1_text->sizePolicy().hasHeightForWidth());
        menu1_text->setSizePolicy(sizePolicy4);
        menu1_text->setMinimumSize(QSize(0, 100));
        menu1_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu1_text->setFrameShape(QFrame::Box);
        menu1_text->setFrameShadow(QFrame::Raised);
        menu1_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu1_text);

        menu2_text = new QLabel(frame_2);
        menu2_text->setObjectName(QStringLiteral("menu2_text"));
        sizePolicy4.setHeightForWidth(menu2_text->sizePolicy().hasHeightForWidth());
        menu2_text->setSizePolicy(sizePolicy4);
        menu2_text->setMinimumSize(QSize(0, 100));
        menu2_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu2_text->setFrameShape(QFrame::Box);
        menu2_text->setFrameShadow(QFrame::Raised);
        menu2_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu2_text);

        menu3_text = new QLabel(frame_2);
        menu3_text->setObjectName(QStringLiteral("menu3_text"));
        sizePolicy4.setHeightForWidth(menu3_text->sizePolicy().hasHeightForWidth());
        menu3_text->setSizePolicy(sizePolicy4);
        menu3_text->setMinimumSize(QSize(0, 100));
        menu3_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu3_text->setFrameShape(QFrame::Box);
        menu3_text->setFrameShadow(QFrame::Raised);
        menu3_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu3_text);

        menu4_text = new QLabel(frame_2);
        menu4_text->setObjectName(QStringLiteral("menu4_text"));
        sizePolicy4.setHeightForWidth(menu4_text->sizePolicy().hasHeightForWidth());
        menu4_text->setSizePolicy(sizePolicy4);
        menu4_text->setMinimumSize(QSize(0, 100));
        menu4_text->setStyleSheet(QLatin1String("font: 57 14pt \"Counter-Strike\";\n"
"color: rgb(208, 208, 208);"));
        menu4_text->setFrameShape(QFrame::Box);
        menu4_text->setFrameShadow(QFrame::Raised);
        menu4_text->setWordWrap(true);

        verticalLayout_3->addWidget(menu4_text);

        menu5_text = new QLabel(frame_2);
        menu5_text->setObjectName(QStringLiteral("menu5_text"));
        sizePolicy4.setHeightForWidth(menu5_text->sizePolicy().hasHeightForWidth());
        menu5_text->setSizePolicy(sizePolicy4);
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
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(addButton1->sizePolicy().hasHeightForWidth());
        addButton1->setSizePolicy(sizePolicy9);
        addButton1->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton1);

        addButton2 = new QPushButton(frame_4);
        addButton2->setObjectName(QStringLiteral("addButton2"));
        sizePolicy9.setHeightForWidth(addButton2->sizePolicy().hasHeightForWidth());
        addButton2->setSizePolicy(sizePolicy9);
        addButton2->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton2);

        addButton3 = new QPushButton(frame_4);
        addButton3->setObjectName(QStringLiteral("addButton3"));
        sizePolicy9.setHeightForWidth(addButton3->sizePolicy().hasHeightForWidth());
        addButton3->setSizePolicy(sizePolicy9);
        addButton3->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton3);

        addButton4 = new QPushButton(frame_4);
        addButton4->setObjectName(QStringLiteral("addButton4"));
        sizePolicy9.setHeightForWidth(addButton4->sizePolicy().hasHeightForWidth());
        addButton4->setSizePolicy(sizePolicy9);
        addButton4->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        verticalLayout_4->addWidget(addButton4);

        addButton5 = new QPushButton(frame_4);
        addButton5->setObjectName(QStringLiteral("addButton5"));
        sizePolicy9.setHeightForWidth(addButton5->sizePolicy().hasHeightForWidth());
        addButton5->setSizePolicy(sizePolicy9);
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
        sizePolicy4.setHeightForWidth(orderNumLabel_2->sizePolicy().hasHeightForWidth());
        orderNumLabel_2->setSizePolicy(sizePolicy4);
        orderNumLabel_2->setStyleSheet(QStringLiteral("font: 57 20pt \"Counter-Strike\";"));

        verticalLayout_2->addWidget(orderNumLabel_2);

        menuList = new QListWidget(groupBox_5);
        menuList->setObjectName(QStringLiteral("menuList"));
        sizePolicy7.setHeightForWidth(menuList->sizePolicy().hasHeightForWidth());
        menuList->setSizePolicy(sizePolicy7);

        verticalLayout_2->addWidget(menuList);

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
        sizePolicy2.setHeightForWidth(menuRemoveButton->sizePolicy().hasHeightForWidth());
        menuRemoveButton->setSizePolicy(sizePolicy2);
        menuRemoveButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_6->addWidget(menuRemoveButton);

        menuBackButton = new QPushButton(frame_6);
        menuBackButton->setObjectName(QStringLiteral("menuBackButton"));
        sizePolicy2.setHeightForWidth(menuBackButton->sizePolicy().hasHeightForWidth());
        menuBackButton->setSizePolicy(sizePolicy2);
        menuBackButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_6->addWidget(menuBackButton);


        verticalLayout_2->addWidget(frame_6);


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
        sizePolicy4.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy4);
        groupBox_4->setMaximumSize(QSize(350, 500));
        oneButton = new QPushButton(groupBox_4);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(30, 190, 80, 51));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy10);
        oneButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        fourButton = new QPushButton(groupBox_4);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(30, 260, 80, 51));
        sizePolicy10.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy10);
        fourButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        twoButton = new QPushButton(groupBox_4);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(140, 190, 80, 51));
        sizePolicy10.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy10);
        twoButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        sevenButton = new QPushButton(groupBox_4);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setGeometry(QRect(30, 330, 80, 51));
        sizePolicy10.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy10);
        sevenButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        nineButton = new QPushButton(groupBox_4);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setGeometry(QRect(250, 330, 80, 51));
        sizePolicy10.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy10);
        nineButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        sixButton = new QPushButton(groupBox_4);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setGeometry(QRect(250, 260, 80, 51));
        sizePolicy10.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy10);
        sixButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        fiveButton = new QPushButton(groupBox_4);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(140, 260, 80, 51));
        sizePolicy10.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy10);
        fiveButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        eightButton = new QPushButton(groupBox_4);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setGeometry(QRect(140, 330, 80, 51));
        sizePolicy10.setHeightForWidth(eightButton->sizePolicy().hasHeightForWidth());
        eightButton->setSizePolicy(sizePolicy10);
        eightButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        threeButton = new QPushButton(groupBox_4);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(250, 190, 80, 51));
        sizePolicy10.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy10);
        threeButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        zeroButton = new QPushButton(groupBox_4);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setGeometry(QRect(140, 400, 80, 51));
        sizePolicy10.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy10);
        zeroButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        clearButton = new QPushButton(groupBox_4);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(30, 400, 80, 51));
        sizePolicy10.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy10);
        clearButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 16pt \"Counter-Strike\";"));
        enterButton = new QPushButton(groupBox_4);
        enterButton->setObjectName(QStringLiteral("enterButton"));
        enterButton->setGeometry(QRect(250, 400, 80, 51));
        sizePolicy10.setHeightForWidth(enterButton->sizePolicy().hasHeightForWidth());
        enterButton->setSizePolicy(sizePolicy10);
        enterButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 16pt \"Counter-Strike\";"));
        passwordBox = new QTextBrowser(groupBox_4);
        passwordBox->setObjectName(QStringLiteral("passwordBox"));
        passwordBox->setGeometry(QRect(25, 40, 311, 131));
        QPalette palette;
        QBrush brush(QColor(197, 197, 197, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(46, 47, 48, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(193, 193, 193, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        passwordBox->setPalette(palette);
        passwordBox->setStyleSheet(QStringLiteral(""));
        passwordBox->setFrameShape(QFrame::Box);
        passwordBox->setFrameShadow(QFrame::Plain);
        passwordBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        passwordBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        passwordBox->setProperty("test", QVariant(0));

        gridLayout_10->addWidget(groupBox_4, 0, 0, 1, 1);

        tabWidget->addTab(loginTab, QString());
        waitstaffTab = new QWidget();
        waitstaffTab->setObjectName(QStringLiteral("waitstaffTab"));
        tabWidget->addTab(waitstaffTab, QString());
        kitchenTab = new QWidget();
        kitchenTab->setObjectName(QStringLiteral("kitchenTab"));
        tabWidget->addTab(kitchenTab, QString());
        managerTab = new QWidget();
        managerTab->setObjectName(QStringLiteral("managerTab"));
        tabWidget->addTab(managerTab, QString());

        verticalLayout_7->addWidget(tabWidget);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 150));
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(46, 47, 48);"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backButton = new QPushButton(groupBox);
        backButton->setObjectName(QStringLiteral("backButton"));
        sizePolicy2.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy2);
        QPalette palette1;
        QBrush brush3(QColor(188, 188, 188, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        backButton->setPalette(palette1);
        backButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(backButton);

        drinkButton = new QPushButton(groupBox);
        drinkButton->setObjectName(QStringLiteral("drinkButton"));
        sizePolicy2.setHeightForWidth(drinkButton->sizePolicy().hasHeightForWidth());
        drinkButton->setSizePolicy(sizePolicy2);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        drinkButton->setPalette(palette2);
        drinkButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(drinkButton);

        ticketButton = new QPushButton(groupBox);
        ticketButton->setObjectName(QStringLiteral("ticketButton"));
        sizePolicy2.setHeightForWidth(ticketButton->sizePolicy().hasHeightForWidth());
        ticketButton->setSizePolicy(sizePolicy2);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        ticketButton->setPalette(palette3);
        ticketButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(ticketButton);

        gameButton = new QPushButton(groupBox);
        gameButton->setObjectName(QStringLiteral("gameButton"));
        sizePolicy2.setHeightForWidth(gameButton->sizePolicy().hasHeightForWidth());
        gameButton->setSizePolicy(sizePolicy2);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        gameButton->setPalette(palette4);
        gameButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(gameButton);

        assistButton = new QPushButton(groupBox);
        assistButton->setObjectName(QStringLiteral("assistButton"));
        sizePolicy2.setHeightForWidth(assistButton->sizePolicy().hasHeightForWidth());
        assistButton->setSizePolicy(sizePolicy2);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        assistButton->setPalette(palette5);
        assistButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(assistButton);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy2.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy2);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush3);
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

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        spaceLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        loginButton->setText(QApplication::translate("MainWindow", "Employee Login", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("MainWindow", "Home", nullptr));
        groupBox_2->setTitle(QString());
        appButton->setText(QApplication::translate("MainWindow", "Appetizers", nullptr));
        entButton->setText(QApplication::translate("MainWindow", "Entrees", nullptr));
        desButton->setText(QApplication::translate("MainWindow", "Desserts", nullptr));
        driButton->setText(QApplication::translate("MainWindow", "Drinks", nullptr));
        appIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        sidButton->setText(QApplication::translate("MainWindow", "Sides", nullptr));
        entIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        driIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        sidIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        desIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#c6c6c6;\">Category</span></p></body></html>", nullptr));
        groupBox_6->setTitle(QString());
        orderNumLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#c6c6c6;\">Order #</span></p></body></html>", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        placeOrderButton->setText(QApplication::translate("MainWindow", "Place Order", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(waitstaffTab), QApplication::translate("MainWindow", "Waitstaff", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(kitchenTab), QApplication::translate("MainWindow", "Kitchen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(managerTab), QApplication::translate("MainWindow", "Manager", nullptr));
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
