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
    QProcess  process;

    QApplication a(argc, argv);
    QWSServer::setCursorVisible(false);

#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
#endif

    qApp->setFont(QFont("Microsoft YaHei", 10));

    process.start("/root/script/qtumdstart.sh" );

    QPixmap pixmap(":/new/prefix1/image/open.png");

    QSplashScreen screen(pixmap);
    screen.show();
    screen.showMessage("正在打开qtumCore同步数据，请稍等……00");


    Widget w;
    screen.finish(&w);

    w.show();


    return a.exec();
}
