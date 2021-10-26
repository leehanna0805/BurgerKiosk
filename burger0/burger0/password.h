#ifndef PASSWORD_H
#define PASSWORD_H

#include <QDialog>
class admin;
class MainWindow;
#include "admin.h"
#include "mainwindow.h"

namespace Ui {
class password;
}

class password : public QDialog
{
    Q_OBJECT

public:
    explicit password(QWidget *parent = nullptr);
    ~password();

private slots:
    void on_login_clicked();

private:
    Ui::password *ui;
    admin *Admin;
    MainWindow *mainwindow;
};

#endif // PASSWORD_H
