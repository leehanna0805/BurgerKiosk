#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class password;
class my_burger;
class chef_burger;
#include "my_burger.h"
#include "chef_burger.h"
#include "password.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_chef_burger_clicked();

    void on_my_burger_clicked();

    void on_admin_clicked();

private:
    Ui::MainWindow *ui;
    chef_burger * chef_Burger;
    my_burger *my_Burger;
    password *Password;
};
#endif // MAINWINDOW_H
