#ifndef PAYCHECK_H
#define PAYCHECK_H

#include <QFrame>
#include <QEvent>


namespace Ui {
class paycheck;
}

extern QString GStrRtnPayInfo;

class csPaycheck : public QFrame
{
    Q_OBJECT
    
public:
    explicit csPaycheck(QWidget *parent = 0);
    ~csPaycheck();
    
private slots:
    void on_pushButton_clicked();

signals:
    void sendsignal();

private:
    Ui::paycheck *ui;
};

#endif // PAYCHECK_H
