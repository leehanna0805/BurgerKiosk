#include "ingredient.h"
#include <QString>

//재료 id, 재료 이름, 가격, 원가, 재고, 팔린 수
ingredient::ingredient(){

}

ingredient::ingredient(int id, QString name, int price, int profit, int stock, int sales)
{
    this->id = id;
    this->name = name;
    this->price = price;
    this->profit = profit;
    this->stock = stock;
    this->sales = sales;
}
