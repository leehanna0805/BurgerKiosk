#ifndef MONEY_H
#define MONEY_H

#include <QDialog>

namespace Ui {
class money_push;
}

class money_push : public QDialog
{
    Q_OBJECT

public:
    explicit money_push(QWidget *parent = nullptr);
    ~money_push();

    int money_50000() const;
    int money_10000() const;
    int money_5000() const;
    int money_1000() const;
    int money_500() const;
    int money_100() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::money_push *ui;
};

#endif // MONEY_H
