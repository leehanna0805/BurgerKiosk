/********************************************************************************
** Form generated from reading UI file 'chef_burger.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEF_BURGER_H
#define UI_CHEF_BURGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chef_burger
{
public:
    QWidget *centralwidget;
    QPushButton *cancelButton;
    QPushButton *backButton;
    QListWidget *receipt;
    QPushButton *creditButton;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_10;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QWidget *tab_4;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *tab_5;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chef_burger)
    {
        if (chef_burger->objectName().isEmpty())
            chef_burger->setObjectName(QString::fromUtf8("chef_burger"));
        chef_burger->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        chef_burger->setFont(font);
        centralwidget = new QWidget(chef_burger);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        cancelButton = new QPushButton(centralwidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(680, 480, 111, 71));
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(550, 20, 241, 41));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 232, 254);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        receipt = new QListWidget(centralwidget);
        receipt->setObjectName(QString::fromUtf8("receipt"));
        receipt->setGeometry(QRect(550, 70, 241, 401));
        receipt->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        creditButton = new QPushButton(centralwidget);
        creditButton->setObjectName(QString::fromUtf8("creditButton"));
        creditButton->setGeometry(QRect(550, 480, 121, 71));
        creditButton->setFont(font);
        creditButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 511, 531));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tab_1->setAutoFillBackground(false);
        pushButton = new QPushButton(tab_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 121, 121));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/brioche_bun.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}"));
        pushButton_2 = new QPushButton(tab_1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 30, 121, 121));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/potato_bun.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}"));
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 160, 121, 31));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 160, 121, 31));
        label_2->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 30, 101, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/patty_beef.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 30, 91, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/patty_chicken.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 30, 101, 101));
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/patty_shrimp.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 10, 111, 121));
        pushButton_6->setStyleSheet(QString::fromUtf8("#pushButton_6{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/patty_bulgoggi.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 140, 101, 21));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 140, 111, 21));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 140, 101, 21));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 140, 111, 21));
        label_6->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 30, 101, 91));
        pushButton_7->setStyleSheet(QString::fromUtf8("#pushButton_7{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/ve_lettuce.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(140, 30, 101, 91));
        pushButton_8->setStyleSheet(QString::fromUtf8("#pushButton_8{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/ve_onion.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 30, 101, 91));
        pushButton_9->setStyleSheet(QString::fromUtf8("#pushButton_9{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/ve_pickle.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 130, 101, 16));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(140, 130, 101, 20));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 130, 101, 20));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(380, 130, 101, 21));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(380, 30, 101, 91));
        pushButton_10->setStyleSheet(QString::fromUtf8("#pushButton_10{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/ve_tomato.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_17 = new QPushButton(tab_3);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(20, 160, 101, 91));
        pushButton_17->setStyleSheet(QString::fromUtf8("#pushButton_17{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/cucumber.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_18 = new QPushButton(tab_3);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(140, 160, 101, 91));
        pushButton_18->setStyleSheet(QString::fromUtf8("#pushButton_18{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/slicecheese.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_19 = new QPushButton(tab_3);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(260, 160, 101, 91));
        pushButton_19->setStyleSheet(QString::fromUtf8("#pushButton_19{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/bacon.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 260, 101, 21));
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(140, 260, 101, 21));
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(260, 260, 101, 21));
        label_19->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButton_11 = new QPushButton(tab_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(20, 30, 101, 91));
        pushButton_11->setStyleSheet(QString::fromUtf8("#pushButton_11{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/sause_barbeque.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_12 = new QPushButton(tab_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(140, 30, 101, 91));
        pushButton_12->setStyleSheet(QString::fromUtf8("#pushButton_12{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/sause_mayo.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(260, 30, 101, 91));
        pushButton_13->setStyleSheet(QString::fromUtf8("#pushButton_13{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/sause_cheese.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_14 = new QPushButton(tab_4);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(380, 30, 101, 91));
        pushButton_14->setStyleSheet(QString::fromUtf8("#pushButton_14{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/sause_salsa.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 130, 101, 21));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(140, 130, 101, 21));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(260, 130, 101, 21));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(380, 130, 101, 21));
        label_14->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        pushButton_15 = new QPushButton(tab_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(20, 180, 101, 91));
        pushButton_15->setStyleSheet(QString::fromUtf8("#pushButton_15{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/cock.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_16 = new QPushButton(tab_5);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(140, 180, 111, 91));
        pushButton_16->setStyleSheet(QString::fromUtf8("#pushButton_16{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/sprite.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 280, 101, 21));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(140, 280, 111, 21));
        label_16->setAlignment(Qt::AlignCenter);
        pushButton_20 = new QPushButton(tab_5);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(20, 30, 101, 91));
        pushButton_20->setStyleSheet(QString::fromUtf8("#pushButton_20{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/frenchFries.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_21 = new QPushButton(tab_5);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(140, 30, 101, 91));
        pushButton_21->setStyleSheet(QString::fromUtf8("#pushButton_21{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/cheeseStick.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        pushButton_22 = new QPushButton(tab_5);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(260, 30, 101, 91));
        pushButton_22->setStyleSheet(QString::fromUtf8("#pushButton_22{\n"
"background-color:transparent;\n"
"border-image: url(:/resources/image/chickenNugget.jpg);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
""));
        label_20 = new QLabel(tab_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 130, 101, 21));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(tab_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(140, 130, 101, 21));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(tab_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(260, 130, 101, 21));
        label_22->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_5, QString());
        chef_burger->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chef_burger);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        chef_burger->setMenuBar(menubar);
        statusbar = new QStatusBar(chef_burger);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chef_burger->setStatusBar(statusbar);

        retranslateUi(chef_burger);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(chef_burger);
    } // setupUi

    void retranslateUi(QMainWindow *chef_burger)
    {
        chef_burger->setWindowTitle(QApplication::translate("chef_burger", "MainWindow", nullptr));
        cancelButton->setText(QApplication::translate("chef_burger", "\354\267\250\354\206\214\355\225\230\352\270\260", nullptr));
        backButton->setText(QApplication::translate("chef_burger", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        creditButton->setText(QApplication::translate("chef_burger", "\352\262\260\354\240\234\355\225\230\352\270\260", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QApplication::translate("chef_burger", "\353\270\214\353\246\254\354\230\244\354\211\254\353\262\210", nullptr));
        label_2->setText(QApplication::translate("chef_burger", "\355\217\254\355\205\214\354\235\264\355\206\240\353\262\210", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("chef_burger", "bread", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label_3->setText(QApplication::translate("chef_burger", "\354\206\214\352\263\240\352\270\260", nullptr));
        label_4->setText(QApplication::translate("chef_burger", "\354\271\230\355\202\250", nullptr));
        label_5->setText(QApplication::translate("chef_burger", "\354\203\210\354\232\260", nullptr));
        label_6->setText(QApplication::translate("chef_burger", "\353\266\210\352\263\240\352\270\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("chef_burger", "patty", nullptr));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_7->setText(QApplication::translate("chef_burger", "\354\226\221\354\203\201\354\266\224", nullptr));
        label_8->setText(QApplication::translate("chef_burger", "\354\226\221\355\214\214", nullptr));
        label_9->setText(QApplication::translate("chef_burger", "\355\224\274\355\201\264", nullptr));
        label_10->setText(QApplication::translate("chef_burger", "\355\206\240\353\247\210\355\206\240", nullptr));
        pushButton_10->setText(QString());
        pushButton_17->setText(QString());
        pushButton_18->setText(QString());
        pushButton_19->setText(QString());
        label_17->setText(QApplication::translate("chef_burger", "\354\230\244\354\235\264", nullptr));
        label_18->setText(QApplication::translate("chef_burger", "\354\271\230\354\246\210", nullptr));
        label_19->setText(QApplication::translate("chef_burger", "\353\262\240\354\235\264\354\273\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("chef_burger", "vegetable+", nullptr));
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        label_11->setText(QApplication::translate("chef_burger", "\353\260\224\353\262\240\355\201\220\354\206\214\354\212\244", nullptr));
        label_12->setText(QApplication::translate("chef_burger", "\353\247\210\354\232\224\353\204\244\354\246\210\354\206\214\354\212\244", nullptr));
        label_13->setText(QApplication::translate("chef_burger", "\354\271\230\354\246\210\354\206\214\354\212\244", nullptr));
        label_14->setText(QApplication::translate("chef_burger", "\354\202\264\354\202\254\354\206\214\354\212\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("chef_burger", "sauce", nullptr));
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        label_15->setText(QApplication::translate("chef_burger", "\354\275\234\353\235\274", nullptr));
        label_16->setText(QApplication::translate("chef_burger", "\354\202\254\354\235\264\353\213\244", nullptr));
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        label_20->setText(QApplication::translate("chef_burger", "\355\224\204\353\240\214\354\271\230\355\224\204\353\235\274\354\235\264", nullptr));
        label_21->setText(QApplication::translate("chef_burger", "\354\271\230\354\246\210\354\212\244\355\213\261", nullptr));
        label_22->setText(QApplication::translate("chef_burger", "\354\271\230\355\202\250\353\204\210\352\262\237", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("chef_burger", "side/drink", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chef_burger: public Ui_chef_burger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEF_BURGER_H
