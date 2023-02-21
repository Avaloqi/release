/********************************************************************************
** Form generated from reading UI file 'yinweipeizhi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YINWEIPEIZHI_H
#define UI_YINWEIPEIZHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YinWeiPeiZhi
{
public:
    QPushButton *pb_back;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_9;
    QLabel *label_5;

    void setupUi(QDialog *YinWeiPeiZhi)
    {
        if (YinWeiPeiZhi->objectName().isEmpty())
            YinWeiPeiZhi->setObjectName(QString::fromUtf8("YinWeiPeiZhi"));
        YinWeiPeiZhi->resize(1024, 600);
        pb_back = new QPushButton(YinWeiPeiZhi);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(880, 30, 100, 27));
        widget1 = new QWidget(YinWeiPeiZhi);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(120, 90, 261, 45));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        widget_2 = new QWidget(YinWeiPeiZhi);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(110, 190, 321, 191));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(widget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_7, 5, 1, 1, 1);

        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        lineEdit_8 = new QLineEdit(widget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_8, 5, 2, 1, 1);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(widget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_6, 4, 2, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 1);

        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_4, 3, 2, 1, 1);

        lineEdit_5 = new QLineEdit(widget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        widget_3 = new QWidget(YinWeiPeiZhi);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(480, 190, 261, 191));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_13 = new QLabel(widget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_13, 5, 0, 1, 1);

        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        lineEdit_12 = new QLineEdit(widget_3);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_12, 5, 2, 1, 1);

        lineEdit_10 = new QLineEdit(widget_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_10, 2, 2, 1, 1);

        lineEdit_11 = new QLineEdit(widget_3);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_11, 4, 2, 1, 1);

        lineEdit_9 = new QLineEdit(widget_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_9, 3, 2, 1, 1);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);


        retranslateUi(YinWeiPeiZhi);

        QMetaObject::connectSlotsByName(YinWeiPeiZhi);
    } // setupUi

    void retranslateUi(QDialog *YinWeiPeiZhi)
    {
        YinWeiPeiZhi->setWindowTitle(QCoreApplication::translate("YinWeiPeiZhi", "Dialog", nullptr));
        pb_back->setText(QString());
        label->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\250\345\267\245\344\275\234\346\250\241\345\274\217\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("YinWeiPeiZhi", "LCS", nullptr));

        label_2->setText(QCoreApplication::translate("YinWeiPeiZhi", "\346\211\223\345\274\200/\345\205\263\351\227\255\345\273\266\346\227\266\357\274\232", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        label_9->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\2504\357\274\232", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        lineEdit->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        label_6->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\2501\357\274\232", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        label_3->setText(QCoreApplication::translate("YinWeiPeiZhi", "\346\211\223\345\274\200", nullptr));
        label_7->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\2502\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\2503\357\274\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        label_4->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\205\263\351\227\255", nullptr));
        label_10->setText(QCoreApplication::translate("YinWeiPeiZhi", "\346\214\241\347\272\261\351\222\2101\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\2502\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\2504\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("YinWeiPeiZhi", "\345\244\271\347\272\261\345\231\2503\357\274\232", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("YinWeiPeiZhi", "0", nullptr));
        label_5->setText(QCoreApplication::translate("YinWeiPeiZhi", "\346\214\241\347\272\261\351\222\210\346\211\223\345\274\200\345\273\266\346\227\266\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YinWeiPeiZhi: public Ui_YinWeiPeiZhi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YINWEIPEIZHI_H
