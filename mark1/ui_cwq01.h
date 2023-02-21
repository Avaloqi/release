/********************************************************************************
** Form generated from reading UI file 'cwq01.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWQ01_H
#define UI_CWQ01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cwq01
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;

    void setupUi(QDialog *cwq01)
    {
        if (cwq01->objectName().isEmpty())
            cwq01->setObjectName(QString::fromUtf8("cwq01"));
        cwq01->resize(1024, 400);
        widget = new QWidget(cwq01);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 40, 601, 301));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 1, 6, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 4, 2, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_5, 0, 7, 1, 1);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_4, 1, 7, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 2, 6, 1, 1);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 2, 7, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 9, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 4, 6, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 4, 7, 1, 1);


        retranslateUi(cwq01);

        QMetaObject::connectSlotsByName(cwq01);
    } // setupUi

    void retranslateUi(QDialog *cwq01)
    {
        cwq01->setWindowTitle(QCoreApplication::translate("cwq01", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("cwq01", "\351\242\204\347\273\225\345\234\210\346\225\260\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("cwq01", "\346\224\276\347\272\261\351\225\277\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("cwq01", "\345\216\230\347\261\263        ", nullptr));
        label_3->setText(QCoreApplication::translate("cwq01", "\351\251\254\350\276\276\350\275\254\345\220\221\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("cwq01", "\346\224\276\347\272\261\345\234\210\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("cwq01", "\346\234\200\351\253\230\350\275\254\351\200\237\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("cwq01", "S\345\220\221", nullptr));

        lineEdit_2->setText(QCoreApplication::translate("cwq01", "0", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("cwq01", "0", nullptr));
        lineEdit->setText(QCoreApplication::translate("cwq01", "0", nullptr));
        label_2->setText(QCoreApplication::translate("cwq01", "\347\273\225\345\234\210\351\274\223\345\276\204\357\274\232", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("cwq01", "0", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("cwq01", "0", nullptr));
        label_7->setText(QCoreApplication::translate("cwq01", "\351\251\254\350\276\276\345\212\240\351\200\237\345\272\246\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("cwq01", "\351\253\230", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("cwq01", "\344\275\216", nullptr));

        label_8->setText(QCoreApplication::translate("cwq01", "\350\275\254/\347\261\263", nullptr));
        label_9->setText(QCoreApplication::translate("cwq01", "\345\202\250\350\275\257\347\211\210\346\234\254\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("cwq01", "JST ST 00.1v65", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cwq01: public Ui_cwq01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWQ01_H
