#ifndef BUY_H
#define BUY_H
#include <iostream>

#include <vector>
using namespace  std;
#define MAX_CHOOSE 50

class Buy
{
public:
    Buy();
    void add_food(int id, vector<int> arr);
    void delete_food(int index);

    vector<int> buy_id;  //linked list 형식
    vector<string> buy_list;
    int pay();
};
#endif // BUY_H
