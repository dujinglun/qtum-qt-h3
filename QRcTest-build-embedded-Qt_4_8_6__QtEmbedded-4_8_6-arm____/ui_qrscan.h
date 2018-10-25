/********************************************************************************
** Form generated from reading UI file 'qrscan.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRSCAN_H
#define UI_QRSCAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_qrscan
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QFrame *qrscan)
    {
        if (qrscan->objectName().isEmpty())
            qrscan->setObjectName(QString::fromUtf8("qrscan"));
        qrscan->resize(320, 240);
        qrscan->setFrameShape(QFrame::StyledPanel);
        qrscan->setFrameShadow(QFrame::Raised);
        label = new QLabel(qrscan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 320, 240));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton = new QPushButton(qrscan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 146, 61, 61));

        retranslateUi(qrscan);

        QMetaObject::connectSlotsByName(qrscan);
    } // setupUi

    void retranslateUi(QFrame *qrscan)
    {
        qrscan->setWindowTitle(QApplication::translate("qrscan", "Frame", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("qrscan", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("qrscan", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qrscan: public Ui_qrscan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRSCAN_H
