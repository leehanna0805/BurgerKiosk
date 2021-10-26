#include "msgdialog.h"
#include "ui_msgdialog.h"

class Mainwindow;
class QProgressBar;
class QPropertyAnimation;

msgDialog::msgDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::msgDialog)
{
    ui->setupUi(this);
    act_progressive();

}

msgDialog::~msgDialog()
{
    delete ui;

 }


void msgDialog::act_progressive(){

  // this->progressBar->Incre
    /*  QProgressBar progressBar;
    progressBar.setMinimum(0);
    progressBar.setMaximum(100);
    for(int i = 0; i <100; ++i){
        progressBar.setValue(i);
    }


   QPropertyAnimation *animation = new QPropertyAnimation((QProgressBar*)this, "value");

   animation->setEasingCurve(QEasingCurve(QEasingCurve::OutQuad));
   animation->setStartValue(0);
   animation->setEndValue(100);
   animation->setDuration(2000);


  connect(animation, SIGNAL(finished()), animation, SLOT(deleteLater()));
  animation->start();
  */

}

void msgDialog::on_pushButton_clicked()
{
    mainwindow = new MainWindow(this);
    mainwindow->show();
    hide();
}
