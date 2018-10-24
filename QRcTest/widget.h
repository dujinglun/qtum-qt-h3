#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "function.h"

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
      function *fun;
    ~Widget();



private:
    Ui::Widget *ui;
    void keyPressEvent( QKeyEvent *k );
private slots:
    void  pushButton_true();
    void  password();
    void  reshow();
    void  closeQtum();
    void on_pushButton_close_qtum_clicked();
};

#endif // WIDGET_H
