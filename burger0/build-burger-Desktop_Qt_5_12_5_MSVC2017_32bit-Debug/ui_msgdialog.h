/********************************************************************************
** Form generated from reading UI file 'msgdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSGDIALOG_H
#define UI_MSGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_msgDialog
{
public:
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *msgDialog)
    {
        if (msgDialog->objectName().isEmpty())
            msgDialog->setObjectName(QString::fromUtf8("msgDialog"));
        msgDialog->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("\353\254\270\354\262\264\353\266\200 \354\240\234\353\252\251 \353\260\224\355\203\225\354\262\264"));
        msgDialog->setFont(font);
        groupBox = new QGroupBox(msgDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 321, 231));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 40, 301, 31));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 150, 181, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 232, 254);"));

        retranslateUi(msgDialog);

        QMetaObject::connectSlotsByName(msgDialog);
    } // setupUi

    void retranslateUi(QDialog *msgDialog)
    {
        msgDialog->setWindowTitle(QApplication::translate("msgDialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("msgDialog", "GroupBox", nullptr));
        textBrowser->setHtml(QApplication::translate("msgDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Gulim'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Gulim'; font-weight:600; vertical-align:sub;\">\352\262\260\354\240\234\352\260\200 \354\231\204\353\243\214\353\220\230\354\227\210\354\212\265\353\213\210\353\213\244..:&gt;</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("msgDialog", "\354\262\253 \355\231\224\353\251\264\354\234\274\353\241\234 \353\217\214\354\225\204\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class msgDialog: public Ui_msgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSGDIALOG_H
