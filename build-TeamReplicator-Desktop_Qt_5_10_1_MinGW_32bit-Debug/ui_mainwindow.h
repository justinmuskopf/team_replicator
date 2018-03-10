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
    QWidget *orderTab_7;
    QGridLayout *gridLayout_7;
    QLabel *orderNumLabel;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QPushButton *entButton;
    QPushButton *driButton;
    QPushButton *appButton;
    QPushButton *desButton;
    QPushButton *sidButton;
    QLabel *appIcon;
    QLabel *entIcon;
    QLabel *driIcon;
    QLabel *desIcon;
    QLabel *sidIcon;
    QListWidget *listWidget;
    QWidget *refillsTab;
    QGridLayout *gridLayout_9;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listWidget_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *menuTab;
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

        tabWidget->addTab(homeTab, QString());
        orderTab_7 = new QWidget();
        orderTab_7->setObjectName(QStringLiteral("orderTab_7"));
        gridLayout_7 = new QGridLayout(orderTab_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        orderNumLabel = new QLabel(orderTab_7);
        orderNumLabel->setObjectName(QStringLiteral("orderNumLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(orderNumLabel->sizePolicy().hasHeightForWidth());
        orderNumLabel->setSizePolicy(sizePolicy1);
        orderNumLabel->setStyleSheet(QStringLiteral("font: 57 20pt \"Counter-Strike\";"));

        gridLayout_7->addWidget(orderNumLabel, 1, 5, 1, 1);

        label_6 = new QLabel(orderTab_7);
        label_6->setObjectName(QStringLiteral("label_6"));
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
        entButton = new QPushButton(groupBox_2);
        entButton->setObjectName(QStringLiteral("entButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(entButton->sizePolicy().hasHeightForWidth());
        entButton->setSizePolicy(sizePolicy2);
        entButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(entButton, 1, 1, 1, 1);

        driButton = new QPushButton(groupBox_2);
        driButton->setObjectName(QStringLiteral("driButton"));
        sizePolicy2.setHeightForWidth(driButton->sizePolicy().hasHeightForWidth());
        driButton->setSizePolicy(sizePolicy2);
        driButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(driButton, 2, 1, 1, 1);

        appButton = new QPushButton(groupBox_2);
        appButton->setObjectName(QStringLiteral("appButton"));
        sizePolicy2.setHeightForWidth(appButton->sizePolicy().hasHeightForWidth());
        appButton->setSizePolicy(sizePolicy2);
        appButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(appButton, 0, 1, 1, 1);

        desButton = new QPushButton(groupBox_2);
        desButton->setObjectName(QStringLiteral("desButton"));
        sizePolicy2.setHeightForWidth(desButton->sizePolicy().hasHeightForWidth());
        desButton->setSizePolicy(sizePolicy2);
        desButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(desButton, 3, 1, 1, 1);

        sidButton = new QPushButton(groupBox_2);
        sidButton->setObjectName(QStringLiteral("sidButton"));
        sizePolicy2.setHeightForWidth(sidButton->sizePolicy().hasHeightForWidth());
        sidButton->setSizePolicy(sizePolicy2);
        sidButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));

        gridLayout_8->addWidget(sidButton, 4, 1, 1, 1);

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

        desIcon = new QLabel(groupBox_2);
        desIcon->setObjectName(QStringLiteral("desIcon"));
        sizePolicy3.setHeightForWidth(desIcon->sizePolicy().hasHeightForWidth());
        desIcon->setSizePolicy(sizePolicy3);
        desIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(desIcon, 3, 0, 1, 1);

        sidIcon = new QLabel(groupBox_2);
        sidIcon->setObjectName(QStringLiteral("sidIcon"));
        sizePolicy3.setHeightForWidth(sidIcon->sizePolicy().hasHeightForWidth());
        sidIcon->setSizePolicy(sizePolicy3);
        sidIcon->setMaximumSize(QSize(100, 100));

        gridLayout_8->addWidget(sidIcon, 4, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 2, 1);

        listWidget = new QListWidget(orderTab_7);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy4);

        gridLayout_7->addWidget(listWidget, 2, 5, 1, 1);

        tabWidget->addTab(orderTab_7, QString());
        refillsTab = new QWidget();
        refillsTab->setObjectName(QStringLiteral("refillsTab"));
        gridLayout_9 = new QGridLayout(refillsTab);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_5 = new QLabel(refillsTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(150, 150));

        gridLayout_9->addWidget(label_5, 0, 0, 1, 1);

        label = new QLabel(refillsTab);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(150, 150));
        label->setFrameShape(QFrame::NoFrame);

        gridLayout_9->addWidget(label, 0, 4, 1, 1);

        label_2 = new QLabel(refillsTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(150, 150));

        gridLayout_9->addWidget(label_2, 0, 3, 1, 1);

        label_4 = new QLabel(refillsTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(150, 150));

        gridLayout_9->addWidget(label_4, 0, 1, 1, 1);

        label_3 = new QLabel(refillsTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(150, 150));

        gridLayout_9->addWidget(label_3, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(refillsTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(500, 16777215));
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        listWidget_2 = new QListWidget(groupBox_3);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy5);

        verticalLayout_9->addWidget(listWidget_2);

        frame = new QFrame(groupBox_3);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy6);
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


        gridLayout_9->addWidget(groupBox_3, 0, 5, 1, 1);

        tabWidget->addTab(refillsTab, QString());
        menuTab = new QWidget();
        menuTab->setObjectName(QStringLiteral("menuTab"));
        tabWidget->addTab(menuTab, QString());
        loginTab = new QWidget();
        loginTab->setObjectName(QStringLiteral("loginTab"));
        gridLayout_10 = new QGridLayout(loginTab);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        groupBox_4 = new QGroupBox(loginTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setMaximumSize(QSize(350, 500));
        oneButton = new QPushButton(groupBox_4);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(30, 190, 80, 51));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy7);
        oneButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        fourButton = new QPushButton(groupBox_4);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(30, 260, 80, 51));
        sizePolicy7.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy7);
        fourButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        twoButton = new QPushButton(groupBox_4);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(140, 190, 80, 51));
        sizePolicy7.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy7);
        twoButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        sevenButton = new QPushButton(groupBox_4);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setGeometry(QRect(30, 330, 80, 51));
        sizePolicy7.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy7);
        sevenButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        nineButton = new QPushButton(groupBox_4);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setGeometry(QRect(250, 330, 80, 51));
        sizePolicy7.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy7);
        nineButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        sixButton = new QPushButton(groupBox_4);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setGeometry(QRect(250, 260, 80, 51));
        sizePolicy7.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy7);
        sixButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        fiveButton = new QPushButton(groupBox_4);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(140, 260, 80, 51));
        sizePolicy7.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy7);
        fiveButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        eightButton = new QPushButton(groupBox_4);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setGeometry(QRect(140, 330, 80, 51));
        sizePolicy7.setHeightForWidth(eightButton->sizePolicy().hasHeightForWidth());
        eightButton->setSizePolicy(sizePolicy7);
        eightButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        threeButton = new QPushButton(groupBox_4);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(250, 190, 80, 51));
        sizePolicy7.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy7);
        threeButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        zeroButton = new QPushButton(groupBox_4);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setGeometry(QRect(140, 400, 80, 51));
        sizePolicy7.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy7);
        zeroButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 24pt \"Counter-Strike\";"));
        clearButton = new QPushButton(groupBox_4);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(30, 400, 80, 51));
        sizePolicy7.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy7);
        clearButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 16pt \"Counter-Strike\";"));
        enterButton = new QPushButton(groupBox_4);
        enterButton->setObjectName(QStringLiteral("enterButton"));
        enterButton->setGeometry(QRect(250, 400, 80, 51));
        sizePolicy7.setHeightForWidth(enterButton->sizePolicy().hasHeightForWidth());
        enterButton->setSizePolicy(sizePolicy7);
        enterButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 16pt \"Counter-Strike\";"));
        passwordBox = new QTextBrowser(groupBox_4);
        passwordBox->setObjectName(QStringLiteral("passwordBox"));
        passwordBox->setGeometry(QRect(25, 40, 311, 131));
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
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy8);
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
        backButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(backButton);

        drinkButton = new QPushButton(groupBox);
        drinkButton->setObjectName(QStringLiteral("drinkButton"));
        sizePolicy2.setHeightForWidth(drinkButton->sizePolicy().hasHeightForWidth());
        drinkButton->setSizePolicy(sizePolicy2);
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
        drinkButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(drinkButton);

        ticketButton = new QPushButton(groupBox);
        ticketButton->setObjectName(QStringLiteral("ticketButton"));
        sizePolicy2.setHeightForWidth(ticketButton->sizePolicy().hasHeightForWidth());
        ticketButton->setSizePolicy(sizePolicy2);
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
        ticketButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(ticketButton);

        gameButton = new QPushButton(groupBox);
        gameButton->setObjectName(QStringLiteral("gameButton"));
        sizePolicy2.setHeightForWidth(gameButton->sizePolicy().hasHeightForWidth());
        gameButton->setSizePolicy(sizePolicy2);
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
        gameButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(gameButton);

        assistButton = new QPushButton(groupBox);
        assistButton->setObjectName(QStringLiteral("assistButton"));
        sizePolicy2.setHeightForWidth(assistButton->sizePolicy().hasHeightForWidth());
        assistButton->setSizePolicy(sizePolicy2);
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
        assistButton->setPalette(palette4);
        assistButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(assistButton);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy2.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy2);
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
        helpButton->setPalette(palette5);
        helpButton->setStyleSheet(QLatin1String("background-color: rgb(188, 188, 188);\n"
"font: 57 20pt \"Counter-Strike\";"));

        horizontalLayout_2->addWidget(helpButton);


        verticalLayout_7->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        spaceLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("MainWindow", "Home", nullptr));
        orderNumLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#c6c6c6;\">Order #</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#c6c6c6;\">Category</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        entButton->setText(QApplication::translate("MainWindow", "Entrees", nullptr));
        driButton->setText(QApplication::translate("MainWindow", "Drinks", nullptr));
        appButton->setText(QApplication::translate("MainWindow", "Appetizers", nullptr));
        desButton->setText(QApplication::translate("MainWindow", "Desserts", nullptr));
        sidButton->setText(QApplication::translate("MainWindow", "Sides", nullptr));
        appIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        entIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        driIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        desIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        sidIcon->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(orderTab_7), QApplication::translate("MainWindow", "Order", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_3->setTitle(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(refillsTab), QApplication::translate("MainWindow", "Refills", nullptr));
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
