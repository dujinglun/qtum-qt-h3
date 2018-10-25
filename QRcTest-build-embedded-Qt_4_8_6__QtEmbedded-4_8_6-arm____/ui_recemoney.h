/********************************************************************************
** Form generated from reading UI file 'recemoney.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEMONEY_H
#define UI_RECEMONEY_H

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

class Ui_receMoney
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_return;
    QLineEdit *lineEdit;

    void setupUi(QWidget *receMoney)
    {
        if (receMoney->objectName().isEmpty())
            receMoney->setObjectName(QString::fromUtf8("receMoney"));
        receMoney->resize(320, 240);
        receMoney->setMinimumSize(QSize(240, 240));
        receMoney->setMaximumSize(QSize(320, 320));
        label = new QLabel(receMoney);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 200, 200));
        label->setMinimumSize(QSize(200, 200));
        label->setMaximumSize(QSize(200, 200));
        label->setLayoutDirection(Qt::LeftToRight);
        pushButton = new QPushButton(receMoney);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 20, 51, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        pushButton_return = new QPushButton(receMoney);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(260, 190, 51, 41));
        pushButton_return->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        lineEdit = new QLineEdit(receMoney);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 220, 231, 31));
        lineEdit->setLayoutDirection(Qt::RightToLeft);

        retranslateUi(receMoney);

        QMetaObject::connectSlotsByName(receMoney);
    } // setupUi

    void retranslateUi(QWidget *receMoney)
    {
        receMoney->setWindowTitle(QApplication::translate("receMoney", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("receMoney", "QR", 0, QApplication::UnicodeUTF8));
        pushButton_return->setText(QApplication::translate("receMoney", "retn", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class receMoney: public Ui_receMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEMONEY_H
