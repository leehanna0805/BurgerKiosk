#include "money_pop.h"
#include "ui_money_pop.h"

money_pop::money_pop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::money_pop)
{
    ui->setupUi(this);
}

money_pop::~money_pop()
{
    delete ui;
}


void money_pop::on_buttonBox_accepted()
{
    accept();
}

void money_pop::on_buttonBox_rejected()
{
    reject();
}

int money_pop ::money_50000() const
{
    return ui->money_50000->value();
}
int money_pop:: money_10000() const
{
    return ui->money_10000->value();
}
int money_pop :: money_5000() const
{
    return ui->money_5000->value();
}
int money_pop :: money_1000() const
{
    return ui->money_1000->value();
}
int money_pop :: money_500() const
{
    return ui->money_500->value();
}
int money_pop :: money_100() const
{
    return ui->money_100->value();
}
