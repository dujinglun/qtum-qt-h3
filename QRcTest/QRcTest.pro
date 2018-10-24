#-------------------------------------------------
#
# Project created by QtCreator 2018-03-27T11:29:11
#
#-------------------------------------------------

QT += core gui widgets
TARGET = QRcTest

TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    function.cpp \
    recemoney.cpp \
    pay.cpp \
    tradingrecord.cpp \
    contract.cpp \
    numkeyboard.cpp \
    qrscan.cpp \
    paycheck.cpp


HEADERS  += widget.h \
    function.h \
    recemoney.h \
    pay.h \
    tradingrecord.h \
    contract.h \
    numkeyboard.h \
    qrscan.h \
    paycheck.h

FORMS    += widget.ui \
    function.ui \
    recemoney.ui \
    pay.ui \
    tradingrecord.ui \
    contract.ui \
    numkeyboard.ui \
    qrscan.ui \
    paycheck.ui


include(QRCode/QRCode.pri)
include(qjson4/QJson4.pri)

RESOURCES += \
    opensoftware.qrc


#要部署的目录
target.path=/opt/QtE-Demo/


#安装目标文件
INSTALLS+=target

OTHER_FILES += \
    msyh.ttf

