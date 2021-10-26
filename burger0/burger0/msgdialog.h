#ifndef MSGDIALOG_H
#define MSGDIALOG_H

#include <QDialog>
#include <QEasingCurve>
#include <QPropertyAnimation>
#include <QProgressBar>
#include "mainwindow.h"
#include "payment.h"

class QProgressBar;
class QPropertyAnimation;
class MainWindow;

namespace Ui {
class msgDialog;
}

class msgDialog : public QDialog
{
    Q_OBJECT

public:
    explicit msgDialog(QWidget *parent = nullptr);
    ~msgDialog();
    void act_progressive();

private slots:
    void on_pushButton_clicked();

private:
    Ui::msgDialog *ui;
    MainWindow *mainwindow;
    msgDialog *MsgDialog;
    payment *Payment;
};

#endif // MSGDIALOG_H
