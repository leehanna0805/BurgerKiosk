#include "payment.h"
#include "ui_payment.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

payment::payment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::payment)
{
    ui->setupUi(this);
    init_ingredient();
    init_cash();
    init_burger_sales();
    init_buy_arr();
    find_food_name();

    for(int i=0; i<food_name.size(); i++){
        ui->menuName->addItem(food_name[i]);
    }

    for(int i=0; i<food_price.size(); i++){
        ui->menuPrice->addItem(QString::number(food_price[i]));
        total_pay += food_price[i];
    }
    ui->total_price->setText(QString::number(total_pay));
}

payment::~payment()
{
    cout<<"payment destroyer!!!!!!!!!!!!!!!!!!1"<<endl;
    delete ui;     //장바구니 벡터 초기화
}

void payment::init_buy_arr(){  //buy list 배열에 파일입출력으로 받아
    QFile file("buy_arr.txt");
        if (!file.open(QIODevice::ReadOnly)){ //파일을 오픈
            cout<<"can't open buy_arr file"<<endl;
            exit(-1);
        }

        QTextStream txtStream(&file);
        while(!txtStream.atEnd()){
               QString txtLine = txtStream.readLine();
               QStringList txtList = txtLine.split(" ");    //공백 단위로 나누기

               for(int i=0;i<txtList.size();i++){
                   int id = txtList.at(i).toInt();
                   arr.push_back(id);
                   cout<<"id: "<<id<<endl;
               }
           }
        file.close();
}

/*void payment::init_buy_arr2(){  //buy list 배열에 파일입출력으로 받아
    QFile file("buy_arr2.txt");
    if (!file.open(QIODevice::ReadOnly)){ //파일을 오픈
        cout<<"can't open buy_arr2 file"<<endl;
        exit(-1);
    }
    QTextStream txtStream(&file);
    QString txtLine = txtStream.readLine();
    QStringList txtList = txtLine.split(" ");    //공백 단위로 나누기

    for(vector<string>::size_type i=0;i<arr2.size();++i){
        this->arr2[i] = txtList.at(i).toStdString();
    }
    file.close();
}*/
void payment::init_burger_sales(){   //치즈 치킨 불고기 새우
    QFile file("burger_sales.txt");
    if (!file.open(QIODevice::ReadOnly)){
        cout<<"can't open cash file"<<endl;
        exit(-1);
    }
    QTextStream txtStream(&file);
    while(!txtStream.atEnd()){
        QString txtLine = txtStream.readLine();
        QStringList txtList = txtLine.split(" ");
        this->cheese_burger = txtList.at(0).toInt();
        this->chicken_burger = txtList.at(1).toInt();
        this->bulgogi_burger = txtList.at(2).toInt();
        this->shrimp_burger = txtList.at(3).toInt();
    }
    file.close();
}

void payment::init_ingredient(){    //이정보들을 ingredient 클래스를 만들어서 클래스 배열에 저장.
    cout<<"payment's init ingre"<<endl;
    int i=0;

    //(재료 id, 재료 이름, 가격, 순익, 재고, 팔린 수)
    QFile file("ingredient.txt");
    if (!file.open(QIODevice::ReadOnly)){ //파일을 오픈
        cout<<"can't open ingredient file"<<endl;
        exit(-1);
    }
    QTextStream txtStream(&file);
    while(!txtStream.atEnd()){
        QString txtLine = txtStream.readLine();
        QStringList txtList = txtLine.split(" ");    //공백 단위로 나누기

        this->ingre_arr[i].id = txtList.at(0).toInt();
        this->ingre_arr[i].name = txtList.at(1);
        this->ingre_arr[i].price = txtList.at(2).toInt();
        this->ingre_arr[i].profit = txtList.at(3).toInt();
        this->ingre_arr[i].stock = txtList.at(4).toInt();
        this->ingre_arr[i].sales = txtList.at(5).toInt();
        i++;
    }
    i=0;
    file.close();

}
void payment::init_cash(){
    cout<<"payment's init cash"<<endl;
    QFile file("cash.txt");
    if (!file.open(QIODevice::ReadOnly)){ //파일을 오픈
        cout<<"can't open cash file"<<endl;
        exit(-1);
    }
    QTextStream txtStream(&file);
    while(!txtStream.atEnd()){
        QString txtLine = txtStream.readLine();
        QStringList txtList = txtLine.split(" ");    //공백 단위로 나누기

        for(int i=0;i<6;i++){
            int money = txtList.at(i).toInt();
            this->cash[i] = money;
        }
    }
    file.close();
}

void payment::write_ingredient(){  //같은 파일에 덮어쓰기
    QFile *file = new QFile;
    QString filename = "ingredient.txt";
    file->setFileName(filename);
    if(!file->open(QIODevice::WriteOnly)){
        cout<<"file can't open"<<endl;
        exit(-1);
    }

    for(int i=0;i<INGRE_NUM;i++){
        QString _id = QString::number(this->ingre_arr[i].id);
        QString _name = this->ingre_arr[i].name;
        QString _price = QString::number(this->ingre_arr[i].price);
        QString _profit = QString::number(this->ingre_arr[i].profit);
        QString _stock = QString::number(this->ingre_arr[i].stock);
        QString _sales = QString::number(this->ingre_arr[i].sales);
        cout<<"write ingre"<<endl;
        file->write(_id.toUtf8());
        file->write(" ");
        file->write(_name.toUtf8());
        file->write(" ");
        file->write(_price.toUtf8());
        file->write(" ");
        file->write(_profit.toUtf8());
        file->write(" ");
        file->write(_stock.toUtf8());
        file->write(" ");
        file->write(_sales.toUtf8());
        file->write("\n");
    }
    file->close();
}

void payment::write_cash(){

    QFile *file = new QFile;
    QString filename = "cash.txt";
    file->setFileName(filename);
    if(!file->open(QIODevice::WriteOnly)){
        cout<<"file can't open"<<endl;
        exit(-1);
    }

    for(int i=0;i<6;i++){
        QString str = QString::number(this->cash[i]);
        file->write(str.toUtf8());
        file->write(" ");
    }
    file->close();
}
void payment::write_burger_sales(){
    QFile *file = new QFile;
    QString filename = "burger_sales.txt";
    file->setFileName(filename);
    if(!file->open(QIODevice::WriteOnly)){
        cout<<"file can't open"<<endl;
        exit(-1);
    }
    QString cheese = QString::number(this->cheese_burger);
    file->write(cheese.toUtf8());
    file->write(" ");
    QString chicken = QString::number(this->chicken_burger);
    file->write(chicken.toUtf8());
    file->write(" ");
    QString bulgogi = QString::number(this->bulgogi_burger);
    file->write(bulgogi.toUtf8());
    file->write(" ");
    QString shrimp = QString::number(this->shrimp_burger);
    file->write(shrimp.toUtf8());
    file->write(" ");

    file->close();
}
int payment::search_ing_ID(int id){      //id 서치해서 return 가격, 재고 --, 판매량 ++
    int flag = 0;
    cout<<"id= "<<id<<endl;

    for(int i=0;i<INGRE_NUM;i++) {
        cout<<"for id= "<<id;
        if(id == this->ingre_arr[i].id){        //id 같은거 찾으면
             cout<<"id search "<<id;
             if(this->ingre_arr[i].stock > 0){
                  this->ingre_arr[i].sales++;
                  this->ingre_arr[i].stock--;
                  flag = 1;
                  return this->ingre_arr[i].price;
             }else{
                 //재료 수량이 0임. 뭐 추가해야겟지??
                 flag = 1;
                 cout<<"ingre id"<<id<<"not exist\n";
                 return 0;
             }

        }
    }
    if(flag == 0){
//      cout<<"no id exist"<<endl;
        return 0;
    }
}
//그리고 버거들 판매수량도 기록해야해. 수제버거 id는 100으로 해서 몇개팔렸는지.
/*
int select_chicken(){
    int ing_sum = 0;
    int ing_price = 0;


}*/

int payment::search_ham_id(int id){
    int ing_sum = 0;
    int ing_price = 0;
    switch(id){
    case 101:  //치즈버거
            ing_price = search_ing_ID(1);  //기본빵
            if(ing_price == 0){
                cout<<"wheat bread not exist\n";
                return 0;
            }
            ing_sum += ing_price;
            ing_price = search_ing_ID(5);  //소고기
            if(ing_price == 0){
                cout<<"beef not exist\n";
                return 0;
            }
            ing_sum += ing_price;
            ing_price = search_ing_ID(12);  //치즈
            if(ing_price == 0){
                cout<<"cheese not exist\n";
                return 0;
            }
            ing_sum += ing_price;
            ing_price = search_ing_ID(7);  //양상추
            if(ing_price == 0){
                cout<<"lettuce not exist\n";
                return 0;
            }
            ing_sum += ing_price;
            ing_price = search_ing_ID(20);  //치즈소스
            if(ing_price == 0){
                cout<<"cheese sauce not exist\n";
                return 0;
            }
            ing_sum += ing_price;
            this->cheese_burger += 1;
            break;

    case 102:  //치킨버거
        ing_price = search_ing_ID(2);  //참깨빵
        if(ing_price == 0){
            cout<<"sesame bread not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(3);  //치킨
        if(ing_price == 0){
            cout<<"chicken not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(8);  //양파
        if(ing_price == 0){
            cout<<"onion not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(10);  //오이
        if(ing_price == 0){
            cout<<"cucumber not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(22);  //살사소스
        if(ing_price == 0){
            cout<<"salsa sauce not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        this->chicken_burger += 1;
        break;
    case 103:  //불고기버거
        ing_price = search_ing_ID(1);  //기본빵
        if(ing_price == 0){
            cout<<"wheat bread not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(4);  //불고기
        if(ing_price == 0){
            cout<<"bulgogi not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(9);  //토마토
        if(ing_price == 0){
            cout<<"tomato not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(11);  //피클
        if(ing_price == 0){
            cout<<"pickle not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(19);  //바베큐소스
        if(ing_price == 0){
            cout<<"barbeque sauce not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        this->bulgogi_burger += 1;
        break;
    case 104:  //새우버거
        ing_price = search_ing_ID(2);  //참깨빵
        if(ing_price == 0){
            cout<<"sesame bread not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(6);  //새우
        if(ing_price == 0){
            cout<<"shrimp not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(13);  //베이컨
        if(ing_price == 0){
            cout<<"bacon not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(7);  //양상추
        if(ing_price == 0){
            cout<<"lettuce not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(21);  //마요 소스
        if(ing_price == 0){
            cout<<"mayo sauce not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        this->shrimp_burger += 1;
        break;
    case 105:  //치즈버거 + 감튀 + 콜라
        ing_price = search_ing_ID(1);  //기본빵
        if(ing_price == 0){
            cout<<"wheat bread not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(5);  //소고기
        if(ing_price == 0){
            cout<<"beef not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(12);  //치즈
        if(ing_price == 0){
            cout<<"cheese not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(7);  //양상추
        if(ing_price == 0){
            cout<<"lettuce not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(20);  //치즈소스
        if(ing_price == 0){
            cout<<"cheese sauce not exist\n";
            return 0;
        }
        ing_sum += ing_price;

        ing_price = search_ing_ID(14);  //감튀
        if(ing_price == 0){
            cout<<"french fries not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(17);  //콜라
        if(ing_price == -1){
            cout<<"coke not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        this->cheese_burger += 1;
        break;
    case 106:  //치킨버거 + 감튀 + 콜라
        ing_price = search_ing_ID(2);  //참깨빵
        if(ing_price == 0){
            cout<<"sesame bread not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(3);  //치킨
        if(ing_price == 0){
            cout<<"chicken not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(8);  //양파
        if(ing_price == 0){
            cout<<"onion not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(10);  //오이
        if(ing_price == 0){
            cout<<"cucumber not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(22);  //살사소스
        if(ing_price == 0){
            cout<<"salsa sauce not exist\n";
            return 0;
        }
        ing_sum += ing_price;

        ing_price = search_ing_ID(14);  //감튀
        if(ing_price == 0){
            cout<<"french fries not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(17);  //콜라
        if(ing_price == 0){
            cout<<"coke not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        this->chicken_burger += 1;
        break;
    case 107:  //불고기버거 + 감튀 + 콜라
        ing_price = search_ing_ID(1);  //기본빵
        if(ing_price == 0){
            cout<<"wheat bread not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(4);  //불고기
        if(ing_price == 0){
            cout<<"bulgogi not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(9);  //토마토
        if(ing_price == 0){
            cout<<"tomato not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(11);  //피클
        if(ing_price == 0){
            cout<<"pickle not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(19);  //바베큐소스
        if(ing_price == 0){
            cout<<"barbeque sauce not exist\n";
            return 0;
        }
        ing_sum += ing_price;

        ing_price = search_ing_ID(14);  //감튀
        if(ing_price == 0){
            cout<<"french fries not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(17);  //콜라
        if(ing_price == 0){
            cout<<"coke not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        this->bulgogi_burger += 1;
        break;
    case 108:  //새우버거 + 감튀 + 콜라
        ing_price = search_ing_ID(2);  //참깨빵
        if(ing_price == 0){
            cout<<"sesame bread not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(6);  //새우
        if(ing_price == 0){
            cout<<"shrimp not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(13);  //베이컨
        if(ing_price == 0){
            cout<<"bacon not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(7);  //양상추
        if(ing_price == 0){
            cout<<"lettuce not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(21);  //마요 소스
        if(ing_price == 0){
            cout<<"mayo sauce not exist\n";
            return 0;
        }
        ing_sum += ing_price;

        ing_price = search_ing_ID(14);  //감튀
        if(ing_price == 0){
            cout<<"french fries not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        ing_price = search_ing_ID(17);  //콜라
        if(ing_price == 0){
            cout<<"coke not exist\n";
            return 0;
        }
        ing_sum += ing_price;
        this->shrimp_burger += 1;
        break;
    }

    return ing_sum;

}
int payment::calc(){   //이걸로 가격 계산
    cout<<"CALC CALC"<<endl;
    int sum = 0;
    cout<<"array size: "<<arr.size();
    for(vector<int>::size_type i=0;i<arr.size();++i){
        cout<<"##################"<<arr[i]<<endl;
        if(arr[i] < 100){
            sum += search_ing_ID(arr[i]);
        }else{
            sum += search_ham_id(arr[i]);
        }
    }
    return sum;                    //총 가격 리턴
}



void payment::on_pushButton_clicked()
{
    if(arr[0] > 100){
        My_burger = new my_burger(this);
        My_burger->show();
        hide();
    }
    else{
        Chef_burger = new chef_burger(this);
        Chef_burger->show();
        hide();
    }
}

void payment::find_food_name(){  //이름, 가격정보 띄울때 food_name 벡터 순서대로 food_price 벡터 순서대로 띄우기

    for(int i=0;i<arr.size()-1;i++){
        if(arr[i] < 100){  //재료
            for(int j=0;j<INGRE_NUM;j++){
                if(ingre_arr[j].id == arr[i]){ //id 같은거 찾으면
                    food_name.push_back(ingre_arr[j].name);
                    food_price.push_back(ingre_arr[j].price);                }
            }
        }else{
            if(arr[i] == 101){
                int price = 0;
                food_name.push_back("cheese burger");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 1){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 5){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 12){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 7){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 20){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);
            }else if(arr[i] == 102){
                int price = 0;
                food_name.push_back("chicken burger");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 2){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 3){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 8){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 10){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 22){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);
            }else if(arr[i]==103){
                int price = 0;
                food_name.push_back("bulgogi burger");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 1){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 4){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 9){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 11){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 19){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);
            }else if(arr[i]=104){
                int price = 0;
                food_name.push_back("shrimp burger");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 2){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 6){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 13){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 7){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 21){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);
            }else if(arr[i] == 105){
                int price = 0;
                food_name.push_back("cheese burger set");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 1){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 5){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 12){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 7){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 20){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 14){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 17){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);

            }else if(arr[i] == 106){
                int price = 0;
                food_name.push_back("chicken burger set");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 2){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 3){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 8){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 10){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 22){price += ingre_arr[i].price;}
                }

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 14){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 17){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);
            }else if(arr[i]==107){
                int price = 0;
                food_name.push_back("bulgogi burger set");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 1){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 4){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 9){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 11){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 19){price += ingre_arr[i].price;}
                }

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 14){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 17){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);
            }else if(arr[i]=108){
                int price = 0;
                food_name.push_back("shrimp burger set");

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 2){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 6){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 13){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 7){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 21){price += ingre_arr[i].price;}
                }

                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 14){price += ingre_arr[i].price;}
                }
                for(int j=0;j<INGRE_NUM;j++){
                    if(ingre_arr[j].id == 17){price += ingre_arr[i].price;}
                }
                food_price.push_back(price);
            }
        }
    }
}

void payment::on_pushButton_2_clicked()
{
    int money_50000 = ui->money_50000->text().toInt();
    int money_10000 =ui->money_10000->text().toInt();
    int money_5000 = ui->money_5000->text().toInt();
    int money_1000 = ui->money_1000->text().toInt();
    int money_500 = ui->money_500->text().toInt();
    int money_100 = ui->money_100->text().toInt();

    int total=calc();
    cout<<total <<endl;
    int user_total= money_50000*50000 + money_10000*10000 + money_5000*5000 +money_1000*1000 + money_500*500+money_100*100;
    int change_total=0;

    if(user_total < total){
        QMessageBox::critical(this,"error","input more money");
    }
    else{

        cash[0] =cash[0]+money_50000;
        cash[1] =cash[1]+money_10000;
        cash[2] =cash[2]+money_5000;
        cash[3] =cash[3]+money_1000;
        cash[4] =cash[4]+money_500;
        cash[5] =cash[5]+money_100;

        int change = user_total - (total);
        int coin[6] = {50000, 10000, 5000, 1000, 500, 100};
        int count[6];
        for(int i=0; i<6; i++){
            count[i]=0;
            count[i] = change / coin[i];
            cash[i] = cash[i] - count[i];
            change = change % coin[i];
            }
        change_total = count[0]*50000+count[1]*10000+count[2]*5000+count[3]*1000+count[4]*500+count[5]*100;
        write_cash();
        write_ingredient();
        write_burger_sales();
        this->arr.clear();
        this->food_name.clear();
        this->food_price.clear();
        //mainwindow = new MainWindow(this);
        //mainwindow->show();
        //hide();
        }

    msgdialog = new msgDialog(this);
    msgdialog -> show();
    hide();
}

void payment::on_money_50000_valueChanged(int arg1)
{
    int money_50000 = ui->money_50000->text().toInt() * 50000;
    int money_10000 =ui->money_10000->text().toInt() * 10000;
    int money_5000 = ui->money_5000->text().toInt() * 5000;
    int money_1000 = ui->money_1000->text().toInt() * 1000;
    int money_500 = ui->money_500->text().toInt() * 500;
    int money_100 = ui->money_100->text().toInt() * 100;

    int total = money_50000 + money_10000 + money_5000 + money_1000 + money_500 + money_100;
    ui->input_price->setText(QString::number(total));

    int change = total - total_pay;
    ui->change_price->setText(QString::number(change));
}

void payment::on_money_10000_valueChanged(int arg1)
{
    int money_50000 = ui->money_50000->text().toInt() * 50000;
    int money_10000 =ui->money_10000->text().toInt() * 10000;
    int money_5000 = ui->money_5000->text().toInt() * 5000;
    int money_1000 = ui->money_1000->text().toInt() * 1000;
    int money_500 = ui->money_500->text().toInt() * 500;
    int money_100 = ui->money_100->text().toInt() * 100;

    int total = money_50000 + money_10000 + money_5000 + money_1000 + money_500 + money_100;
    ui->input_price->setText(QString::number(total));

    int change = total - total_pay;
    ui->change_price->setText(QString::number(change));
}

void payment::on_money_5000_valueChanged(int arg1)
{
    int money_50000 = ui->money_50000->text().toInt() * 50000;
    int money_10000 =ui->money_10000->text().toInt() * 10000;
    int money_5000 = ui->money_5000->text().toInt() * 5000;
    int money_1000 = ui->money_1000->text().toInt() * 1000;
    int money_500 = ui->money_500->text().toInt() * 500;
    int money_100 = ui->money_100->text().toInt() * 100;

    int total = money_50000 + money_10000 + money_5000 + money_1000 + money_500 + money_100;
    ui->input_price->setText(QString::number(total));

    int change = total - total_pay;
    ui->change_price->setText(QString::number(change));
}

void payment::on_money_1000_valueChanged(int arg1)
{
    int money_50000 = ui->money_50000->text().toInt() * 50000;
    int money_10000 =ui->money_10000->text().toInt() * 10000;
    int money_5000 = ui->money_5000->text().toInt() * 5000;
    int money_1000 = ui->money_1000->text().toInt() * 1000;
    int money_500 = ui->money_500->text().toInt() * 500;
    int money_100 = ui->money_100->text().toInt() * 100;

    int total = money_50000 + money_10000 + money_5000 + money_1000 + money_500 + money_100;
    ui->input_price->setText(QString::number(total));

    int change = total - total_pay;
    ui->change_price->setText(QString::number(change));
}

void payment::on_money_500_valueChanged(int arg1)
{
    int money_50000 = ui->money_50000->text().toInt() * 50000;
    int money_10000 =ui->money_10000->text().toInt() * 10000;
    int money_5000 = ui->money_5000->text().toInt() * 5000;
    int money_1000 = ui->money_1000->text().toInt() * 1000;
    int money_500 = ui->money_500->text().toInt() * 500;
    int money_100 = ui->money_100->text().toInt() * 100;

    int total = money_50000 + money_10000 + money_5000 + money_1000 + money_500 + money_100;
    ui->input_price->setText(QString::number(total));

    int change = total - total_pay;
    ui->change_price->setText(QString::number(change));
}

void payment::on_money_100_valueChanged(int arg1)
{
    int money_50000 = ui->money_50000->text().toInt() * 50000;
    int money_10000 =ui->money_10000->text().toInt() * 10000;
    int money_5000 = ui->money_5000->text().toInt() * 5000;
    int money_1000 = ui->money_1000->text().toInt() * 1000;
    int money_500 = ui->money_500->text().toInt() * 500;
    int money_100 = ui->money_100->text().toInt() * 100;

    int total = money_50000 + money_10000 + money_5000 + money_1000 + money_500 + money_100;
    ui->input_price->setText(QString::number(total));

    int change = total - total_pay;
    ui->change_price->setText(QString::number(change));
}
