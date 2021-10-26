#include "my_burger.h"
#include "ui_my_burger.h"
#include <QFile>
#include <QMessageBox>

my_burger::my_burger(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::my_burger)
{
    ui->setupUi(this);
    init_ingredient();
    init_burger_sales();
}

my_burger::~my_burger()
{
    buy.buy_id.clear();
    delete ui;
}
void my_burger::init_burger_sales(){   //치즈 치킨 불고기 새우
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
void my_burger::write_burger_sales(){
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
void my_burger::init_ingredient(){    //이정보들을 ingredient 클래스를 만들어서 클래스 배열에 저장.
    int i=0;                                  //(재료 id, 재료 이름, 가격, 순익, 재고, 팔린 수)
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
    file.close();
}

int my_burger::check_zero_stock(int id){
    int flag = 0;
    for(int i=0;i<22;i++){
        if(ingre_arr[i].id == id){
            if(ingre_arr[i].stock <= 0){
                flag = 1;
                return -1;             //없으면 return -1
            }else{
                //chef burger에선 여기서 stock 조절했지만 여기선 안됨.
                flag = 1;
                return 0;
            }
        }
    }
    if(flag == 0){
        cout<<"no id"<<endl;
        return 1;
    }
}
void my_burger::minus_stock(int id){
    for(int i=0;i<22;i++){
        if(ingre_arr[i].id == id){
            ingre_arr[i].stock -= 1;
            return;
        }
    }
}
int my_burger::check_zero_stock_side(int id){
    for(int i=0;i<22;i++){
        if(ingre_arr[i].id == id){
            if(ingre_arr[i].stock <= 0){
                return -1;             //없으면 return -1
            }else{
                ingre_arr[i].stock -= 1; //재고 있으면 -1
            }
        }
    }
}

void my_burger::on_burger_1_clicked()
{
    int flag;
    flag = check_zero_stock(1);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(5);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(12);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(7);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(20);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Cheese burger");
    minus_stock(1); minus_stock(5); minus_stock(12);
    minus_stock(7); minus_stock(20);
    this->cheese_burger += 1;
    buy.buy_id.push_back(101);
}

void my_burger::on_burger_2_clicked()
{
    int flag;
    flag = check_zero_stock(2);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(3);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(8);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(10);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(22);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Chicken burger");
    minus_stock(2); minus_stock(3); minus_stock(8);
    minus_stock(10); minus_stock(22);
    this->chicken_burger += 1;
    buy.buy_id.push_back(102);
}

void my_burger::on_burger_3_clicked()
{
    int flag;
    flag = check_zero_stock(1);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(4);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(9);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(11);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(19);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Bulgogi burger");
    minus_stock(1); minus_stock(4); minus_stock(9);
    minus_stock(11); minus_stock(19);
    this->bulgogi_burger += 1;
    buy.buy_id.push_back(103);
}

void my_burger::on_burger_4_clicked()
{
    int flag;
    flag = check_zero_stock(2);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(6);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(13);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(7);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(21);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Shrimp burger");
    minus_stock(2); minus_stock(6); minus_stock(13);
    minus_stock(7); minus_stock(21);
    this->shrimp_burger += 1;
    buy.buy_id.push_back(104);
}

void my_burger::on_burger_5_clicked()
{
    int flag;
    flag = check_zero_stock(1);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(5);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(12);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(7);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(20);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(14);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(17);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Cheese burger set");
    minus_stock(1); minus_stock(5); minus_stock(12);
    minus_stock(7); minus_stock(20);minus_stock(14); minus_stock(17);
    this->cheese_burger +=1;
    buy.buy_id.push_back(105);
}

void my_burger::on_burger_6_clicked()
{
    int flag;
    flag = check_zero_stock(2);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(3);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(8);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(10);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(22);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(14);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(17);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Chicken burger set");
    minus_stock(2); minus_stock(3); minus_stock(8);
    minus_stock(10); minus_stock(22);minus_stock(14); minus_stock(17);
    this->chicken_burger += 1;
    buy.buy_id.push_back(106);
}

void my_burger::on_burger_7_clicked()
{
    int flag;
    flag = check_zero_stock(1);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(4);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(9);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(11);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(19);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(14);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(17);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Bulgogi burger set");
    minus_stock(1); minus_stock(4); minus_stock(9);
    minus_stock(11); minus_stock(19);minus_stock(14); minus_stock(17);
    this->bulgogi_burger += 1;
    buy.buy_id.push_back(107);
}

void my_burger::on_burger_8_clicked()
{
    int flag;
    flag = check_zero_stock(2);
    if(flag == -1){
        //여기에 재료 없다고 메세지박스 띄우기
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(6);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(13);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(7);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(21);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(14);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    flag = check_zero_stock(17);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Shrimp burger set");
    minus_stock(2); minus_stock(6); minus_stock(13);
    minus_stock(7); minus_stock(21);minus_stock(14); minus_stock(17);
    this->shrimp_burger += 1;
    buy.buy_id.push_back(108);
}

void my_burger::on_burger_9_clicked()
{
    int flag = check_zero_stock_side(15);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("CheeseStick");
    buy.buy_id.push_back(15);
}

void my_burger::on_burger_10_clicked()
{
    int flag = check_zero_stock_side(16);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Chicken Nuggets");
    buy.buy_id.push_back(16);
}

void my_burger::on_burger_11_clicked()
{
    int flag = check_zero_stock_side(17);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Coke");
    buy.buy_id.push_back(17);
}

void my_burger::on_burger_12_clicked()
{
    int flag = check_zero_stock_side(18);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    ui->listWidget->addItem("Sprite");
    buy.buy_id.push_back(18);
}

void my_burger::write_buy_arr(){

    QFile *file = new QFile;
    QString filename = "buy_arr.txt";
    file->setFileName(filename);
    if(!file->open(QIODevice::WriteOnly)){
        cout<<"buy arr file can't open"<<endl;
        exit(-1);
    }
    for(vector<int>::size_type i=0;i<buy.buy_id.size();++i){
        QString str = QString::number(this->buy.buy_id[i]);
        file->write(str.toUtf8());
        file->write(" ");
    }
    file->close();
}

void my_burger::on_delete_button_clicked()
{
    QModelIndexList selectedList = ui->listWidget->selectionModel()->selectedIndexes();
    std::sort(selectedList.begin(),selectedList.end(),[](const QModelIndex& a,
              const QModelIndex& b)->bool{return a.row()>b.row();});
    for(const QModelIndex& singleIndex : selectedList)
    ui->listWidget->model()->removeRow(singleIndex.row());
    buy.delete_food(selectedList.at(0).row());

}

void my_burger::on_credit_clicked()
{

    write_buy_arr();
    write_burger_sales();
    Payment = new payment(this);
    Payment->show();
    hide();

}

void my_burger::on_my_back_clicked()
{
    mainwindow = new MainWindow(this);
    mainwindow->show();
    hide();
}
