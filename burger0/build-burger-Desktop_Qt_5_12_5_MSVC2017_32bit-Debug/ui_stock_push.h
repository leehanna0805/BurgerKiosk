/********************************************************************************
** Form generated from reading UI file 'stock_push.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_PUSH_H
#define UI_STOCK_PUSH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_stock_push
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *stock_name;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *stock_num;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QSpinBox *stock_price;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *stock_push)
    {
        if (stock_push->objectName().isEmpty())
            stock_push->setObjectName(QString::fromUtf8("stock_push"));
        stock_push->resize(400, 125);
        verticalLayout = new QVBoxLayout(stock_push);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(stock_push);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        stock_name = new QLineEdit(stock_push);
        stock_name->setObjectName(QString::fromUtf8("stock_name"));

        horizontalLayout->addWidget(stock_name);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(stock_push);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        stock_num = new QSpinBox(stock_push);
        stock_num->setObjectName(QString::fromUtf8("stock_num"));
        stock_num->setMaximum(999999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, stock_num);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(stock_push);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        stock_price = new QSpinBox(stock_push);
        stock_price->setObjectName(QString::fromUtf8("stock_price"));
        stock_price->setMaximum(999999999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, stock_price);


        verticalLayout->addLayout(formLayout_2);

        buttonBox = new QDialogButtonBox(stock_push);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(stock_push);

        QMetaObject::connectSlotsByName(stock_push);
    } // setupUi

    void retranslateUi(QDialog *stock_push)
    {
        stock_push->setWindowTitle(QApplication::translate("stock_push", "Dialog", nullptr));
        label->setText(QApplication::translate("stock_push", "\354\235\264\353\246\204'", nullptr));
        label_2->setText(QApplication::translate("stock_push", "\354\236\254\352\263\240", nullptr));
        label_3->setText(QApplication::translate("stock_push", "\352\260\200\352\262\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stock_push: public Ui_stock_push {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_PUSH_H
