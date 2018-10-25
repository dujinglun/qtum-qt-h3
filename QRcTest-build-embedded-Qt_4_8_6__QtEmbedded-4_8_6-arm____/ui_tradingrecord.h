/********************************************************************************
** Form generated from reading UI file 'tradingrecord.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADINGRECORD_H
#define UI_TRADINGRECORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tradingRecord
{
public:
    QTableView *tableView;
    QPushButton *pushButton_down;
    QPushButton *pushButton_up;
    QPushButton *pushButton_return;
    QPushButton *pushButton_see;

    void setupUi(QWidget *tradingRecord)
    {
        if (tradingRecord->objectName().isEmpty())
            tradingRecord->setObjectName(QString::fromUtf8("tradingRecord"));
        tradingRecord->resize(320, 240);
        tradingRecord->setMinimumSize(QSize(320, 240));
        tradingRecord->setMaximumSize(QSize(320, 320));
        tradingRecord->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        tableView = new QTableView(tradingRecord);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 221, 171));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_down = new QPushButton(tradingRecord);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(240, 140, 80, 40));
        pushButton_down->setMinimumSize(QSize(80, 40));
        pushButton_down->setMaximumSize(QSize(80, 40));
        pushButton_down->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_up = new QPushButton(tradingRecord);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(240, 10, 80, 40));
        pushButton_up->setMinimumSize(QSize(80, 40));
        pushButton_up->setMaximumSize(QSize(80, 40));
        pushButton_up->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        pushButton_return = new QPushButton(tradingRecord);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(160, 190, 80, 40));
        pushButton_return->setMinimumSize(QSize(80, 40));
        pushButton_return->setMaximumSize(QSize(80, 40));
        pushButton_return->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);"));
        pushButton_see = new QPushButton(tradingRecord);
        pushButton_see->setObjectName(QString::fromUtf8("pushButton_see"));
        pushButton_see->setGeometry(QRect(10, 190, 80, 40));
        pushButton_see->setMinimumSize(QSize(80, 40));
        pushButton_see->setMaximumSize(QSize(80, 40));
        pushButton_see->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));

        retranslateUi(tradingRecord);

        QMetaObject::connectSlotsByName(tradingRecord);
    } // setupUi

    void retranslateUi(QWidget *tradingRecord)
    {
        tradingRecord->setWindowTitle(QApplication::translate("tradingRecord", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QApplication::translate("tradingRecord", "down", 0, QApplication::UnicodeUTF8));
        pushButton_up->setText(QApplication::translate("tradingRecord", "up", 0, QApplication::UnicodeUTF8));
        pushButton_return->setText(QApplication::translate("tradingRecord", "return", 0, QApplication::UnicodeUTF8));
        pushButton_see->setText(QApplication::translate("tradingRecord", "check", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tradingRecord: public Ui_tradingRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADINGRECORD_H
