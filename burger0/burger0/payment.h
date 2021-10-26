#ifndef PAYMENT_H
#define PAYMENT_H
#define INGRE_NUM 22

#include <QMainWindow>
#include "ingredient.h"
class my_burger;
class chef_burger;
class MainWindow;
class msgDialog;
#include "my_burger.h"
#include"chef_burger.h"
#include "msgdialog.h"


namespace Ui {
class payment;
}

class payment : public QMainWindow
{
    Q_OBJECT

public:
    vector<int> arr; //여기에 구매리스트 파일입출력으로 받아오기
 //   vector<string> arr2;
    ingredient ingre_arr[INGRE_NUM]; //일단 50개//재료들 저장될 자료구조 (구조체(class)배열? )
    int cash[6];
    int cheese_burger=0;
    int chicken_burger=0;
    int bulgogi_burger=0;
    int shrimp_burger=0;
    int total_pay=0;
    explicit payment(QWidget *parent = nullptr);
    vector<QString> food_name;
    vector<int> food_price;
    ~payment();

    void init_buy_arr();  //buy list 배열에 파일입출력으로 받아오기
    void init_ingredient();
    void init_cash();
    void find_food_name();
    void write_ingredient();  //같은 파일에 덮어쓰기
    void write_cash();
    void write_burger_sales();
    int search_ing_ID(int id);
    int search_ham_id(int id);
    int calc();
    void init_burger_sales();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_money_50000_valueChanged(int arg1);

    void on_money_10000_valueChanged(int arg1);

    void on_money_5000_valueChanged(int arg1);

    void on_money_1000_valueChanged(int arg1);

    void on_money_500_valueChanged(int arg1);

    void on_money_100_valueChanged(int arg1);

private:
    Ui::payment *ui;
    my_burger *My_burger;
    chef_burger *Chef_burger;
    msgDialog *msgdialog;
    MainWindow *mainwindow;
};

#endif // PAYMENT_H
