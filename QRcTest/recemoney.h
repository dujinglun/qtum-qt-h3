#ifndef RECEMONEY_H
#define RECEMONEY_H

#include <QWidget>
#include "QRCode/qrencode.h"
namespace Ui {
class receMoney;
}

class receMoney : public QWidget
{
    Q_OBJECT

public:
    explicit receMoney(QWidget *parent = 0);
     QPixmap createQRCode(const QString &text);
    ~receMoney();
signals:
    void sendsignal();
private:
    Ui::receMoney *ui;
    void keyPressEvent( QKeyEvent *k );
 private slots :
    void returnFun();
    void GenerationTwoCode();
};

#endif // RECEMONEY_H
