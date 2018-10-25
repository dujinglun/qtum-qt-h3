/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_view;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_num_7;
    QPushButton *pushButton_num_8;
    QPushButton *pushButton_num_9;
    QPushButton *pushButton_num_4;
    QPushButton *pushButton_num_5;
    QPushButton *pushButton_num_6;
    QPushButton *pushButton_num_1;
    QPushButton *pushButton_num_2;
    QPushButton *pushButton_num_3;
    QPushButton *pushButton_num_11;
    QPushButton *pushButton_num_0;
    QPushButton *pushButton_num_10;
    QPushButton *pushButton_close_qtum;
    QPushButton *pushButton_true;
    QPushButton *pushButton_false;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setWindowModality(Qt::NonModal);
        Widget->setEnabled(true);
        Widget->resize(320, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(320, 240));
        Widget->setMaximumSize(QSize(320, 240));
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 51, 21));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_view = new QLabel(Widget);
        label_view->setObjectName(QString::fromUtf8("label_view"));
        label_view->setGeometry(QRect(10, 30, 201, 31));
        label_view->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 69, 221, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_num_7 = new QPushButton(layoutWidget);
        pushButton_num_7->setObjectName(QString::fromUtf8("pushButton_num_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_num_7->sizePolicy().hasHeightForWidth());
        pushButton_num_7->setSizePolicy(sizePolicy1);
        pushButton_num_7->setMinimumSize(QSize(60, 30));
        pushButton_num_7->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_7, 0, 0, 1, 1);

        pushButton_num_8 = new QPushButton(layoutWidget);
        pushButton_num_8->setObjectName(QString::fromUtf8("pushButton_num_8"));
        pushButton_num_8->setMinimumSize(QSize(60, 30));
        pushButton_num_8->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_8, 0, 1, 1, 1);

        pushButton_num_9 = new QPushButton(layoutWidget);
        pushButton_num_9->setObjectName(QString::fromUtf8("pushButton_num_9"));
        pushButton_num_9->setMinimumSize(QSize(60, 30));
        pushButton_num_9->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_9, 0, 2, 1, 1);

        pushButton_num_4 = new QPushButton(layoutWidget);
        pushButton_num_4->setObjectName(QString::fromUtf8("pushButton_num_4"));
        pushButton_num_4->setMinimumSize(QSize(60, 30));
        pushButton_num_4->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_4, 1, 0, 1, 1);

        pushButton_num_5 = new QPushButton(layoutWidget);
        pushButton_num_5->setObjectName(QString::fromUtf8("pushButton_num_5"));
        pushButton_num_5->setMinimumSize(QSize(60, 30));
        pushButton_num_5->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_5, 1, 1, 1, 1);

        pushButton_num_6 = new QPushButton(layoutWidget);
        pushButton_num_6->setObjectName(QString::fromUtf8("pushButton_num_6"));
        pushButton_num_6->setMinimumSize(QSize(60, 30));
        pushButton_num_6->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_6, 1, 2, 1, 1);

        pushButton_num_1 = new QPushButton(layoutWidget);
        pushButton_num_1->setObjectName(QString::fromUtf8("pushButton_num_1"));
        pushButton_num_1->setMinimumSize(QSize(60, 30));
        pushButton_num_1->setMaximumSize(QSize(80, 50));
        pushButton_num_1->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"\n"
""));

        gridLayout->addWidget(pushButton_num_1, 2, 0, 1, 1);

        pushButton_num_2 = new QPushButton(layoutWidget);
        pushButton_num_2->setObjectName(QString::fromUtf8("pushButton_num_2"));
        pushButton_num_2->setMinimumSize(QSize(60, 30));
        pushButton_num_2->setMaximumSize(QSize(80, 50));
        pushButton_num_2->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_num_2, 2, 1, 1, 1);

        pushButton_num_3 = new QPushButton(layoutWidget);
        pushButton_num_3->setObjectName(QString::fromUtf8("pushButton_num_3"));
        pushButton_num_3->setMinimumSize(QSize(60, 30));
        pushButton_num_3->setMaximumSize(QSize(80, 50));
        pushButton_num_3->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton_num_3, 2, 2, 1, 1);

        pushButton_num_11 = new QPushButton(layoutWidget);
        pushButton_num_11->setObjectName(QString::fromUtf8("pushButton_num_11"));
        pushButton_num_11->setMinimumSize(QSize(60, 30));
        pushButton_num_11->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_11, 3, 0, 1, 1);

        pushButton_num_0 = new QPushButton(layoutWidget);
        pushButton_num_0->setObjectName(QString::fromUtf8("pushButton_num_0"));
        pushButton_num_0->setMinimumSize(QSize(60, 30));
        pushButton_num_0->setMaximumSize(QSize(80, 50));

        gridLayout->addWidget(pushButton_num_0, 3, 1, 1, 1);

        pushButton_num_10 = new QPushButton(layoutWidget);
        pushButton_num_10->setObjectName(QString::fromUtf8("pushButton_num_10"));
        pushButton_num_10->setMinimumSize(QSize(60, 30));
        pushButton_num_10->setMaximumSize(QSize(80, 50));
        pushButton_num_10->setSizeIncrement(QSize(80, 30));

        gridLayout->addWidget(pushButton_num_10, 3, 2, 1, 1);

        pushButton_close_qtum = new QPushButton(Widget);
        pushButton_close_qtum->setObjectName(QString::fromUtf8("pushButton_close_qtum"));
        pushButton_close_qtum->setGeometry(QRect(230, 10, 80, 32));
        pushButton_true = new QPushButton(Widget);
        pushButton_true->setObjectName(QString::fromUtf8("pushButton_true"));
        pushButton_true->setGeometry(QRect(250, 120, 61, 51));
        pushButton_true->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 0);"));
        pushButton_false = new QPushButton(Widget);
        pushButton_false->setObjectName(QString::fromUtf8("pushButton_false"));
        pushButton_false->setGeometry(QRect(250, 50, 61, 61));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_false->sizePolicy().hasHeightForWidth());
        pushButton_false->setSizePolicy(sizePolicy2);
        pushButton_false->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(pushButton_close_qtum);
#endif // QT_NO_SHORTCUT

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "code:", 0, QApplication::UnicodeUTF8));
        label_view->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton_num_7->setText(QApplication::translate("Widget", "7", 0, QApplication::UnicodeUTF8));
        pushButton_num_8->setText(QApplication::translate("Widget", "8", 0, QApplication::UnicodeUTF8));
        pushButton_num_9->setText(QApplication::translate("Widget", "9", 0, QApplication::UnicodeUTF8));
        pushButton_num_4->setText(QApplication::translate("Widget", "4", 0, QApplication::UnicodeUTF8));
        pushButton_num_5->setText(QApplication::translate("Widget", "5", 0, QApplication::UnicodeUTF8));
        pushButton_num_6->setText(QApplication::translate("Widget", "6", 0, QApplication::UnicodeUTF8));
        pushButton_num_1->setText(QApplication::translate("Widget", "1", 0, QApplication::UnicodeUTF8));
        pushButton_num_2->setText(QApplication::translate("Widget", "2", 0, QApplication::UnicodeUTF8));
        pushButton_num_3->setText(QApplication::translate("Widget", "3", 0, QApplication::UnicodeUTF8));
        pushButton_num_11->setText(QApplication::translate("Widget", "#", 0, QApplication::UnicodeUTF8));
        pushButton_num_0->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        pushButton_num_10->setText(QApplication::translate("Widget", "*", 0, QApplication::UnicodeUTF8));
        pushButton_close_qtum->setText(QApplication::translate("Widget", "exit qtum", 0, QApplication::UnicodeUTF8));
        pushButton_true->setText(QApplication::translate("Widget", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_false->setText(QApplication::translate("Widget", "delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
