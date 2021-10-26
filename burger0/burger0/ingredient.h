#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <iostream>
#include <QString>
using namespace std;

class ingredient
{
public:

    int id;         //id
    QString name;    //이름
    int price;      //가격
    int profit;     //순익
    int stock;      //재고(숫자)
    int sales;      //팔린 갯수

    ingredient();
    ingredient(int id, QString name, int price, int profit, int stock, int sales);

};

#endif // INGREDIENT_H
