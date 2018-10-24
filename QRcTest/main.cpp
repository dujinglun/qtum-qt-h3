#include <QApplication>
#include <QPixmap>
#include <QProcess>
#include <QSplashScreen>
#include <QDateTime>
#include <QDebug>
#include <QByteArray>
#include <QTextCodec>
#include <QWSServer>
#include "widget.h"
#include "frmnum.h"

int main(int argc, char *argv[])
{
//    bool      ret = true;
//    bool      tui = false;
//    char      buffer[maxSize];
//    qint64    len;
//    qint64    maxSize = 1024;

    QProcess  process;

    QApplication a(argc, argv);
     QWSServer::setCursorVisible(false);
#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
#endif

    qApp->setFont(QFont("Microsoft YaHei", 10));

    process.start("echo fa | sudo -S /home/pi/qtum-0.15.1/bin/qtumd -testnet -datadir=/home/pi/.qtum &" );


    QPixmap pixmap(":/new/prefix1/image/open.png");
    QSplashScreen screen(pixmap);
    screen.show();

    screen.showMessage("正在打开qtumCore同步数据，请稍等……");

// a.processEvents();

    Widget w;
    screen.finish(&w);

    w.show();
//    while(true) {
//            /*
//             * 一个waitForReadyRead信号可能输出的是多行
//             */
//        ret = process.waitForReadyRead();
//        qDebug()<<"waitForReadyRead"<<ret;
//        if(!ret) {
//            sleep(1);
//            continue;
//        }
//        while(true) {
//           len =  process.readLine(buffer, maxSize);

//            /*
//             * 因为每一行至少还有回车换行符，因此读到0，说明waitForReadyRead超时返回false
//             */
//            if(len <= 1) {
//                break;
//            }
//            QString str = QString::fromLocal8Bit(buffer);

//            qDebug()<<str;

//            if(str.contains("dnsseed thread exit",Qt::CaseSensitive)) {
//                screen.showMessage("同步数据完成");
//                tui=true;
//                break;
//            }
//        }
//       if(tui) {
//           break;
//       }
//    }

    return a.exec();
}
