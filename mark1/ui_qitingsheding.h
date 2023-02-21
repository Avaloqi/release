/********************************************************************************
** Form generated from reading UI file 'qitingsheding.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QITINGSHEDING_H
#define UI_QITINGSHEDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QiTingSheDing
{
public:
    QPushButton *pb_back;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QDialogButtonBox *bB1;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *lineEdit_7;
    QLabel *label_14;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QDialogButtonBox *bB2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QLabel *label_10;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *lineEdit_6;
    QLabel *label_12;

    void setupUi(QDialog *QiTingSheDing)
    {
        if (QiTingSheDing->objectName().isEmpty())
            QiTingSheDing->setObjectName(QString::fromUtf8("QiTingSheDing"));
        QiTingSheDing->resize(1024, 600);
        pb_back = new QPushButton(QiTingSheDing);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(870, 30, 100, 27));
        widget = new QWidget(QiTingSheDing);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 90, 691, 361));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(80);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        widget_9 = new QWidget(widget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(widget_9);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        bB1 = new QDialogButtonBox(widget_9);
        bB1->setObjectName(QString::fromUtf8("bB1"));
        bB1->setStandardButtons(QDialogButtonBox::NoButton);

        horizontalLayout_8->addWidget(bB1);


        gridLayout->addWidget(widget_9, 0, 1, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_2);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        gridLayout->addWidget(widget_3, 1, 0, 1, 1);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, -1, 0);
        label_13 = new QLabel(widget_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_7->addWidget(label_13);

        lineEdit_7 = new QLineEdit(widget_8);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lineEdit_7);

        label_14 = new QLabel(widget_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_7->addWidget(label_14);


        gridLayout->addWidget(widget_8, 1, 1, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, 0);
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_3 = new QLineEdit(widget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_3);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        gridLayout->addWidget(widget_4, 2, 0, 1, 1);

        widget_10 = new QWidget(widget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_9 = new QHBoxLayout(widget_10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(widget_10);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_9->addWidget(label_16);

        bB2 = new QDialogButtonBox(widget_10);
        bB2->setObjectName(QString::fromUtf8("bB2"));
        bB2->setStandardButtons(QDialogButtonBox::NoButton);

        horizontalLayout_9->addWidget(bB2);


        gridLayout->addWidget(widget_10, 2, 1, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, -1, 0);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_4 = new QLineEdit(widget_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_4);

        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);


        gridLayout->addWidget(widget_5, 3, 0, 1, 1);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, -1, 0);
        label_9 = new QLabel(widget_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        lineEdit_5 = new QLineEdit(widget_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_5);

        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_5->addWidget(label_10);


        gridLayout->addWidget(widget_6, 4, 0, 1, 1);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, -1, 0);
        label_11 = new QLabel(widget_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        lineEdit_6 = new QLineEdit(widget_7);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lineEdit_6);

        label_12 = new QLabel(widget_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_6->addWidget(label_12);


        gridLayout->addWidget(widget_7, 5, 0, 1, 1);


        retranslateUi(QiTingSheDing);

        QMetaObject::connectSlotsByName(QiTingSheDing);
    } // setupUi

    void retranslateUi(QDialog *QiTingSheDing)
    {
        QiTingSheDing->setWindowTitle(QCoreApplication::translate("QiTingSheDing", "Dialog", nullptr));
        pb_back->setText(QString());
        label->setText(QCoreApplication::translate("QiTingSheDing", "\350\266\205\345\220\257\345\212\250\347\272\254\346\225\260(\347\272\254\345\201\234)", nullptr));
        lineEdit->setText(QCoreApplication::translate("QiTingSheDing", "0", nullptr));
        label_2->setText(QCoreApplication::translate("QiTingSheDing", "\347\272\254", nullptr));
        label_15->setText(QCoreApplication::translate("QiTingSheDing", "\350\207\252\345\212\250\345\233\236\346\242\255", nullptr));
        label_3->setText(QCoreApplication::translate("QiTingSheDing", "\350\266\205\345\220\257\345\212\250\347\272\254\346\225\260(\347\273\217\345\201\234)", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("QiTingSheDing", "0", nullptr));
        label_4->setText(QCoreApplication::translate("QiTingSheDing", "\347\272\254", nullptr));
        label_13->setText(QCoreApplication::translate("QiTingSheDing", "\345\233\236\346\242\255\345\201\234\350\275\246\350\247\222\345\272\246    ", nullptr));
        label_14->setText(QCoreApplication::translate("QiTingSheDing", "\345\272\246", nullptr));
        label_5->setText(QCoreApplication::translate("QiTingSheDing", "\350\266\205\345\220\257\345\212\250\345\210\207\346\215\242\350\247\222      ", nullptr));
        label_6->setText(QCoreApplication::translate("QiTingSheDing", "\345\272\246", nullptr));
        label_16->setText(QCoreApplication::translate("QiTingSheDing", "\346\255\243\350\275\254\347\202\271\345\212\250\345\201\234\350\275\246", nullptr));
        label_7->setText(QCoreApplication::translate("QiTingSheDing", "\345\274\200\345\247\213\345\210\271\350\275\246\350\247\222\345\272\246      ", nullptr));
        label_8->setText(QCoreApplication::translate("QiTingSheDing", "\345\272\246", nullptr));
        label_9->setText(QCoreApplication::translate("QiTingSheDing", "\347\202\271\345\212\250\345\201\234\346\255\242\350\247\222\345\272\2461    ", nullptr));
        label_10->setText(QCoreApplication::translate("QiTingSheDing", "\345\272\246", nullptr));
        label_11->setText(QCoreApplication::translate("QiTingSheDing", "\347\202\271\345\212\250\345\201\234\346\255\242\350\247\222\345\272\2462    ", nullptr));
        label_12->setText(QCoreApplication::translate("QiTingSheDing", "\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QiTingSheDing: public Ui_QiTingSheDing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QITINGSHEDING_H
