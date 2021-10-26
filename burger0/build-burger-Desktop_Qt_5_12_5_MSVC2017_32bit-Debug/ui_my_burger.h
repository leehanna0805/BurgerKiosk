/********************************************************************************
** Form generated from reading UI file 'my_burger.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_BURGER_H
#define UI_MY_BURGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_my_burger
{
public:
    QWidget *centralwidget;
    QPushButton *my_back;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *credit;
    QPushButton *burger_1;
    QPushButton *burger_3;
    QPushButton *burger_4;
    QPushButton *burger_5;
    QPushButton *burger_6;
    QPushButton *burger_7;
    QPushButton *burger_8;
    QPushButton *burger_9;
    QPushButton *burger_10;
    QPushButton *burger_11;
    QPushButton *burger_12;
    QPushButton *burger_2;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *delete_button;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *my_burger)
    {
        if (my_burger->objectName().isEmpty())
            my_burger->setObjectName(QString::fromUtf8("my_burger"));
        my_burger->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        my_burger->setFont(font);
        my_burger->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(my_burger);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        my_back = new QPushButton(centralwidget);
        my_back->setObjectName(QString::fromUtf8("my_back"));
        my_back->setGeometry(QRect(590, 10, 201, 31));
        my_back->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 232, 254);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(570, 0, 21, 601));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 50, 581, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 170, 581, 41));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 310, 581, 41));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        credit = new QPushButton(centralwidget);
        credit->setObjectName(QString::fromUtf8("credit"));
        credit->setGeometry(QRect(580, 510, 111, 41));
        credit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        burger_1 = new QPushButton(centralwidget);
        burger_1->setObjectName(QString::fromUtf8("burger_1"));
        burger_1->setGeometry(QRect(10, 80, 131, 81));
        burger_1->setStyleSheet(QString::fromUtf8("#burger_1{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/cheese.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_3 = new QPushButton(centralwidget);
        burger_3->setObjectName(QString::fromUtf8("burger_3"));
        burger_3->setGeometry(QRect(290, 80, 131, 81));
        burger_3->setStyleSheet(QString::fromUtf8("#burger_3{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/burger.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_4 = new QPushButton(centralwidget);
        burger_4->setObjectName(QString::fromUtf8("burger_4"));
        burger_4->setGeometry(QRect(430, 80, 141, 81));
        burger_4->setStyleSheet(QString::fromUtf8("#burger_4{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/shrimp.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_5 = new QPushButton(centralwidget);
        burger_5->setObjectName(QString::fromUtf8("burger_5"));
        burger_5->setGeometry(QRect(10, 220, 131, 81));
        burger_5->setStyleSheet(QString::fromUtf8("#burger_5{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/cheeseSet.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_6 = new QPushButton(centralwidget);
        burger_6->setObjectName(QString::fromUtf8("burger_6"));
        burger_6->setGeometry(QRect(150, 220, 131, 81));
        burger_6->setStyleSheet(QString::fromUtf8("#burger_6{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/chickenSet.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_7 = new QPushButton(centralwidget);
        burger_7->setObjectName(QString::fromUtf8("burger_7"));
        burger_7->setGeometry(QRect(290, 220, 131, 81));
        burger_7->setStyleSheet(QString::fromUtf8("#burger_7{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/bulgogiSet.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_8 = new QPushButton(centralwidget);
        burger_8->setObjectName(QString::fromUtf8("burger_8"));
        burger_8->setGeometry(QRect(430, 220, 141, 81));
        burger_8->setStyleSheet(QString::fromUtf8("#burger_8{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/shrimpSet.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_9 = new QPushButton(centralwidget);
        burger_9->setObjectName(QString::fromUtf8("burger_9"));
        burger_9->setGeometry(QRect(10, 350, 131, 81));
        burger_9->setStyleSheet(QString::fromUtf8("#burger_9{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/cheeseStick.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_10 = new QPushButton(centralwidget);
        burger_10->setObjectName(QString::fromUtf8("burger_10"));
        burger_10->setGeometry(QRect(150, 350, 131, 81));
        burger_10->setStyleSheet(QString::fromUtf8("#burger_10{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/chickenNugget.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_11 = new QPushButton(centralwidget);
        burger_11->setObjectName(QString::fromUtf8("burger_11"));
        burger_11->setGeometry(QRect(290, 350, 131, 81));
        burger_11->setStyleSheet(QString::fromUtf8("#burger_11{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/cock.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_12 = new QPushButton(centralwidget);
        burger_12->setObjectName(QString::fromUtf8("burger_12"));
        burger_12->setGeometry(QRect(430, 350, 141, 81));
        burger_12->setStyleSheet(QString::fromUtf8("#burger_12{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/sprite.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        burger_2 = new QPushButton(centralwidget);
        burger_2->setObjectName(QString::fromUtf8("burger_2"));
        burger_2->setGeometry(QRect(150, 80, 131, 81));
        burger_2->setStyleSheet(QString::fromUtf8("#burger_2{\n"
"background-color: transparent;\n"
"border-image: url(:/resources/image/chicken.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(590, 60, 211, 391));
        listWidget->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 255, 255);\n"
"background : transparent;\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 170, 131, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 170, 131, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 170, 131, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 170, 141, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_5->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 56, 16));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 200, 56, 12));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 310, 56, 12));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 330, 121, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        delete_button = new QPushButton(centralwidget);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setGeometry(QRect(690, 510, 111, 41));
        delete_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);\n"
"font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 310, 131, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(150, 310, 131, 16));
        label_10->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(290, 310, 131, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(430, 310, 141, 16));
        label_12->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 440, 131, 16));
        label_13->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(150, 440, 131, 16));
        label_14->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(290, 440, 131, 16));
        label_15->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(430, 440, 141, 16));
        label_16->setStyleSheet(QString::fromUtf8("font: 9pt \"\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264\";"));
        label_16->setAlignment(Qt::AlignCenter);
        my_burger->setCentralWidget(centralwidget);
        menubar = new QMenuBar(my_burger);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        my_burger->setMenuBar(menubar);
        statusbar = new QStatusBar(my_burger);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        my_burger->setStatusBar(statusbar);

        retranslateUi(my_burger);

        QMetaObject::connectSlotsByName(my_burger);
    } // setupUi

    void retranslateUi(QMainWindow *my_burger)
    {
        my_burger->setWindowTitle(QApplication::translate("my_burger", "MainWindow", nullptr));
#ifndef QT_NO_WHATSTHIS
        my_burger->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        my_back->setText(QApplication::translate("my_burger", "\353\222\244\353\241\234\352\260\200\352\270\260", nullptr));
        credit->setText(QApplication::translate("my_burger", "\352\262\260\354\240\234\355\225\230\352\270\260", nullptr));
#ifndef QT_NO_WHATSTHIS
        burger_1->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/build-burger-Desktop_Qt_5_12_5_MSVC2017_32bit-Debug/burger.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_1->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        burger_3->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_4->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_4->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_5->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_5->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_6->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_6->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_7->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_7->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_8->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_8->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_9->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_9->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_10->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_10->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_11->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_11->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_12->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_12->setText(QString());
#ifndef QT_NO_WHATSTHIS
        burger_2->setWhatsThis(QApplication::translate("my_burger", "<html><head/><body><p><img src=\":/Desktop/5\354\236\245\354\240\225\353\246\254.jpg\"/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        burger_2->setText(QString());
        label_2->setText(QApplication::translate("my_burger", "\354\271\230\355\202\250\353\262\204\352\261\260", nullptr));
        label_3->setText(QApplication::translate("my_burger", "\353\266\210\352\263\240\352\270\260\353\262\204\352\261\260", nullptr));
        label_4->setText(QApplication::translate("my_burger", "\354\271\230\354\246\210\353\262\204\352\261\260", nullptr));
        label_5->setText(QApplication::translate("my_burger", "\354\203\210\354\232\260\353\262\204\352\261\260", nullptr));
        label->setText(QApplication::translate("my_burger", "\353\262\204\352\261\260", nullptr));
        label_6->setText(QApplication::translate("my_burger", "\354\204\270\355\212\270", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("my_burger", "\354\202\254\354\235\264\353\223\234 & \354\235\214\353\243\214", nullptr));
        delete_button->setText(QApplication::translate("my_burger", "\354\202\255\354\240\234", nullptr));
        label_9->setText(QApplication::translate("my_burger", "\354\271\230\354\246\210\353\262\204\352\261\260\354\204\270\355\212\270", nullptr));
        label_10->setText(QApplication::translate("my_burger", "\354\271\230\355\202\250\353\262\204\352\261\260\354\204\270\355\212\270", nullptr));
        label_11->setText(QApplication::translate("my_burger", "\353\266\210\352\263\240\352\270\260\353\262\204\352\261\260\354\204\270\355\212\270", nullptr));
        label_12->setText(QApplication::translate("my_burger", "\354\203\210\354\232\260\353\262\204\352\261\260\354\204\270\355\212\270", nullptr));
        label_13->setText(QApplication::translate("my_burger", "\354\271\230\354\246\210\354\212\244\355\213\2612pc", nullptr));
        label_14->setText(QApplication::translate("my_burger", "\354\271\230\355\202\250\353\204\210\352\262\237 6pc", nullptr));
        label_15->setText(QApplication::translate("my_burger", "\354\275\234\353\235\274", nullptr));
        label_16->setText(QApplication::translate("my_burger", "\354\202\254\354\235\264\353\213\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class my_burger: public Ui_my_burger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_BURGER_H
