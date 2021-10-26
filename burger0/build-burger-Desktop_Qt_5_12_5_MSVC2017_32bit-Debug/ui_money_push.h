/********************************************************************************
** Form generated from reading UI file 'money_push.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEY_PUSH_H
#define UI_MONEY_PUSH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_money_push
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_50000;
    QSpinBox *money_50000;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10000;
    QSpinBox *money_10000;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5000;
    QSpinBox *money_5000;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_1000;
    QSpinBox *money_1000;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_500;
    QSpinBox *money_500;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_100;
    QSpinBox *money_100;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *money_push)
    {
        if (money_push->objectName().isEmpty())
            money_push->setObjectName(QString::fromUtf8("money_push"));
        money_push->resize(400, 300);
        verticalLayout = new QVBoxLayout(money_push);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_50000 = new QLabel(money_push);
        label_50000->setObjectName(QString::fromUtf8("label_50000"));
        label_50000->setStyleSheet(QString::fromUtf8("size:15px"));
        label_50000->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_50000);

        money_50000 = new QSpinBox(money_push);
        money_50000->setObjectName(QString::fromUtf8("money_50000"));
        money_50000->setMaximum(999999999);

        horizontalLayout->addWidget(money_50000);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10000 = new QLabel(money_push);
        label_10000->setObjectName(QString::fromUtf8("label_10000"));
        label_10000->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_10000);

        money_10000 = new QSpinBox(money_push);
        money_10000->setObjectName(QString::fromUtf8("money_10000"));
        money_10000->setMaximum(999999999);

        horizontalLayout_2->addWidget(money_10000);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5000 = new QLabel(money_push);
        label_5000->setObjectName(QString::fromUtf8("label_5000"));
        label_5000->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5000);

        money_5000 = new QSpinBox(money_push);
        money_5000->setObjectName(QString::fromUtf8("money_5000"));
        money_5000->setMaximum(999999999);

        horizontalLayout_3->addWidget(money_5000);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_1000 = new QLabel(money_push);
        label_1000->setObjectName(QString::fromUtf8("label_1000"));
        label_1000->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_1000);

        money_1000 = new QSpinBox(money_push);
        money_1000->setObjectName(QString::fromUtf8("money_1000"));
        money_1000->setMaximum(999999999);

        horizontalLayout_4->addWidget(money_1000);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_500 = new QLabel(money_push);
        label_500->setObjectName(QString::fromUtf8("label_500"));
        label_500->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_500);

        money_500 = new QSpinBox(money_push);
        money_500->setObjectName(QString::fromUtf8("money_500"));
        money_500->setMaximum(999999999);

        horizontalLayout_5->addWidget(money_500);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_100 = new QLabel(money_push);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_100);

        money_100 = new QSpinBox(money_push);
        money_100->setObjectName(QString::fromUtf8("money_100"));
        money_100->setMaximum(999999999);

        horizontalLayout_6->addWidget(money_100);


        verticalLayout->addLayout(horizontalLayout_6);

        buttonBox = new QDialogButtonBox(money_push);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(money_push);

        QMetaObject::connectSlotsByName(money_push);
    } // setupUi

    void retranslateUi(QDialog *money_push)
    {
        money_push->setWindowTitle(QApplication::translate("money_push", "Dialog", nullptr));
#ifndef QT_NO_WHATSTHIS
        label_50000->setWhatsThis(QApplication::translate("money_push", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_50000->setText(QApplication::translate("money_push", "50000", nullptr));
        label_10000->setText(QApplication::translate("money_push", "10000", nullptr));
        label_5000->setText(QApplication::translate("money_push", "5000", nullptr));
        label_1000->setText(QApplication::translate("money_push", "1000", nullptr));
        label_500->setText(QApplication::translate("money_push", "500", nullptr));
        label_100->setText(QApplication::translate("money_push", "100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class money_push: public Ui_money_push {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEY_PUSH_H
