/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *chef_burger;
    QPushButton *my_burger;
    QPushButton *admin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 215);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chef_burger = new QPushButton(centralwidget);
        chef_burger->setObjectName(QString::fromUtf8("chef_burger"));
        chef_burger->setGeometry(QRect(130, 200, 231, 141));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        font1.setPointSize(12);
        chef_burger->setFont(font1);
        chef_burger->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        my_burger = new QPushButton(centralwidget);
        my_burger->setObjectName(QString::fromUtf8("my_burger"));
        my_burger->setGeometry(QRect(440, 200, 221, 141));
        my_burger->setFont(font1);
        my_burger->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        admin = new QPushButton(centralwidget);
        admin->setObjectName(QString::fromUtf8("admin"));
        admin->setGeometry(QRect(670, 10, 111, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        admin->setFont(font2);
        admin->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(224, 224, 224);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        chef_burger->setText(QApplication::translate("MainWindow", "\354\210\230\354\240\234\353\262\204\352\261\260", nullptr));
        my_burger->setText(QApplication::translate("MainWindow", "\354\231\204\354\240\234\353\262\204\352\261\260", nullptr));
        admin->setText(QApplication::translate("MainWindow", "\352\264\200\353\246\254\354\236\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
