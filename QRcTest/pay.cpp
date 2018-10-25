#include "pay.h"
#include "ui_pay.h"

#include "paycheck.h"

#include <QKeyEvent>
#include <QDebug>
#include <QProcess>
#include <QEvent>

#define   PRECONTROL    123
#define   NEXTCONTROL   125
#define   TRUECLICK     43



pay::pay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pay)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(320,240);

    qrtest =new qrscan();
    connect(qrtest, SIGNAL(sendsignal()), this, SLOT(reshow()));

    payinfo =new csPaycheck();
    connect(payinfo, SIGNAL(sendsignal()), this, SLOT(reshow()));

    connect(ui->pushButton_return,SIGNAL(clicked(bool)),SLOT(returnFun()));
    connect(ui->pushButton_pay,SIGNAL(clicked(bool)),this,SLOT(moneypay()));
    connect(ui->pushButton_2Code,SIGNAL(clicked(bool)),this,SLOT(scaning()));

    ui->pushButton_return->setStyleSheet("QPushButton{background-color: rgb(85, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_pay->setStyleSheet("QPushButton{background-color: rgb(85, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton_2Code->setStyleSheet("QPushButton{background-color: rgb(85, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");

    ui->lineEdit_money->installEventFilter(this);
    ui->lineEdit_money->setText( QString("0"));

    ui->lineEdit->setFocusPolicy(Qt::NoFocus);

}

pay::~pay()
{
    delete ui;
}
void pay::returnFun()
{
    emit sendsignal();
    this->close();
}

void pay::moneypay()
{
   QString cmd = "/root/script/qtumpay.sh";
    cmd = cmd + " " + ui->lineEdit->text() + "  " + ui->lineEdit_money->text();

   QProcess process;
   QByteArray rtnBytes;

   process.start(cmd);
   process.waitForStarted();
   process.waitForFinished();

   rtnBytes = process.readAllStandardOutput();
   GStrRtnPayInfo = QString::fromLocal8Bit(rtnBytes);

   payinfo->show();
   this->hide();

}
void pay::keyPressEvent( QKeyEvent *k )
{
    if(k->key() == PRECONTROL) {
      this->focusNextPrevChild(false);
    }
    if(k->key() == NEXTCONTROL) {
      this->focusNextPrevChild(true);
    }
    if(k->key() == TRUECLICK) {
       QWidget *current_focus_w = this->focusWidget();                                   /* 获取当前焦点的控件 */
       if(!current_focus_w){
           return;
       }

       QPushButton * btn = qobject_cast<QPushButton*>(current_focus_w);
       if(btn){
           btn->click();
       }
    }
}

bool pay::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->lineEdit_money) {
        if (event->type() == QEvent::FocusIn) {     /* 然后再判断控件的具体事件 (这里指获得焦点事件)   */
            ui->lineEdit->clearFocus();//

            input = new NumKeyBoard();
            updatePosition();

            connect(input,SIGNAL(sendsignal()),this,SLOT(reshow()));
            connect(input,SIGNAL(clickNum()),this,SLOT(showNum()));

            input->show();
                                                          /* 防止weightMaxlineEdit重新获得焦点再一次激发时间  */
        }
    }

    return QWidget::eventFilter(watched, event);     // 最后将事件交给上层对话框
}
void pay::updatePosition()
{
    QWidget *widget = focusWidget();
    if (!widget) {
        return;
    }

   // QRect widgetRect = widget->rect();
    QPoint panelPos = QPoint(160,0);
  //  panelPos = widget->mapToGlobal(panelPos);
    input->move(panelPos);
}

void pay::reshow()
{
    ui->pushButton_pay->setFocus();
  //  ui->lineEdit_money->setText(input->inputNum);

    this->show();

    QString str2 = strQrcode.mid(5); /* cut the head -qtum:-*/
    ui->lineEdit->setText(str2);
}


void pay::showNum()
{
    ui->lineEdit_money->setText(input->inputNum);
}

void pay::scaning()
{
   // ui->lineEdit->setText(str);
}

void pay::on_pushButton_2Code_clicked()
{

    qrtest->setWindowFlags(Qt::FramelessWindowHint);
    qrtest->show();

    this->hide();
}

