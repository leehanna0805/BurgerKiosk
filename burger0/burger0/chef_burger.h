#ifndef CHEF_BURGER_H
#define CHEF_BURGER_H

#include <QMainWindow>
class payment;
class MainWindow;
#include "mainwindow.h"
#include "payment.h"
#include "buy.h"
#include "ingredient.h"
#include <QFile>
#include <QTextStream>

namespace Ui {
class chef_burger;
}

class chef_burger : public QMainWindow
{
    Q_OBJECT

public:
    explicit chef_burger(QWidget *parent = nullptr);

    ~chef_burger();
    Buy buy;
    ingredient ingre_arr[22];
    void init_ingredient();
    int check_zero_stock(int id);

private slots:
    void write_buy_arr();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_cancelButton_clicked();

    void on_creditButton_clicked();

    void on_backButton_clicked();

private:
    Ui::chef_burger *ui;
    payment *Payment;
    MainWindow *mainwindow;
};

#endif // CHEF_BURGER_H
