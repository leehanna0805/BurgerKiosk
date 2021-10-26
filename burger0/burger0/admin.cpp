#include "admin.h"
#include "ui_admin.h"
#include "money_push.h"
#include "money_pop.h"
#include <QFile>
#include <QTextStream>
#include <QString>

admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    setWindowTitle("stock");

    init_ingredient();
    init_cash();
    init_burger_sales();
    //stock column 생성
    QStringList title;

    //cash table 초기화
    ui->money_show->setItem(0, MONEY_50000, new QTableWidgetItem(QString::number(cash[0])));
    ui->money_show->setItem(0, MONEY_10000, new QTableWidgetItem(QString::number(cash[1])));
    ui->money_show->setItem(0, MONEY_5000, new QTableWidgetItem(QString::number(cash[2])));
    ui->money_show->setItem(0, MONEY_1000, new QTableWidgetItem(QString::number(cash[3])));
    ui->money_show->setItem(0, MONEY_500, new QTableWidgetItem(QString::number(cash[4])));
    ui->money_show->setItem(0, MONEY_100, new QTableWidgetItem(QString::number(cash[5])));

    //stock table
    //ui->stock_show->setColumnCount(6);
    //title  << "ID" << "name" << "price" <<"profit" <<"stock"<<"sales";
    //ui->stock_show->setHorizontalHeaderLabels(title);

    for(int i=0; i<22; i++){
    ui->stock_show->setItem(i, 0, new QTableWidgetItem(QString::number(ingre_arr[i].id)));
    ui->stock_show->setItem(i,1,new QTableWidgetItem(ingre_arr[i].name));
    ui->stock_show->setItem(i,2,new QTableWidgetItem(QString::number(ingre_arr[i].price)));
    ui->stock_show->setItem(i,3,new QTableWidgetItem(QString::number(ingre_arr[i].profit)));
    ui->stock_show->setItem(i,4,new QTableWidgetItem(QString::number(ingre_arr[i].stock)));
    ui->stock_show->setItem(i,5,new QTableWidgetItem(QString::number(ingre_arr[i].sales)));
    }

    ui->chef_burger_sales->setItem(0,0,new QTableWidgetItem(QString::number(cheese_burger)));
    ui->chef_burger_sales->setItem(0,1,new QTableWidgetItem(QString::number(chicken_burger)));
    ui->chef_burger_sales->setItem(0,2,new QTableWidgetItem(QString::number(bulgogi_burger)));
    ui->chef_burger_sales->setItem(0,3,new QTableWidgetItem(QString::number(shrimp_burger)));



    for(int i=0; i<22; i++){
        profit += ingre_arr[i].profit*ingre_arr[i].sales;
    }
    ui->profit->setText(QString::number(profit));



}

admin::~admin()
{
    delete ui;
}

void admin::init_ingredient(){
    int i=0;
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

void admin::init_cash(){
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

void admin::write_ingredient(){  //같은 파일에 덮어쓰기
    QFile *file = new QFile;
    QString filename = "ingredient.txt";
    file->setFileName(filename);
    if(!file->open(QIODevice::WriteOnly)){
        cout<<"file can't open"<<endl;
        exit(-1);
    }

    for(int i=0;i<22;i++){
        QString _id = QString::number(this->ingre_arr[i].id);
        QString _name = this->ingre_arr[i].name;
        QString _price = QString::number(this->ingre_arr[i].price);
        QString _profit = QString::number(this->ingre_arr[i].profit);
        QString _stock = QString::number(this->ingre_arr[i].stock);
        QString _sales = QString::number(this->ingre_arr[i].sales);

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

void admin::write_cash(){

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



void admin::on_stock_change_clicked()
{

    int stock = ui->txt_STOCK->text().toInt();
    int ID = ui->txt_ID->text().toInt();
    ingre_arr[ID-1].stock = stock;
    ui->stock_show->setItem(ID-1,4,new QTableWidgetItem(QString::number(ingre_arr[ID-1].stock)));

}

void admin::on_stock_delete_clicked()
{
    QModelIndexList indexes = ui->stock_show->selectionModel()->selectedRows();
    for (int i=indexes.count()-1; i>=0; i--)
    {
    ui->stock_show->removeRow(indexes.at(i).row());
    }
}

/*void admin::fill_cash_stock(int index, int num){ //돈 한꺼번에 수정(장 수 입력)
    this->cash[index] = num;
}*/

void admin::change_cash_stock(int index, int num){ //계산할 때 (증감값)
    if(this->cash[index]+num <0){
        cout<<"No Cash Left !!(index: "<<index<<")"<<endl;
        return;
    }
    this->cash[index] += num;
}

void admin::on_money_push_clicked()
{
    int res;
    int money_50000=0;
    int money_10000=0;
    int money_5000=0;
    int money_1000=0;
    int money_500=0;
    int money_100=0;

    money_push money(this);
    money.setWindowTitle("money_push");
    money.exec();
    if(res == QDialog::Rejected)
        return;

    money_50000 =  money.money_50000();
    money_10000 = money.money_10000();
    money_5000 = money.money_5000();
    money_1000 = money.money_1000();
    money_500 = money.money_500();
    money_100 = money.money_100();

    change_cash_stock(0,money_50000);
    change_cash_stock(1,money_10000);
    change_cash_stock(2,money_5000);
    change_cash_stock(3,money_1000);
    change_cash_stock(4,money_500);
    change_cash_stock(5,money_100);

    ui->money_show->setItem(0, MONEY_50000, new QTableWidgetItem(QString::number(cash[0])));
    ui->money_show->setItem(0, MONEY_10000, new QTableWidgetItem(QString::number(cash[1])));
    ui->money_show->setItem(0, MONEY_5000, new QTableWidgetItem(QString::number(cash[2])));
    ui->money_show->setItem(0, MONEY_1000, new QTableWidgetItem(QString::number(cash[3])));
    ui->money_show->setItem(0, MONEY_500, new QTableWidgetItem(QString::number(cash[4])));
    ui->money_show->setItem(0, MONEY_100, new QTableWidgetItem(QString::number(cash[5])));

}

void admin::on_money_pop_clicked()
{
    int res;
    int money_50000=0;
    int money_10000=0;
    int money_5000=0;
    int money_1000=0;
    int money_500=0;
    int money_100=0;

    money_push money(this);
    money.setWindowTitle("money_pop");
    money.exec();
    if(res == QDialog::Rejected)
        return;

    money_50000 =  -money.money_50000();
    money_10000 = -money.money_10000();
    money_5000 = -money.money_5000();
    money_1000 = -money.money_1000();
    money_500 = -money.money_500();
    money_100 = -money.money_100();

    change_cash_stock(0,money_50000);
    change_cash_stock(1,money_10000);
    change_cash_stock(2,money_5000);
    change_cash_stock(3,money_1000);
    change_cash_stock(4,money_500);
    change_cash_stock(5,money_100);

    ui->money_show->setItem(0, MONEY_50000, new QTableWidgetItem(QString::number(cash[0])));
    ui->money_show->setItem(0, MONEY_10000, new QTableWidgetItem(QString::number(cash[1])));
    ui->money_show->setItem(0, MONEY_5000, new QTableWidgetItem(QString::number(cash[2])));
    ui->money_show->setItem(0, MONEY_1000, new QTableWidgetItem(QString::number(cash[3])));
    ui->money_show->setItem(0, MONEY_500, new QTableWidgetItem(QString::number(cash[4])));
    ui->money_show->setItem(0, MONEY_100, new QTableWidgetItem(QString::number(cash[5])));
}

void admin::on_stock_show_cellClicked(int row, int column)
{
    QModelIndex currentIndex = ui->stock_show->currentIndex();
    ui->txt_ID->setText(ui->stock_show->item(currentIndex.row(),0)->text());
    ui->txt_NAME->setText(ui->stock_show->item(currentIndex.row(),1)->text());
    ui->txt_PRICE->setText(ui->stock_show->item(currentIndex.row(),2)->text());
    ui->txt_SALES->setText(ui->stock_show->item(currentIndex.row(),3)->text());
    ui->txt_STOCK->setText(ui->stock_show->item(currentIndex.row(),4)->text());
    ui->txt_PROFIT->setText(ui->stock_show->item(currentIndex.row(),5)->text());
}

void admin::init_burger_sales(){   //치즈 치킨 불고기 새우
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

void admin::write_burger_sales(){
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
void admin::on_admin_back_clicked()
{
    this->write_cash();
    this->write_ingredient();
    this->write_burger_sales();
    mainwindow = new MainWindow(this);
    mainwindow->show();
    hide();
}
