/********************************************************************************
** Form generated from reading UI file 'converterworkset.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERWORKSET_H
#define UI_CONVERTERWORKSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConverterWorkSet
{
public:
    QPushButton *pb_back;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *ConverterWorkSet)
    {
        if (ConverterWorkSet->objectName().isEmpty())
            ConverterWorkSet->setObjectName(QString::fromUtf8("ConverterWorkSet"));
        ConverterWorkSet->resize(1024, 600);
        pb_back = new QPushButton(ConverterWorkSet);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(880, 30, 100, 27));
        widget = new QWidget(ConverterWorkSet);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 100, 691, 381));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(90);
        gridLayout->setVerticalSpacing(80);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 1, 0, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 1, 1, 1, 1);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_10, 1, 2, 1, 1);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_11, 2, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget_2);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        gridLayout->addWidget(widget_2, 2, 1, 1, 2);


        retranslateUi(ConverterWorkSet);

        QMetaObject::connectSlotsByName(ConverterWorkSet);
    } // setupUi

    void retranslateUi(QDialog *ConverterWorkSet)
    {
        ConverterWorkSet->setWindowTitle(QCoreApplication::translate("ConverterWorkSet", "Dialog", nullptr));
        pb_back->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("ConverterWorkSet", "\346\255\243\350\275\254\350\277\220\350\241\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ConverterWorkSet", "\345\217\215\350\275\254\350\277\220\350\241\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ConverterWorkSet", "\346\255\243\350\275\254\347\202\271\345\212\250", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ConverterWorkSet", "\345\217\215\350\275\254\347\202\271\345\212\250", nullptr));
        pushButton_9->setText(QCoreApplication::translate("ConverterWorkSet", "\350\207\252\347\224\261\345\201\234\346\234\272", nullptr));
        pushButton_10->setText(QCoreApplication::translate("ConverterWorkSet", "\345\207\217\351\200\237\345\201\234\346\234\272", nullptr));
        pushButton_11->setText(QCoreApplication::translate("ConverterWorkSet", "\346\225\205\351\232\234\345\244\215\344\275\215", nullptr));
        label->setText(QCoreApplication::translate("ConverterWorkSet", "\347\224\265\346\234\272\345\267\245\344\275\234\347\212\266\346\200\201\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ConverterWorkSet", "0", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ConverterWorkSet: public Ui_ConverterWorkSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERWORKSET_H
