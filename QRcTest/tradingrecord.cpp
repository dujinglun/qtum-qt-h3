#include "tradingrecord.h"
#include "ui_tradingrecord.h"
#include <QProcess>
#include <QDebug>
#include <QKeyEvent>
#include <qjson4/QJsonArray.h>
#include <qjson4/QJsonDocument.h>
#include <qjson4/QJsonObject.h>
#include <qjson4/QJsonParseError.h>
#include <qjson4/QJsonParser.h>
#include <qjson4/QJsonRoot.h>
#include <qjson4/QJsonValue.h>
#include <qjson4/QJsonValueRef.h>


#include <QStandardItemModel>
#include <QPoint>

#define   PRECONTROL    123
#define   NEXTCONTROL   125
#define   TRUECLICK     43

tradingRecord::tradingRecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tradingRecord)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(320, 240);
    ui->pushButton_down->setStyleSheet("QPushButton{background-color: rgb(255, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_up->setStyleSheet("QPushButton{background-color: rgb(255, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_return->setStyleSheet("QPushButton{background-color: rgb(85, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_see->setStyleSheet("QPushButton{background-color: rgb(85, 255, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_see->setFocus();

    connect(ui->pushButton_return,SIGNAL(clicked(bool)),SLOT(returnFun()));
    connect(ui->pushButton_see,SIGNAL(clicked(bool)),SLOT(see()));
    connect(ui->pushButton_down,SIGNAL(clicked(bool)),this, SLOT(trableDown()));
    connect(ui->pushButton_up,SIGNAL(clicked(bool)),this,SLOT(trableUp()));

    ui->tableView->setFocusPolicy(Qt::NoFocus);

}

tradingRecord::~tradingRecord()
{
    delete ui;
}
void tradingRecord::returnFun()
{
    emit sendsignal();
    this->close();
}
void tradingRecord::see() {
    QProcess                  process;
    QJsonParseError           error;
    QStandardItemModel*       model = new QStandardItemModel();
    QString                   str;
    QByteArray                byteArray;
    QJsonDocument             doc ;
   // process.start("/apps/qtum/qtum-cli -testnet listtransactions");
    process.start("/home/bc/qtum-0.15.1/bin/qtum-cli -testnet -datadir=/home/pi/.qtum listtransactions");
    process.waitForStarted();
    process.waitForFinished();

    byteArray = process.readAllStandardOutput();
    doc = QJsonDocument::fromJson(byteArray, &error);

    model->setColumnCount(2);
    model->setHeaderData(0,Qt::Horizontal, "方式");
    model->setHeaderData(1,Qt::Horizontal, "金额");

    if(!doc.isNull() && error.error == QJsonParseError::NoError) {
        QJsonArray array = doc.array();
        model->setRowCount(array.size());

        for(int i=0; i< array.size(); i++) {
            QJsonObject object = array.at(i).toObject();  // 转化为对象
            str = QString::number(object.take("amount").toDouble());

            model->setItem(i, 0, new QStandardItem(object.take("category").toString()));
            model->setItem(i, 1, new QStandardItem(str));
        }
        ui->tableView->setModel(model);
     }
    process.close();
}
void tradingRecord::keyPressEvent( QKeyEvent *k ) {
    if(k->key() == PRECONTROL) {
        this->focusNextPrevChild(false);//按A时焦点切换至上一部件
    }
    if(k->key() == NEXTCONTROL) {
        this->focusNextPrevChild(true);//按D时焦点切换至下一部件
    }
    if(k->key() == TRUECLICK) {
        QWidget *current_focus_w = this->focusWidget();//获取当前焦点的控件
        if(!current_focus_w) {
           return;
        }
        QPushButton * btn = qobject_cast<QPushButton*>(current_focus_w);
        if(btn) {
           btn->click();
        }
    }
}
void tradingRecord::trableDown()
{
    int a= ui->tableView->verticalScrollBar()->value();
    ui->tableView->verticalScrollBar()->setValue(a+2);

}
void tradingRecord::trableUp()
{
    int a= ui->tableView->verticalScrollBar()->value();
    ui->tableView->verticalScrollBar()->setValue(a-2);

}

