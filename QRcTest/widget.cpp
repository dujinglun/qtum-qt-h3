#include "widget.h"
#include "ui_widget.h"

#include "function.h"
#include <QPushButton>
#include <QFont>
#include <QDebug>
#include <QKeyEvent>
#include <QProcess>

#define   PRECONTROL    123
#define   NEXTCONTROL   125
#define   TRUECLICK     43

QString input;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(320,240);

    //ui->horizontalLayout->setContentsMargins(0, 0, 0, 0);
    //ui->horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
    //ui->horizontalLayout_3->setContentsMargins(0, 0, 0 ,0);
    //ui->horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
    //ui->verticalLayout_5->setContentsMargins(0, 0, 0 ,0);

    ui->pushButton_num_0->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_1->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_2->setContentsMargins(0, 0 ,0 ,0);
    ui->pushButton_num_3->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_4->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_5->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_6->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_7->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_8->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_9->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_10->setContentsMargins(0, 0, 0, 0);
    ui->pushButton_num_11->setContentsMargins(0, 0, 0, 0);

    ui->pushButton_num_0->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_1->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_2->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_3->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_4->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_5->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_6->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_7->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_8->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_9->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_10->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_num_11->setStyleSheet("QPushButton{border: 2px solid white;}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_false->setStyleSheet("QPushButton{background-color: rgb(255, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_true->setStyleSheet("QPushButton{background-color: rgb(85, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_close_qtum->setStyleSheet("QPushButton{background-color: rgb(185, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");

    connect(ui->pushButton_true, SIGNAL(clicked(bool)), this, SLOT(pushButton_true()));
    connect(ui->pushButton_num_0, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_1, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_2, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_3, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_4, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_5, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_6, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_7, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_8, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_9, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_10, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_num_11, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_false, SIGNAL(clicked(bool)), this, SLOT(password()));
    connect(ui->pushButton_close_qtum, SIGNAL(clicked(bool)), this ,SLOT(closeQtum()));

     ui->label_view->setAlignment(Qt::AlignRight | Qt::AlignBottom);
     ui->label_view->clear();
     QFont font;
     //设置文字字体
     font.setFamily("宋体");
     //设置文字大小为50像素
     font.setPixelSize(30);
     ui->label_view->setFont(font);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::reshow() {
    this->show();
}

void Widget::pushButton_true()
{
   if(!input.compare("12")) {
       input.clear();
       ui->label_view->clear();
       fun =new function();
       connect(fun,SIGNAL(sendsignal()), this, SLOT(reshow()));
       fun->show();
       this->hide();
   } else {
       input.clear();
       ui->label_view->clear();
   }
}
void Widget::password() {

      QPushButton *currentButton=qobject_cast<QPushButton*>(this->sender());
      if(currentButton)
      {
          if(currentButton == ui->pushButton_num_0) {
              input.append('0');
              ui->label_view->setText(input);
          }
          if(currentButton == ui->pushButton_num_1) {
               input.append('1');
               ui->label_view->setText(input);
          }
          if(currentButton == ui->pushButton_num_2) {
               input.append('2');
               ui->label_view->setText(input);
          }
          if(currentButton == ui->pushButton_num_3) {
               input.append('3');
               ui->label_view->setText(input);
          }
          if(currentButton == ui->pushButton_num_4) {
               input.append('4');
               ui->label_view->setText(input);
          }
          if(currentButton == ui->pushButton_num_5) {
              input.append('5');
              ui->label_view->setText(input);
          }

          if(currentButton == ui->pushButton_num_6) {
              input.append('6');
              ui->label_view->setText(input);
          }
          if(currentButton == ui->pushButton_num_7) {
              input.append('7');
              ui->label_view->setText(input);
          }
          if(currentButton==ui->pushButton_num_8) {
              input.append('8');
              ui->label_view->setText(input);
          }
          if(currentButton == ui->pushButton_num_9) {
             input.append('9');
             ui->label_view->setText(input);
          }
          if(currentButton==ui->pushButton_num_10) {
             input.append('*');
             ui->label_view->setText(input);
          }
          if(currentButton==ui->pushButton_num_11) {
             input.append('#');
             ui->label_view->setText(input);
          }
          if(currentButton==ui->pushButton_false) {
             input.clear();
             ui->label_view->setText(input);
          }
      }
}
void Widget::keyPressEvent( QKeyEvent *k )
{
    if(k->key() == PRECONTROL) {
      this->focusNextPrevChild(false);
    }
    if(k->key() == NEXTCONTROL)
    {
      this->focusNextPrevChild(true);
    }

    if(k->key() == TRUECLICK) {
       QWidget *current_focus_w = this->focusWidget();
       if(!current_focus_w) {
           return;
       }
       QPushButton * btn = qobject_cast<QPushButton*>(current_focus_w);
       if(btn) {
           btn->click();
       }

    }

}

void Widget::closeQtum()
{
    QProcess process;
  //  process.start("/apps/qtum/qtum-cli -testnet stop");
  //   process.start("/home/bc/qtum-0.15.1/bin/qtum-cli -testnet -datadir=/home/pi/.qtum stop");
  //  process.waitForStarted();
  //  process.waitForFinished();

}

void Widget::on_pushButton_close_qtum_clicked()
{
    this->close();
}
