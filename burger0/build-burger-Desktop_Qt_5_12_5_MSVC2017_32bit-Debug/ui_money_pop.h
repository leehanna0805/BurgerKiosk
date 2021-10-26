/********************************************************************************
** Form generated from reading UI file 'money_pop.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEY_POP_H
#define UI_MONEY_POP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_money_pop
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *money_50000;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *money_10000;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *money_5000;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *money_1000;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *money_500;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *money_100;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *money_pop)
    {
        if (money_pop->objectName().isEmpty())
            money_pop->setObjectName(QString::fromUtf8("money_pop"));
        money_pop->resize(400, 300);
        verticalLayout = new QVBoxLayout(money_pop);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(money_pop);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        money_50000 = new QSpinBox(money_pop);
        money_50000->setObjectName(QString::fromUtf8("money_50000"));

        horizontalLayout->addWidget(money_50000);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(money_pop);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        money_10000 = new QSpinBox(money_pop);
        money_10000->setObjectName(QString::fromUtf8("money_10000"));

        horizontalLayout_2->addWidget(money_10000);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(money_pop);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        money_5000 = new QSpinBox(money_pop);
        money_5000->setObjectName(QString::fromUtf8("money_5000"));

        horizontalLayout_3->addWidget(money_5000);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(money_pop);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        money_1000 = new QSpinBox(money_pop);
        money_1000->setObjectName(QString::fromUtf8("money_1000"));

        horizontalLayout_4->addWidget(money_1000);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(money_pop);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        money_500 = new QSpinBox(money_pop);
        money_500->setObjectName(QString::fromUtf8("money_500"));

        horizontalLayout_5->addWidget(money_500);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(money_pop);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        money_100 = new QSpinBox(money_pop);
        money_100->setObjectName(QString::fromUtf8("money_100"));

        horizontalLayout_6->addWidget(money_100);


        verticalLayout->addLayout(horizontalLayout_6);

        buttonBox = new QDialogButtonBox(money_pop);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(money_pop);

        QMetaObject::connectSlotsByName(money_pop);
    } // setupUi

    void retranslateUi(QDialog *money_pop)
    {
        money_pop->setWindowTitle(QApplication::translate("money_pop", "Dialog", nullptr));
        label->setText(QApplication::translate("money_pop", "50000", nullptr));
        label_2->setText(QApplication::translate("money_pop", "10000", nullptr));
        label_3->setText(QApplication::translate("money_pop", "5000", nullptr));
        label_4->setText(QApplication::translate("money_pop", "1000", nullptr));
        label_5->setText(QApplication::translate("money_pop", "500", nullptr));
        label_6->setText(QApplication::translate("money_pop", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class money_pop: public Ui_money_pop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEY_POP_H
