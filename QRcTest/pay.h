#ifndef PAY_H
#define PAY_H

#include <QWidget>
#include "numkeyboard.h"
#include <QEvent>
#include "qrscan.h"
#include "paycheck.h"


namespace Ui {
class pay;
}

class pay : public QWidget
{
    Q_OBJECT

public:
    explicit pay(QWidget *parent = 0);

    ~pay();

signals:
    void sendsignal();
private:
    Ui::pay *ui;

    void keyPressEvent( QKeyEvent *k );

    void updatePosition();
    bool eventFilter(QObject *, QEvent *);    //注意这里软件盘相关
    NumKeyBoard *input;

    qrscan* qrtest;
    csPaycheck * payinfo;

private slots :
   void returnFun();
   void moneypay();
   void reshow();
   void showNum();
   void scaning();
   void on_pushButton_2Code_clicked();
};

#endif // PAY_H
