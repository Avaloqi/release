/********************************************************************************
** Form generated from reading UI file 'yinweipara.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YINWEIPARA_H
#define UI_YINWEIPARA_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YinWeiPara
{
public:
    QPushButton *pb_back;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget_t1;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDialogButtonBox *buttonBox;
    QWidget *tab_2;
    QWidget *widget_t2;
    QGridLayout *gridLayout_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *lineEdit_8;
    QLabel *label_14;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QLabel *label_12;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLineEdit *lineEdit_9;
    QLabel *label_16;
    QWidget *buttonsWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pb_s1;
    QPushButton *pb_s2;
    QPushButton *pb_s3;
    QPushButton *pb_s4;

    void setupUi(QDialog *YinWeiPara)
    {
        if (YinWeiPara->objectName().isEmpty())
            YinWeiPara->setObjectName(QString::fromUtf8("YinWeiPara"));
        YinWeiPara->resize(1024, 600);
        pb_back = new QPushButton(YinWeiPara);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(850, 50, 100, 27));
        tabWidget = new QTabWidget(YinWeiPara);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(70, 60, 771, 531));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{min-height:60px;min-width:100px}\n"
"QTabBar::tab{background-color:#066d93;color:white}\n"
"QTabBar::tab::selected{background-color:#05526e;color:white}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget_t1 = new QWidget(tab);
        widget_t1->setObjectName(QString::fromUtf8("widget_t1"));
        widget_t1->setGeometry(QRect(90, 50, 491, 301));
        gridLayout = new QGridLayout(widget_t1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_t1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(widget_t1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(widget_t1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(widget_t1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_3 = new QLabel(widget_t1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(widget_t1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit = new QLineEdit(widget_t1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget_t1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(widget_t1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_3, 5, 1, 1, 1);

        lineEdit_4 = new QLineEdit(widget_t1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_4, 5, 2, 1, 1);

        comboBox = new QComboBox(widget_t1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);

        comboBox_2 = new QComboBox(widget_t1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(widget_t1);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::RightToLeft);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);

        comboBox->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        comboBox_2->raise();
        buttonBox->raise();
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget_t2 = new QWidget(tab_2);
        widget_t2->setObjectName(QString::fromUtf8("widget_t2"));
        widget_t2->setGeometry(QRect(90, 100, 431, 131));
        gridLayout_2 = new QGridLayout(widget_t2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(35);
        gridLayout_2->setVerticalSpacing(5);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_t2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_4->addWidget(label_13);

        lineEdit_8 = new QLineEdit(widget_6);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_8);

        label_14 = new QLabel(widget_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);


        gridLayout_2->addWidget(widget_6, 0, 1, 1, 1);

        widget_4 = new QWidget(widget_t2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        lineEdit_6 = new QLineEdit(widget_4);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_6);

        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);


        gridLayout_2->addWidget(widget_4, 1, 0, 1, 1);

        widget_3 = new QWidget(widget_t2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        lineEdit_5 = new QLineEdit(widget_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_5);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);


        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);

        widget_5 = new QWidget(widget_t2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        lineEdit_7 = new QLineEdit(widget_5);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_7);

        label_12 = new QLabel(widget_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);


        gridLayout_2->addWidget(widget_5, 2, 0, 1, 1);

        widget_7 = new QWidget(widget_t2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(widget_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);

        lineEdit_9 = new QLineEdit(widget_7);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy1);
        lineEdit_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_9);

        label_16 = new QLabel(widget_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_5->addWidget(label_16);


        gridLayout_2->addWidget(widget_7, 1, 1, 1, 1);

        buttonsWidget = new QWidget(tab_2);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        buttonsWidget->setGeometry(QRect(10, 340, 531, 71));
        horizontalLayout_6 = new QHBoxLayout(buttonsWidget);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pb_s1 = new QPushButton(buttonsWidget);
        pb_s1->setObjectName(QString::fromUtf8("pb_s1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pb_s1->sizePolicy().hasHeightForWidth());
        pb_s1->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(pb_s1);

        pb_s2 = new QPushButton(buttonsWidget);
        pb_s2->setObjectName(QString::fromUtf8("pb_s2"));
        sizePolicy2.setHeightForWidth(pb_s2->sizePolicy().hasHeightForWidth());
        pb_s2->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(pb_s2);

        pb_s3 = new QPushButton(buttonsWidget);
        pb_s3->setObjectName(QString::fromUtf8("pb_s3"));
        sizePolicy2.setHeightForWidth(pb_s3->sizePolicy().hasHeightForWidth());
        pb_s3->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(pb_s3);

        pb_s4 = new QPushButton(buttonsWidget);
        pb_s4->setObjectName(QString::fromUtf8("pb_s4"));
        sizePolicy2.setHeightForWidth(pb_s4->sizePolicy().hasHeightForWidth());
        pb_s4->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(pb_s4);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(YinWeiPara);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(YinWeiPara);
    } // setupUi

    void retranslateUi(QDialog *YinWeiPara)
    {
        YinWeiPara->setWindowTitle(QCoreApplication::translate("YinWeiPara", "Dialog", nullptr));
        pb_back->setText(QString());
        label_2->setText(QCoreApplication::translate("YinWeiPara", "\347\254\254\344\270\200\347\272\254\345\273\266\346\227\266\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("YinWeiPara", "\351\200\211\350\211\262\345\210\207\346\215\242\350\247\222\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("YinWeiPara", "\346\260\264\351\230\200\345\244\271\346\214\201\345\212\233\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("YinWeiPara", "\345\220\214\346\255\245\344\273\252\344\277\241\345\217\267\350\247\222\345\272\246\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("YinWeiPara", "\345\244\271\347\272\261\345\231\250\345\244\271\346\214\201\345\212\233\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("YinWeiPara", "\350\207\252\345\212\250\347\272\254\347\272\261\345\210\260\350\276\276\357\274\232", nullptr));
        lineEdit->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("YinWeiPara", "\351\253\230", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("YinWeiPara", "\344\275\216", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("YinWeiPara", "\351\253\230", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("YinWeiPara", "\344\275\216", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("YinWeiPara", "\351\200\232\347\224\250", nullptr));
        label_13->setText(QCoreApplication::translate("YinWeiPara", "\347\272\254\347\272\261\345\210\266\345\212\250\345\231\250\345\274\200", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        label_14->setText(QCoreApplication::translate("YinWeiPara", "\345\272\246", nullptr));
        label_9->setText(QCoreApplication::translate("YinWeiPara", "\345\244\271\347\272\261\345\231\250\345\205\263\351\227\255", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        label_10->setText(QCoreApplication::translate("YinWeiPara", "\345\272\246", nullptr));
        label_7->setText(QCoreApplication::translate("YinWeiPara", "\345\244\271\347\272\261\345\231\250\346\211\223\345\274\200", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        label_8->setText(QCoreApplication::translate("YinWeiPara", "\345\272\246", nullptr));
        label_11->setText(QCoreApplication::translate("YinWeiPara", "\346\241\243\347\272\261\345\231\250\346\211\223\345\274\200", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        label_12->setText(QCoreApplication::translate("YinWeiPara", "\345\272\246", nullptr));
        label_15->setText(QCoreApplication::translate("YinWeiPara", "\347\272\254\347\272\261\345\231\250\345\205\263      ", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("YinWeiPara", "0", nullptr));
        label_16->setText(QCoreApplication::translate("YinWeiPara", "\345\272\246", nullptr));
        pb_s1->setText(QCoreApplication::translate("YinWeiPara", "\350\211\2621", nullptr));
        pb_s2->setText(QCoreApplication::translate("YinWeiPara", "\350\211\2622", nullptr));
        pb_s3->setText(QCoreApplication::translate("YinWeiPara", "\350\211\2623", nullptr));
        pb_s4->setText(QCoreApplication::translate("YinWeiPara", "\350\211\2624", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("YinWeiPara", "\345\244\271\347\272\261\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YinWeiPara: public Ui_YinWeiPara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YINWEIPARA_H
