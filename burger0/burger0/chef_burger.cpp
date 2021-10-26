#include "chef_burger.h"
#include "ui_chef_burger.h"
#include <QFile>
#include <QMessageBox>
//이게 수제버거

chef_burger::chef_burger(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chef_burger)
{
    ui->setupUi(this);
    init_ingredient();
}

chef_burger::~chef_burger()
{
    delete ui;
}

void chef_burger::init_ingredient(){    //이정보들을 ingredient 클래스를 만들어서 클래스 배열에 저장.
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

int chef_burger::check_zero_stock(int id){
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

void chef_burger::on_pushButton_clicked()
{
          //my burger랑 코드 다름.
    int flag = check_zero_stock(1);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(1);
    ui->receipt->addItem("brioche bun");
}

void chef_burger::on_pushButton_2_clicked()
{

    int flag = check_zero_stock(2);
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(2);
    ui->receipt->addItem("potato bun");
}

void chef_burger::on_pushButton_3_clicked()
{

    int flag = check_zero_stock(5);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(5);
    ui->receipt->addItem("beef patty");
}

void chef_burger::on_pushButton_4_clicked()
{
    int flag = check_zero_stock(3);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(3);

    ui->receipt->addItem("chicken patty");
}

void chef_burger::on_pushButton_5_clicked()
{

    int flag = check_zero_stock(6);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(6);
    ui->receipt->addItem("shrimp patty");
}

void chef_burger::on_pushButton_6_clicked()
{
    int flag = check_zero_stock(4);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(4);
    ui->receipt->addItem("bulgoggi patty");
}

void chef_burger::on_pushButton_7_clicked()
{
    int flag = check_zero_stock(7);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(7);
    ui->receipt->addItem("lettuce");
}

void chef_burger::on_pushButton_8_clicked()
{
    int flag = check_zero_stock(8);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(8);
    ui->receipt->addItem("onion");
}

void chef_burger::on_pushButton_9_clicked()
{

    int flag = check_zero_stock(11);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(11);
    ui->receipt->addItem("pickle");
}

void chef_burger::on_pushButton_10_clicked()
{

    int flag = check_zero_stock(9);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(9);
    ui->receipt->addItem("tomato");
}

void chef_burger::on_pushButton_11_clicked()
{

    int flag = check_zero_stock(19);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(19);
    ui->receipt->addItem("barbeque sauce");
}

void chef_burger::on_pushButton_12_clicked()
{

    int flag = check_zero_stock(21);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(21);
    ui->receipt->addItem("mayonnaise sause");
}

void chef_burger::on_pushButton_13_clicked()
{

    int flag = check_zero_stock(20);            //이거 다 복붙하기.
    if(flag == -1){
       QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(20);
     ui->receipt->addItem("cheese sauce");
}

void chef_burger::on_pushButton_14_clicked()
{
    int flag = check_zero_stock(22);            //이거 다 복붙하기.
    if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
        return;
    }
    buy.buy_id.push_back(22);
     ui->receipt->addItem("salsa sauce");
}

void chef_burger::on_pushButton_20_clicked()
{
     int flag = check_zero_stock(14);            //이거 다 복붙하기.
     if(flag == -1){
         QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(14);
      ui->receipt->addItem("french fries");
}

void chef_burger::on_pushButton_21_clicked()
{

     int flag = check_zero_stock(15);            //이거 다 복붙하기.
     if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(15);
      ui->receipt->addItem("cheese stick");
}

void chef_burger::on_pushButton_22_clicked()
{
     ui->receipt->addItem("chicken nugget");
     int flag = check_zero_stock(16);            //이거 다 복붙하기.
     if(flag == -1){
         QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(16);
     ui->receipt->addItem("chicken nugget");
}

void chef_burger::on_pushButton_15_clicked()
{
     ui->receipt->addItem("coke");
     int flag = check_zero_stock(17);            //이거 다 복붙하기.
     if(flag == -1){
        QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(17);
     ui->receipt->addItem("coke");
}

void chef_burger::on_pushButton_16_clicked()
{
     ui->receipt->addItem("sprite");
     int flag = check_zero_stock(18);            //이거 다 복붙하기.
     if(flag == -1){
         QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(18);
      ui->receipt->addItem("sprite");
}

void chef_burger::on_pushButton_17_clicked()
{

     int flag = check_zero_stock(10);            //이거 다 복붙하기.
     if(flag == -1){
         QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(10);
     ui->receipt->addItem("cucumber");
}

void chef_burger::on_pushButton_18_clicked()
{

     int flag = check_zero_stock(12);            //이거 다 복붙하기.
     if(flag == -1){
         QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(12);
      ui->receipt->addItem("cheese");
}

void chef_burger::on_pushButton_19_clicked()
{
     int flag = check_zero_stock(13);            //이거 다 복붙하기.
     if(flag == -1){
         QMessageBox::critical(this,"error","no stock");
         return;
     }
     buy.buy_id.push_back(13);

     ui->receipt->addItem("bacon");
}

void chef_burger::write_buy_arr(){
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

void chef_burger::on_cancelButton_clicked()
{
    QModelIndexList selectedList = ui->receipt->selectionModel()->selectedIndexes();
    std::sort(selectedList.begin(),selectedList.end(),[](const QModelIndex& a,
              const QModelIndex& b)->bool{return a.row()>b.row();});
    for(const QModelIndex& singleIndex : selectedList)
    ui->receipt->model()->removeRow(singleIndex.row());
}

void chef_burger::on_creditButton_clicked()
{
    write_buy_arr();
    Payment = new payment(this);
    Payment -> show();
    hide();
}

void chef_burger::on_backButton_clicked()
{
    mainwindow = new MainWindow(this);
    mainwindow->show();
    hide();
}
