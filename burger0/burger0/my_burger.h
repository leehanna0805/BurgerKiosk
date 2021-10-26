#ifndef MY_BURGER_H
#define MY_BURGER_H

#include <QMainWindow>

class payment;
class MainWindow;
#include "mainwindow.h"
#include "payment.h"
#include "buy.h"
#include "ingredient.h"

namespace Ui {
class my_burger;
}

class my_burger : public QMainWindow
{
    Q_OBJECT

public:
    explicit my_burger(QWidget *parent = nullptr);
    ~my_burger();
    Buy buy;
    int check_zero_stock_side(int id);
    ingredient ingre_arr[22];
    void init_ingredient();
    int check_zero_stock(int id);
    void minus_stock(int id);
    void write_burger_sales();
    void init_burger_sales();
    int cheese_burger;
    int chicken_burger;
    int bulgogi_burger;
    int shrimp_burger;
private slots:
    void write_buy_arr();

    void on_burger_1_clicked();

    void on_burger_2_clicked();

    void on_burger_3_clicked();

    void on_burger_4_clicked();

    void on_burger_5_clicked();

    void on_burger_6_clicked();

    void on_burger_7_clicked();

    void on_burger_8_clicked();

    void on_burger_9_clicked();

    void on_burger_10_clicked();

    void on_burger_11_clicked();

    void on_burger_12_clicked();

    void on_delete_button_clicked();

    void on_credit_clicked();

    void on_my_back_clicked();

private:
    Ui::my_burger *ui;
    payment *Payment;
    MainWindow *mainwindow;

};

#endif // MY_BURGER_H
