#include "password.h"
#include "ui_password.h"
#include <QMessageBox>

password::password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::password)
{
    ui->setupUi(this);
}

password::~password()
{
    delete ui;
}

void password::on_login_clicked()
{
    QString userName = ui->userName->text();
    QString passWord = ui->passWord->text();

    if(userName == "test" && passWord == "2019"){
        Admin = new admin(this);
        Admin->show();
        hide();
    }
    else {
        QMessageBox :: warning(this, "login", "incorrect");
        mainwindow = new MainWindow(this);
        mainwindow->show();
        hide();
    }
}
