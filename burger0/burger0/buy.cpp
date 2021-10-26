#include "buy.h"

Buy::Buy() { }

void Buy::add_food(int id,vector<int> arr){
    arr.push_back(id);
}

void Buy::delete_food(int index){
    int count = 0;
    for(vector<int>::iterator it = buy_id.begin();it!=buy_id.end();it++){
        if(count == index){
            it = buy_id.erase(it);
            break;
        }else{
            count++;
        }
    }
}
