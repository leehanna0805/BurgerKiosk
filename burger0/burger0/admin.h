#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include "ingredient.h"

class MainWindow;

#include "mainwindow.h"

#define INGRE_NUM 22

namespace Ui {
class admin;
}

class admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();
        int burger_sales[9];
        int cheese_burger;
        int chicken_burger;
        int bulgogi_burger;
        int shrimp_burger;
        int profit=0;
        const int password = 2019;      //로그인 비밀번호
        int chefburger_sales; //파일 입출력으로 저장된 총 수제버거 판매량 가져오기

        ingredient ingre_arr[INGRE_NUM]; //일단 50개//재료들 저장될 자료구조 (구조체(class)배열? )

        int cash[6]; //현금 재고(순서: 5만 1만 5천 1천 5백 1백)


        admin();   //생성과 동시에 파일 입출력으로 정보 받아오기(재료 id, 재료 이름, 가격, 순익, 재고, 팔린 수)
        void init_ingredient();  //재료들 받아와서 초기화
        void init_cash();   //현금 수량 받아와서 초기화/index 0 = 오만원, 1=만원, 2=오천원, 3=천원, 4=오백원, 5=백원
        void init_burger_sales();
        //여기서 변경 된 값 다시 저장하는 함수 있어야해. fwrite.
        void write_ingredient();  //같은 파일에 덮어쓰기
        void write_cash();
        void write_burger_sales();

        void fill_cash_stock(int index, int num); //현금 재고 수정(index: 현금 종류, num: 수정된 개수) (돈 한번에 채울 때)
        void change_cash_stock(int index, int num); //index:현금 종류, num: 증감 값(+-몇개 이런식) (계산할 때)

        int profit_calc(); //순익 계산
        void show_profit(); //순익 계산 출력

        bool log_in(int num);  //로그인
        int check_zero_ingredient(int id);    //재료 id의 재고가 0 이하인지 체크!

        int search_ing_ID(int id);

        //판매량 집계 : 완제품은 많이 팔린 순서대로,

private slots:
    void on_stock_change_clicked();

    void on_stock_delete_clicked();

    void on_money_push_clicked();

    void on_money_pop_clicked();

    void on_stock_show_cellClicked(int row, int column);

    void on_admin_back_clicked();

private:
    Ui::admin *ui;
    MainWindow *mainwindow;

    enum money_column{
        MONEY_50000, MONEY_10000, MONEY_5000, MONEY_1000, MONEY_500, MONEY_100
    };

    enum stock_column{
        ID, NAME, PRICE, PROFIT, STOCK, SALES
    };
};

#endif // ADMIN_H
