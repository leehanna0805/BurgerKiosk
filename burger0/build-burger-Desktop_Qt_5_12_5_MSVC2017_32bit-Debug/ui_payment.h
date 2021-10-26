/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_payment
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *money_5000;
    QSpinBox *money_100;
    QSpinBox *money_10000;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *money_50000;
    QSpinBox *money_1000;
    QLabel *label_3;
    QSpinBox *money_500;
    QLabel *label_6;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *menuName;
    QListWidget *menuPrice;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QTextEdit *input_price;
    QTextEdit *change_price;
    QTextEdit *total_price;
    QListWidget *listWidget;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *payment)
    {
        if (payment->objectName().isEmpty())
            payment->setObjectName(QString::fromUtf8("payment"));
        payment->setEnabled(true);
        payment->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica"));
        payment->setFont(font);
        centralwidget = new QWidget(payment);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 500, 371, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(49, 50, 321, 481));
        gridLayoutWidget->setFont(font1);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        money_5000 = new QSpinBox(gridLayoutWidget);
        money_5000->setObjectName(QString::fromUtf8("money_5000"));
        money_5000->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        money_5000->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(money_5000, 2, 1, 1, 1);

        money_100 = new QSpinBox(gridLayoutWidget);
        money_100->setObjectName(QString::fromUtf8("money_100"));
        money_100->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        money_100->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(money_100, 5, 1, 1, 1);

        money_10000 = new QSpinBox(gridLayoutWidget);
        money_10000->setObjectName(QString::fromUtf8("money_10000"));
        money_10000->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        money_10000->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(money_10000, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        money_50000 = new QSpinBox(gridLayoutWidget);
        money_50000->setObjectName(QString::fromUtf8("money_50000"));
        money_50000->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        money_50000->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(money_50000, 0, 1, 1, 1);

        money_1000 = new QSpinBox(gridLayoutWidget);
        money_1000->setObjectName(QString::fromUtf8("money_1000"));
        money_1000->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        money_1000->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(money_1000, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        money_500 = new QSpinBox(gridLayoutWidget);
        money_500->setObjectName(QString::fromUtf8("money_500"));
        money_500->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        money_500->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(money_500, 4, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 30, 371, 41));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 232, 254);"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(380, 80, 371, 241));
        horizontalLayoutWidget->setFont(font1);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        menuName = new QListWidget(horizontalLayoutWidget);
        menuName->setObjectName(QString::fromUtf8("menuName"));
        menuName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(menuName);

        menuPrice = new QListWidget(horizontalLayoutWidget);
        menuPrice->setObjectName(QString::fromUtf8("menuPrice"));
        menuPrice->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(menuPrice);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(380, 319, 371, 171));
        gridLayoutWidget_2->setFont(font1);
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 233);"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 233);"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 233);"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        input_price = new QTextEdit(gridLayoutWidget_2);
        input_price->setObjectName(QString::fromUtf8("input_price"));
        input_price->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(input_price, 1, 1, 1, 1);

        change_price = new QTextEdit(gridLayoutWidget_2);
        change_price->setObjectName(QString::fromUtf8("change_price"));
        change_price->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(change_price, 2, 1, 1, 1);

        total_price = new QTextEdit(gridLayoutWidget_2);
        total_price->setObjectName(QString::fromUtf8("total_price"));
        total_price->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_2->addWidget(total_price, 0, 1, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(380, 80, 371, 411));
        listWidget->setFont(font1);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(210, 20, 161, 61));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);
        payment->setCentralWidget(centralwidget);
        listWidget->raise();
        pushButton_2->raise();
        gridLayoutWidget->raise();
        pushButton->raise();
        horizontalLayoutWidget->raise();
        gridLayoutWidget_2->raise();
        label_15->raise();
        menubar = new QMenuBar(payment);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        payment->setMenuBar(menubar);
        statusbar = new QStatusBar(payment);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        payment->setStatusBar(statusbar);

        retranslateUi(payment);

        QMetaObject::connectSlotsByName(payment);
    } // setupUi

    void retranslateUi(QMainWindow *payment)
    {
        payment->setWindowTitle(QApplication::translate("payment", "MainWindow", nullptr));
        pushButton_2->setText(QApplication::translate("payment", "\352\262\260\354\240\234\355\225\230\352\270\260", nullptr));
        label->setText(QApplication::translate("payment", "50000\354\233\220", nullptr));
        label_2->setText(QApplication::translate("payment", "10000\354\233\220", nullptr));
        label_5->setText(QApplication::translate("payment", "500\354\233\220", nullptr));
        label_4->setText(QApplication::translate("payment", "1000\354\233\220", nullptr));
        label_3->setText(QApplication::translate("payment", "5000\354\233\220", nullptr));
        label_6->setText(QApplication::translate("payment", "100\354\233\220", nullptr));
        pushButton->setText(QApplication::translate("payment", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        label_9->setText(QApplication::translate("payment", "\352\262\260\354\240\234\354\264\235\355\225\251", nullptr));
        label_10->setText(QApplication::translate("payment", "\354\236\205\352\270\210\352\270\210\354\225\241", nullptr));
        label_11->setText(QApplication::translate("payment", "\352\261\260\354\212\244\353\246\204\353\217\210", nullptr));
        label_15->setText(QApplication::translate("payment", "\355\210\254\354\236\205\354\210\230\353\237\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payment: public Ui_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
