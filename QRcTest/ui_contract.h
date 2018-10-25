/********************************************************************************
** Form generated from reading UI file 'contract.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRACT_H
#define UI_CONTRACT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contract
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_return;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QWidget *contract)
    {
        if (contract->objectName().isEmpty())
            contract->setObjectName(QString::fromUtf8("contract"));
        contract->resize(320, 240);
        contract->setMinimumSize(QSize(240, 240));
        contract->setMaximumSize(QSize(320, 320));
        contract->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        pushButton = new QPushButton(contract);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 170, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        pushButton_return = new QPushButton(contract);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(220, 170, 75, 41));
        pushButton_return->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));
        label = new QLabel(contract);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
        textEdit = new QTextEdit(contract);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 221, 71));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(contract);

        QMetaObject::connectSlotsByName(contract);
    } // setupUi

    void retranslateUi(QWidget *contract)
    {
        contract->setWindowTitle(QApplication::translate("contract", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("contract", "SmartConstracion", 0, QApplication::UnicodeUTF8));
        pushButton_return->setText(QApplication::translate("contract", "return", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("contract", "bytecode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class contract: public Ui_contract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACT_H
