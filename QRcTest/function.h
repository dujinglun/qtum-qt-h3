#ifndef FUNCTION_H
#define FUNCTION_H

#include <QWidget>
#include "recemoney.h"
#include "pay.h"
#include "contract.h"
#include "tradingrecord.h"

namespace Ui {
class function;
}

class function : public QWidget
{
    Q_OBJECT

public:
    explicit function(QWidget *parent = 0);
    receMoney *rece;
    pay      *paymoney;
    contract  *contractMoney;
    tradingRecord  *record;
    ~function();
signals:
    void sendsignal();
private:
    Ui::function *ui;
    void keyPressEvent( QKeyEvent *k );


private slots:
    void clock_receiveMoney();
    void clock_moneypay();
    void clock_constract();
    void clock_record();
    void reshow();
    void returnFun();
    void balance();
    void on_pushButton_return_clicked();
    void on_pushButton_receMoney_clicked();
};

#endif // FUNCTION_H
