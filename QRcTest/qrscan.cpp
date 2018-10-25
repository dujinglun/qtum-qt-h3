#include "qrscan.h"
#include "ui_qrscan.h"
#include <QTimer>
#include <QDebug>
#include <QKeyEvent>

QString   strQrcode;

qrscan::qrscan(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::qrscan)
{
    ui->setupUi(this);

    tickTimer = new QTimer;
    process = new QProcess;

    godieFlag = FALSE;

    tickTimer->start(1000);

    connect(tickTimer, SIGNAL(timeout()), this, SLOT(on_tickTimer_over()));

}

qrscan::~qrscan()
{
    if(process){
        delete(process);
    }
    delete ui;
}

void qrscan::on_pushButton_clicked()
{
    //this->hide();

  //  tickTimer->stop();
  //  emit sendsignal();
  //  this->close();

  //  tickTimer->stop();
    tickTimer->stop();
    emit sendsignal();
    this->close();

  //  godieFlag = true;

}



void qrscan::on_tickTimer_over()
{
static int sCount;
    QByteArray   byteArray;
    QString      str;

    QPixmap img;
    img.load(QString("/usr/image_bmp.bmp"));
    img = img.scaled(320, 240, Qt::KeepAspectRatio);


    QFont font;
    font.setPointSize(10);
    font.setFamily("Microsoft YaHei");
    font.setLetterSpacing(QFont::AbsoluteSpacing,0);


    ui->label->setPixmap(img);
    ui->label->setFont(font);
    ui->label->setText(strQrcode);

    //process->start("/root/script/getpicture.sh");/* error delay too short*/
    process->start("/root/camera");
    process->waitForFinished();

    //process->start("/root/script/qrcode.sh");
    process->start("zbarimg  -q --raw /usr/image_bmp.bmp");

    //zbarimg  --raw /usr/image_bmp.bmp

    process->waitForFinished();

    byteArray = process->readAllStandardOutput();
    process->close();

    strQrcode = QString::fromLocal8Bit(byteArray);

    if(strQrcode.length() >= 34){
        qDebug() << strQrcode;
        on_pushButton_clicked();
    }

    sCount += 1;
    qDebug() << QString("debug-%1").arg(sCount);

    if(godieFlag){

        if(process){
            delete(process);
        }
    }
}
