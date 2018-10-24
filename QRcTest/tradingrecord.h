#ifndef TRADINGRECORD_H
#define TRADINGRECORD_H

#include <QWidget>
#include <QScrollBar>
namespace Ui {
class tradingRecord;
}

class tradingRecord : public QWidget
{
    Q_OBJECT

public:
    explicit tradingRecord(QWidget *parent = 0);
    ~tradingRecord();

signals:
    void sendsignal();

private:
    Ui::tradingRecord *ui;
    void keyPressEvent(QKeyEvent *k);

private slots :
   void returnFun();
   void see();
   void trableUp();
   void trableDown();
};

#endif // TRADINGRECORD_H
