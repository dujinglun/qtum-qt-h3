/********************************************************************************
** Form generated from reading UI file 'paycheck.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYCHECK_H
#define UI_PAYCHECK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_paycheck
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QFrame *paycheck)
    {
        if (paycheck->objectName().isEmpty())
            paycheck->setObjectName(QString::fromUtf8("paycheck"));
        paycheck->resize(320, 200);
        paycheck->setFrameShape(QFrame::StyledPanel);
        paycheck->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(paycheck);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 150, 91, 41));
        textBrowser = new QTextBrowser(paycheck);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 301, 121));

        retranslateUi(paycheck);

        QMetaObject::connectSlotsByName(paycheck);
    } // setupUi

    void retranslateUi(QFrame *paycheck)
    {
        paycheck->setWindowTitle(QApplication::translate("paycheck", "Frame", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("paycheck", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class paycheck: public Ui_paycheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYCHECK_H
