/********************************************************************************
** Form generated from reading UI file 'password.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_password
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *userName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passWord;
    QPushButton *login;

    void setupUi(QDialog *password)
    {
        if (password->objectName().isEmpty())
            password->setObjectName(QString::fromUtf8("password"));
        password->resize(400, 300);
        groupBox = new QGroupBox(password);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 70, 246, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        userName = new QLineEdit(groupBox);
        userName->setObjectName(QString::fromUtf8("userName"));

        horizontalLayout->addWidget(userName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        passWord = new QLineEdit(groupBox);
        passWord->setObjectName(QString::fromUtf8("passWord"));
        passWord->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passWord);


        verticalLayout->addLayout(horizontalLayout_2);

        login = new QPushButton(groupBox);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 197, 197);"));

        verticalLayout->addWidget(login);


        retranslateUi(password);

        QMetaObject::connectSlotsByName(password);
    } // setupUi

    void retranslateUi(QDialog *password)
    {
        password->setWindowTitle(QApplication::translate("password", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("password", "sign", nullptr));
        label->setText(QApplication::translate("password", "USERNAME", nullptr));
        label_2->setText(QApplication::translate("password", "PASSWORD", nullptr));
        login->setText(QApplication::translate("password", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class password: public Ui_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H
