#ifndef QRSCAN_H
#define QRSCAN_H

#include <QFrame>
#include<QProcess>

extern QString   strQrcode;

namespace Ui {
class qrscan;
}

class qrscan : public QFrame
{
    Q_OBJECT
    
public:
    explicit qrscan(QWidget *parent = 0);
    ~qrscan();
    
private slots:
    void on_pushButton_clicked();
     void on_tickTimer_over();

signals:
    void sendsignal();

private:
    QTimer *  tickTimer;
    QProcess*  process;

    bool  godieFlag;


private:
    Ui::qrscan *ui;
};

#endif // QRSCAN_H
