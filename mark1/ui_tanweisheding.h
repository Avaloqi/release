/********************************************************************************
** Form generated from reading UI file 'tanweisheding.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TANWEISHEDING_H
#define UI_TANWEISHEDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TanWeiSheDing
{
public:
    QPushButton *pb_back;
    QWidget *widget_all;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QDialogButtonBox *buttonBox;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *TanWeiSheDing)
    {
        if (TanWeiSheDing->objectName().isEmpty())
            TanWeiSheDing->setObjectName(QString::fromUtf8("TanWeiSheDing"));
        TanWeiSheDing->resize(1024, 600);
        pb_back = new QPushButton(TanWeiSheDing);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(850, 60, 100, 27));
        widget_all = new QWidget(TanWeiSheDing);
        widget_all->setObjectName(QString::fromUtf8("widget_all"));
        widget_all->setGeometry(QRect(110, 180, 791, 231));
        gridLayout = new QGridLayout(widget_all);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(80);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_all);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addWidget(widget_2, 0, 3, 1, 1);

        widget_3 = new QWidget(widget_all);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        lineEdit_7 = new QLineEdit(widget_3);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_2->addWidget(lineEdit_7);


        gridLayout->addWidget(widget_3, 1, 3, 1, 1);

        widget_4 = new QWidget(widget_all);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_2 = new QLineEdit(widget_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        gridLayout->addWidget(widget_4, 3, 3, 1, 1);

        widget_5 = new QWidget(widget_all);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_3 = new QLineEdit(widget_5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);


        gridLayout->addWidget(widget_5, 4, 3, 1, 1);

        widget_6 = new QWidget(widget_all);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        buttonBox = new QDialogButtonBox(widget_6);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        horizontalLayout_5->addWidget(buttonBox);


        gridLayout->addWidget(widget_6, 0, 2, 1, 1);

        widget_7 = new QWidget(widget_all);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        lineEdit_4 = new QLineEdit(widget_7);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);


        gridLayout->addWidget(widget_7, 1, 2, 1, 1);

        widget_8 = new QWidget(widget_all);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        lineEdit_5 = new QLineEdit(widget_8);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_7->addWidget(lineEdit_5);


        gridLayout->addWidget(widget_8, 3, 2, 1, 1);

        widget_9 = new QWidget(widget_all);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_9);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        comboBox = new QComboBox(widget_9);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(comboBox);


        gridLayout->addWidget(widget_9, 4, 2, 1, 1);


        retranslateUi(TanWeiSheDing);

        QMetaObject::connectSlotsByName(TanWeiSheDing);
    } // setupUi

    void retranslateUi(QDialog *TanWeiSheDing)
    {
        TanWeiSheDing->setWindowTitle(QCoreApplication::translate("TanWeiSheDing", "Dialog", nullptr));
        pb_back->setText(QString());
        label_5->setText(QCoreApplication::translate("TanWeiSheDing", "\350\211\2621\346\216\242\347\272\254\350\256\276\345\256\232\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("TanWeiSheDing", "\350\211\2622\346\216\242\347\272\254\350\256\276\345\256\232\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("TanWeiSheDing", "\350\211\2623\346\216\242\347\272\254\350\256\276\345\256\232\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("TanWeiSheDing", "\350\211\2624\346\216\242\347\272\254\350\256\276\345\256\232\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("TanWeiSheDing", "\346\216\242\347\272\254\350\256\276\345\256\232\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("TanWeiSheDing", "\346\216\242\347\272\254\347\252\227\345\274\200\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("TanWeiSheDing", "\346\216\242\347\272\254\347\252\227\345\205\263\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("TanWeiSheDing", "\346\216\242\347\272\254\346\226\271\345\274\217\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TanWeiSheDing", "\344\273\205\346\216\242\347\272\254\345\244\264\346\243\200\346\265\213", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TanWeiSheDing: public Ui_TanWeiSheDing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TANWEISHEDING_H
