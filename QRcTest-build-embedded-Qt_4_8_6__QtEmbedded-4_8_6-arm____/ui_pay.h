/********************************************************************************
** Form generated from reading UI file 'pay.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAY_H
#define UI_PAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pay
{
public:
    QPushButton *pushButton_pay;
    QPushButton *pushButton_return;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_money;
    QPushButton *pushButton_2Code;

    void setupUi(QWidget *pay)
    {
        if (pay->objectName().isEmpty())
            pay->setObjectName(QString::fromUtf8("pay"));
        pay->resize(320, 240);
        pay->setMinimumSize(QSize(240, 240));
        pay->setMaximumSize(QSize(320, 320));
        pay->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        pushButton_pay = new QPushButton(pay);
        pushButton_pay->setObjectName(QString::fromUtf8("pushButton_pay"));
        pushButton_pay->setGeometry(QRect(90, 200, 80, 40));
        pushButton_pay->setMinimumSize(QSize(80, 40));
        pushButton_pay->setMaximumSize(QSize(80, 40));
        pushButton_pay->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        pushButton_return = new QPushButton(pay);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(10, 200, 75, 41));
        pushButton_return->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        label = new QLabel(pay);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        lineEdit = new QLineEdit(pay);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 311, 31));
        QFont font;
        font.setPointSize(7);
        lineEdit->setFont(font);
        lineEdit->setMouseTracking(false);
        lineEdit->setAcceptDrops(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit->setEchoMode(QLineEdit::Normal);
        label_2 = new QLabel(pay);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 101, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        lineEdit_money = new QLineEdit(pay);
        lineEdit_money->setObjectName(QString::fromUtf8("lineEdit_money"));
        lineEdit_money->setGeometry(QRect(10, 100, 101, 31));
        lineEdit_money->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_money->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_money->setEchoMode(QLineEdit::Normal);
        pushButton_2Code = new QPushButton(pay);
        pushButton_2Code->setObjectName(QString::fromUtf8("pushButton_2Code"));
        pushButton_2Code->setGeometry(QRect(10, 140, 80, 40));
        pushButton_2Code->setMinimumSize(QSize(80, 40));
        pushButton_2Code->setMaximumSize(QSize(80, 40));
        pushButton_2Code->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        QWidget::setTabOrder(pushButton_2Code, pushButton_pay);
        QWidget::setTabOrder(pushButton_pay, pushButton_return);
        QWidget::setTabOrder(pushButton_return, lineEdit_money);
        QWidget::setTabOrder(lineEdit_money, lineEdit);

        retranslateUi(pay);

        QMetaObject::connectSlotsByName(pay);
    } // setupUi

    void retranslateUi(QWidget *pay)
    {
        pay->setWindowTitle(QApplication::translate("pay", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_pay->setText(QApplication::translate("pay", "PAY!", 0, QApplication::UnicodeUTF8));
        pushButton_return->setText(QApplication::translate("pay", "return", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pay", "Address", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pay", "Money:", 0, QApplication::UnicodeUTF8));
        pushButton_2Code->setText(QApplication::translate("pay", "SCAN", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pay: public Ui_pay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAY_H
