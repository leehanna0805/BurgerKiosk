/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *centralwidget;
    QTableWidget *stock_show;
    QPushButton *admin_back;
    QPushButton *stock_change;
    QPushButton *stock_delete;
    QTableWidget *money_show;
    QPushButton *money_push;
    QPushButton *money_pop;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_ID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_NAME;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_PRICE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_PROFIT;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_STOCK;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *txt_SALES;
    QLabel *label_7;
    QTableWidget *chef_burger_sales;
    QTextEdit *profit;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        admin->setFont(font);
        centralwidget = new QWidget(admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setFont(font);
        stock_show = new QTableWidget(centralwidget);
        if (stock_show->columnCount() < 6)
            stock_show->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        stock_show->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        stock_show->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        stock_show->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        stock_show->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        stock_show->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        stock_show->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (stock_show->rowCount() < 14)
            stock_show->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(10, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(11, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(12, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        stock_show->setVerticalHeaderItem(13, __qtablewidgetitem19);
        stock_show->setObjectName(QString::fromUtf8("stock_show"));
        stock_show->setGeometry(QRect(20, 60, 531, 311));
        stock_show->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        admin_back = new QPushButton(centralwidget);
        admin_back->setObjectName(QString::fromUtf8("admin_back"));
        admin_back->setGeometry(QRect(560, 20, 221, 31));
        admin_back->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 232, 254);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        stock_change = new QPushButton(centralwidget);
        stock_change->setObjectName(QString::fromUtf8("stock_change"));
        stock_change->setGeometry(QRect(560, 470, 101, 31));
        stock_change->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        stock_delete = new QPushButton(centralwidget);
        stock_delete->setObjectName(QString::fromUtf8("stock_delete"));
        stock_delete->setGeometry(QRect(680, 470, 101, 31));
        stock_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        money_show = new QTableWidget(centralwidget);
        if (money_show->columnCount() < 6)
            money_show->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        money_show->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        money_show->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        money_show->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        money_show->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        money_show->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        money_show->setHorizontalHeaderItem(5, __qtablewidgetitem25);
        if (money_show->rowCount() < 1)
            money_show->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        money_show->setVerticalHeaderItem(0, __qtablewidgetitem26);
        money_show->setObjectName(QString::fromUtf8("money_show"));
        money_show->setGeometry(QRect(20, 470, 531, 101));
        money_show->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        money_push = new QPushButton(centralwidget);
        money_push->setObjectName(QString::fromUtf8("money_push"));
        money_push->setGeometry(QRect(560, 520, 101, 31));
        money_push->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        money_pop = new QPushButton(centralwidget);
        money_pop->setObjectName(QString::fromUtf8("money_pop"));
        money_pop->setGeometry(QRect(680, 520, 101, 31));
        money_pop->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(560, 60, 221, 321));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_ID = new QLineEdit(layoutWidget);
        txt_ID->setObjectName(QString::fromUtf8("txt_ID"));
        txt_ID->setEnabled(true);

        horizontalLayout->addWidget(txt_ID);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_NAME = new QLineEdit(layoutWidget);
        txt_NAME->setObjectName(QString::fromUtf8("txt_NAME"));

        horizontalLayout_2->addWidget(txt_NAME);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_PRICE = new QLineEdit(layoutWidget);
        txt_PRICE->setObjectName(QString::fromUtf8("txt_PRICE"));

        horizontalLayout_3->addWidget(txt_PRICE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txt_PROFIT = new QLineEdit(layoutWidget);
        txt_PROFIT->setObjectName(QString::fromUtf8("txt_PROFIT"));

        horizontalLayout_4->addWidget(txt_PROFIT);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        txt_STOCK = new QLineEdit(layoutWidget);
        txt_STOCK->setObjectName(QString::fromUtf8("txt_STOCK"));

        horizontalLayout_5->addWidget(txt_STOCK);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        txt_SALES = new QLineEdit(layoutWidget);
        txt_SALES->setObjectName(QString::fromUtf8("txt_SALES"));

        horizontalLayout_6->addWidget(txt_SALES);


        verticalLayout->addLayout(horizontalLayout_6);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(260, 20, 141, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        chef_burger_sales = new QTableWidget(centralwidget);
        if (chef_burger_sales->columnCount() < 4)
            chef_burger_sales->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        chef_burger_sales->setHorizontalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        chef_burger_sales->setHorizontalHeaderItem(1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        chef_burger_sales->setHorizontalHeaderItem(2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        chef_burger_sales->setHorizontalHeaderItem(3, __qtablewidgetitem30);
        if (chef_burger_sales->rowCount() < 1)
            chef_burger_sales->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        chef_burger_sales->setVerticalHeaderItem(0, __qtablewidgetitem31);
        chef_burger_sales->setObjectName(QString::fromUtf8("chef_burger_sales"));
        chef_burger_sales->setGeometry(QRect(20, 380, 531, 91));
        profit = new QTextEdit(centralwidget);
        profit->setObjectName(QString::fromUtf8("profit"));
        profit->setGeometry(QRect(560, 390, 221, 64));
        profit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(560, 390, 221, 21));
        admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        admin->setMenuBar(menubar);
        statusbar = new QStatusBar(admin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin->setStatusBar(statusbar);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QMainWindow *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = stock_show->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = stock_show->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admin", "NAME", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = stock_show->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admin", "PRICE", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = stock_show->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("admin", "PROFIT", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = stock_show->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("admin", "STOCK", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = stock_show->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("admin", "SALES", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = stock_show->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("admin", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = stock_show->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("admin", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = stock_show->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("admin", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = stock_show->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("admin", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = stock_show->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("admin", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = stock_show->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("admin", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = stock_show->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("admin", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = stock_show->verticalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("admin", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = stock_show->verticalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("admin", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = stock_show->verticalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("admin", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = stock_show->verticalHeaderItem(10);
        ___qtablewidgetitem16->setText(QApplication::translate("admin", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = stock_show->verticalHeaderItem(11);
        ___qtablewidgetitem17->setText(QApplication::translate("admin", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = stock_show->verticalHeaderItem(12);
        ___qtablewidgetitem18->setText(QApplication::translate("admin", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = stock_show->verticalHeaderItem(13);
        ___qtablewidgetitem19->setText(QApplication::translate("admin", "14", nullptr));
        admin_back->setText(QApplication::translate("admin", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        stock_change->setText(QApplication::translate("admin", "\354\210\230\354\240\225", nullptr));
        stock_delete->setText(QApplication::translate("admin", "\354\202\255\354\240\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = money_show->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("admin", "50000", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = money_show->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("admin", "10000", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = money_show->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("admin", "5000", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = money_show->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("admin", "1000", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = money_show->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QApplication::translate("admin", "500", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = money_show->horizontalHeaderItem(5);
        ___qtablewidgetitem25->setText(QApplication::translate("admin", "100", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = money_show->verticalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("admin", "money", nullptr));
        money_push->setText(QApplication::translate("admin", "\354\236\205\352\270\210", nullptr));
        money_pop->setText(QApplication::translate("admin", "\354\266\234\352\270\210", nullptr));
        label->setText(QApplication::translate("admin", "ID", nullptr));
        label_2->setText(QApplication::translate("admin", "NAME", nullptr));
        label_3->setText(QApplication::translate("admin", "PRICE", nullptr));
        label_4->setText(QApplication::translate("admin", "PROFIT", nullptr));
        label_5->setText(QApplication::translate("admin", "STOCK", nullptr));
        label_6->setText(QApplication::translate("admin", "SALES", nullptr));
        label_7->setText(QApplication::translate("admin", "\354\236\254\352\263\240\352\264\200\353\246\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = chef_burger_sales->horizontalHeaderItem(0);
        ___qtablewidgetitem27->setText(QApplication::translate("admin", "cheese burger", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = chef_burger_sales->horizontalHeaderItem(1);
        ___qtablewidgetitem28->setText(QApplication::translate("admin", "chicken burger", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = chef_burger_sales->horizontalHeaderItem(2);
        ___qtablewidgetitem29->setText(QApplication::translate("admin", "bulgogi burger", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = chef_burger_sales->horizontalHeaderItem(3);
        ___qtablewidgetitem30->setText(QApplication::translate("admin", "shrimp burger", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = chef_burger_sales->verticalHeaderItem(0);
        ___qtablewidgetitem31->setText(QApplication::translate("admin", "sales", nullptr));
        textBrowser->setHtml(QApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264';\">\354\210\234\354\235\265</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
