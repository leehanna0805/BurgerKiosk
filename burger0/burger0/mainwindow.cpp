#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_chef_burger_clicked()
{
    chef_Burger = new chef_burger(this);
    chef_Burger->show();
    hide();
}

void MainWindow::on_my_burger_clicked()
{
    my_Burger = new my_burger(this);
    my_Burger->show();
    hide();
}

void MainWindow::on_admin_clicked()
{
    Password = new password(this);
    Password->show();
    hide();
}


