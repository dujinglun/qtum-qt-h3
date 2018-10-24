#include "function.h"
#include "ui_function.h"
#include <QProcess>
#include <QDebug>
#include <QKeyEvent>

#define   PRECONTROL    123
#define   NEXTCONTROL   125
#define   TRUECLICK     43

function::function(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::function)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(320,240);
    connect(ui->pushButton_receMoney, SIGNAL(clicked(bool)), this, SLOT(clock_receiveMoney()));
    connect(ui->pushButton_pay, SIGNAL(clicked(bool)), this, SLOT(clock_moneypay()));
    connect(ui->pushButton_contract, SIGNAL(clicked(bool)), this, SLOT(clock_constract()));
    connect(ui->pushButton_record, SIGNAL(clicked(bool)), this, SLOT(clock_record()));
    connect(ui->pushButton_return, SIGNAL(clicked(bool)), this, SLOT(returnFun()));
    connect(ui->pushButton_balance, SIGNAL(clicked(bool)), this, SLOT(balance()));
    ui->pushButton_receMoney->setStyleSheet("QPushButton{background-color: rgb(0, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_pay->setStyleSheet("QPushButton{background-color: rgb(85, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_contract->setStyleSheet("QPushButton{background-color: rgb(255, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_record->setStyleSheet("QPushButton{background-color: rgb(255, 170, 127);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_return->setStyleSheet("QPushButton{background-color: rgb(85, 255, 127);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_balance->setStyleSheet("QPushButton{background-color: rgb(85, 170, 127);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
//     ui->label_viewBalance->setAlignment( Qt::AlignBottom);
    QFont font;
    //设置文字字体
    font.setFamily("宋体");
    //设置文字大小为50像素
    font.setPixelSize(20);
    ui->label_viewBalance->setFont(font);

}

function::~function()
{
    delete ui;
}
void function::clock_receiveMoney()
{
   rece =new receMoney();
   rece->show();
   connect(rece, SIGNAL(sendsignal()), this, SLOT(reshow()));
   this->hide();
}
void function::clock_moneypay() {
    paymoney = new pay();
    paymoney->show();
    connect(paymoney, SIGNAL(sendsignal()), this, SLOT(reshow()));
    this->hide();
}

void function::reshow()
{
    this->show();
}
void function::clock_constract()
{
    contractMoney = new contract();
    contractMoney->show();
    this->hide();
    connect(contractMoney, SIGNAL(sendsignal()), this, SLOT(reshow()));
}
void function::clock_record()
{
    record = new tradingRecord();
    record->show();
    this->hide();
    connect(record, SIGNAL(sendsignal()), this, SLOT(reshow()));
}
void function::returnFun()
{
    emit sendsignal();
    this->close();
}
void function::balance()
{
    QProcess     process;
    QByteArray   byteArray;
    QString      str;

    process.start("/home/bc/qtum-0.15.1/bin/qtum-cli -testnet -datadir=/home/pi/.qtum getbalance");

    process.waitForStarted();
    process.waitForFinished();

    byteArray = process.readAllStandardOutput();
    str = QString::fromLocal8Bit(byteArray);
    process.close();
    ui->label_viewBalance->setText(str);
}
void function::keyPressEvent( QKeyEvent *k )
{
    if(k->key() == PRECONTROL) {
      this->focusNextPrevChild(false);
    }
    if(k->key() == NEXTCONTROL) {
      this->focusNextPrevChild(true);
    }
    if(k->key() == TRUECLICK) {
       QWidget *currentFocusW = this->focusWidget();
       if(!currentFocusW) {
           return;
       }
       QPushButton * btn = qobject_cast<QPushButton*>(currentFocusW);
       if(btn) {
           btn->click();
       }
    }

}


void function::on_pushButton_return_clicked()
{

}

void function::on_pushButton_receMoney_clicked()
{

}
