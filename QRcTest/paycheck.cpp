#include "paycheck.h"
#include "ui_paycheck.h"


QString GStrRtnPayInfo;


csPaycheck::csPaycheck(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::paycheck)
{
    ui->setupUi(this);

    ui->textBrowser->setText(GStrRtnPayInfo);
}

csPaycheck::~csPaycheck()
{
    delete ui;
}

void csPaycheck::on_pushButton_clicked()
{
    emit sendsignal();
    this->close();
}
