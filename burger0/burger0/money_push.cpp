#include "money_push.h"
#include "ui_money_push.h"

money_push::money_push(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::money_push)
{
    ui->setupUi(this);
}

money_push::~money_push()
{
    delete ui;
}

void money_push::on_buttonBox_accepted()
{
    accept();
}

void money_push::on_buttonBox_rejected()
{
    reject();
}

int money_push ::money_50000() const
{
    return ui->money_50000->value();
}
int money_push:: money_10000() const
{
    return ui->money_10000->value();
}
int money_push :: money_5000() const
{
    return ui->money_5000->value();
}
int money_push :: money_1000() const
{
    return ui->money_1000->value();
}
int money_push :: money_500() const
{
    return ui->money_500->value();
}
int money_push :: money_100() const
{
    return ui->money_100->value();
}
