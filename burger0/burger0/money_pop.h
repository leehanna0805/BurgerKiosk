#ifndef MONEY_POP_H
#define MONEY_POP_H

#include <QDialog>

namespace Ui {
class money_pop;
}

class money_pop : public QDialog
{
    Q_OBJECT

public:
    explicit money_pop(QWidget *parent = nullptr);
    ~money_pop();

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
    Ui::money_pop *ui;
};

#endif // MONEY_POP_H
