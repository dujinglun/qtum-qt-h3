/********************************************************************************
** Form generated from reading UI file 'function.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_H
#define UI_FUNCTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_function
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_pay;
    QPushButton *pushButton_contract;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_receMoney;
    QPushButton *pushButton_record;
    QLabel *label_viewBalance;
    QPushButton *pushButton_return;
    QPushButton *pushButton_balance;

    void setupUi(QWidget *function)
    {
        if (function->objectName().isEmpty())
            function->setObjectName(QString::fromUtf8("function"));
        function->resize(320, 240);
        function->setMinimumSize(QSize(100, 100));
        function->setMaximumSize(QSize(320, 320));
        function->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));
        label = new QLabel(function);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 121, 31));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"background-color: rgb(255, 255, 0);"));
        layoutWidget = new QWidget(function);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 82, 134));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_pay = new QPushButton(layoutWidget);
        pushButton_pay->setObjectName(QString::fromUtf8("pushButton_pay"));
        pushButton_pay->setMinimumSize(QSize(80, 40));
        pushButton_pay->setMaximumSize(QSize(80, 40));
        pushButton_pay->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);"));

        verticalLayout->addWidget(pushButton_pay);

        pushButton_contract = new QPushButton(layoutWidget);
        pushButton_contract->setObjectName(QString::fromUtf8("pushButton_contract"));
        pushButton_contract->setMinimumSize(QSize(80, 40));
        pushButton_contract->setMaximumSize(QSize(80, 40));
        pushButton_contract->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        verticalLayout->addWidget(pushButton_contract);

        layoutWidget1 = new QWidget(function);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 100, 82, 134));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_receMoney = new QPushButton(layoutWidget1);
        pushButton_receMoney->setObjectName(QString::fromUtf8("pushButton_receMoney"));
        pushButton_receMoney->setMinimumSize(QSize(80, 40));
        pushButton_receMoney->setMaximumSize(QSize(80, 40));
        pushButton_receMoney->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));

        verticalLayout_2->addWidget(pushButton_receMoney);

        pushButton_record = new QPushButton(layoutWidget1);
        pushButton_record->setObjectName(QString::fromUtf8("pushButton_record"));
        pushButton_record->setMinimumSize(QSize(80, 40));
        pushButton_record->setMaximumSize(QSize(80, 40));
        pushButton_record->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);"));

        verticalLayout_2->addWidget(pushButton_record);

        label_viewBalance = new QLabel(function);
        label_viewBalance->setObjectName(QString::fromUtf8("label_viewBalance"));
        label_viewBalance->setGeometry(QRect(20, 60, 281, 41));
        label_viewBalance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_return = new QPushButton(function);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(230, 180, 80, 40));
        pushButton_return->setMinimumSize(QSize(80, 40));
        pushButton_return->setMaximumSize(QSize(80, 40));
        pushButton_return->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));
        pushButton_balance = new QPushButton(function);
        pushButton_balance->setObjectName(QString::fromUtf8("pushButton_balance"));
        pushButton_balance->setGeometry(QRect(230, 120, 80, 40));
        pushButton_balance->setMinimumSize(QSize(80, 40));
        pushButton_balance->setMaximumSize(QSize(80, 40));
        pushButton_balance->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        retranslateUi(function);

        QMetaObject::connectSlotsByName(function);
    } // setupUi

    void retranslateUi(QWidget *function)
    {
        function->setWindowTitle(QApplication::translate("function", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("function", "balance:", 0, QApplication::UnicodeUTF8));
        pushButton_pay->setText(QApplication::translate("function", "pay", 0, QApplication::UnicodeUTF8));
        pushButton_contract->setText(QApplication::translate("function", "SmartC", 0, QApplication::UnicodeUTF8));
        pushButton_receMoney->setText(QApplication::translate("function", "recive", 0, QApplication::UnicodeUTF8));
        pushButton_record->setText(QApplication::translate("function", "record", 0, QApplication::UnicodeUTF8));
        label_viewBalance->setText(QString());
        pushButton_return->setText(QApplication::translate("function", "return", 0, QApplication::UnicodeUTF8));
        pushButton_balance->setText(QApplication::translate("function", "check", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class function: public Ui_function {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_H
