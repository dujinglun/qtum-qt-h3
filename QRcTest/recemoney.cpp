#include "recemoney.h"
#include "ui_recemoney.h"
#include <QProcess>
#include <QDebug>
#include <QKeyEvent>

#define   PRECONTROL    123
#define   NEXTCONTROL   125
#define   TRUECLICK     43

receMoney::receMoney(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::receMoney)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(320, 240);
    ui->pushButton_return->setStyleSheet("QPushButton{background-color: rgb(85, 170, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    ui->pushButton->setStyleSheet("QPushButton{background-color: rgb(85, 255, 0);}QPushButton:focus{ border-color: rgb(0, 160, 230); background: rgb(85, 85, 85); }");
    connect(ui->pushButton_return, SIGNAL(clicked(bool)), SLOT(returnFun()));
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(GenerationTwoCode()));
    ui->pushButton->setFocus();
    ui->lineEdit->setFocusPolicy(Qt::NoFocus);
    QProcess process;
    // process.start("/apps/qtum/qtum-cli -testnet getnewaddress");
    process.start("/home/bc/qtum-0.15.1/bin/qtum-cli -testnet -datadir=/home/pi/.qtum getnewaddress");
    process.waitForStarted();
    process.waitForFinished();

    QByteArray byteArray = process.readAllStandardOutput();
    QString str = QString::fromLocal8Bit(byteArray);
    ui->lineEdit->setText(str);
    process.close();
}

receMoney::~receMoney()
{
    delete ui;
}
void receMoney::returnFun() {
    emit sendsignal();
    this->close();
}
QPixmap receMoney::createQRCode(const QString &text)
{
    int margin = 2;
    if (text.length() == 0){
        return QPixmap();
    }
    QRcode *qrcode = QRcode_encodeString(text.toLocal8Bit(), 2, QR_ECLEVEL_L, QR_MODE_8, 0);
    if (qrcode == NULL) {
        return QPixmap();
    }
    unsigned char *p, *q;
    p = NULL;
    q = NULL;
    int x, y, bit;
    int realwidth;

    realwidth = qrcode->width;
    QImage image = QImage(realwidth, realwidth, QImage::Format_Indexed8);
    QRgb value;
    value = qRgb(255,255,255);
    image.setColor(0, value);
    value = qRgb(0,0,0);
    image.setColor(1, value);
    image.setColor(2, value);
    image.fill(0);
    p = qrcode->data;
    for(y=0; y<qrcode->width; y++) {
        bit = 7;
        q += margin / 8;
        bit = 7 - (margin % 8);
        for(x=0; x<qrcode->width; x++)  {
            if ((*p & 1) << bit)
                image.setPixel(x, y, 1);
            else
                image.setPixel(x, y, 0);
            bit--;
            if(bit < 0){
                q++;
                bit = 7;
            }
            p++;
        }
    }
    return QPixmap::fromImage(image.scaledToWidth(200));
}
void receMoney::GenerationTwoCode() {


        QString text = ui->lineEdit->text();
        ui->label->setFixedSize(200, 200);
        ui->label->setPixmap(createQRCode(text));
}
void receMoney::keyPressEvent( QKeyEvent *k )
{
    if(k->key() == PRECONTROL) {
      this->focusNextPrevChild(false);
    }
    if(k->key() == NEXTCONTROL) {
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
