/********************************************************************************
** Form generated from reading UI file 'ccsd01.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCSD01_H
#define UI_CCSD01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCSD01
{
public:
    QPushButton *pb_back;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_6;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QWidget *widget_9;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_6;
    QLabel *label_13;
    QLabel *label_8;
    QComboBox *comboBox_7;
    QLineEdit *lineEdit_19;
    QComboBox *comboBox_8;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_14;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_2;
    QLabel *label_16;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_10;
    QLabel *label_17;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QLineEdit *lineEdit_5;
    QLabel *label_11;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_21;
    QComboBox *comboBox_9;
    QComboBox *comboBox_10;
    QWidget *tab_3;
    QWidget *widget_10;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_22;
    QLabel *label_18;
    QLabel *label_19;
    QComboBox *comboBox_11;
    QLineEdit *lineEdit_23;
    QComboBox *comboBox_12;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_25;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_27;
    QLineEdit *lineEdit_28;
    QLabel *label_25;
    QLineEdit *lineEdit_29;
    QLineEdit *lineEdit_30;
    QLineEdit *lineEdit_31;
    QLineEdit *lineEdit_32;
    QLineEdit *lineEdit_33;
    QLabel *label_26;
    QLineEdit *lineEdit_34;
    QLabel *label_27;
    QLineEdit *lineEdit_35;
    QLineEdit *lineEdit_36;
    QLineEdit *lineEdit_37;
    QLineEdit *lineEdit_38;
    QLineEdit *lineEdit_39;
    QLineEdit *lineEdit_40;
    QLineEdit *lineEdit_41;
    QComboBox *comboBox_13;
    QComboBox *comboBox_14;

    void setupUi(QDialog *CCSD01)
    {
        if (CCSD01->objectName().isEmpty())
            CCSD01->setObjectName(QString::fromUtf8("CCSD01"));
        CCSD01->resize(1024, 600);
        pb_back = new QPushButton(CCSD01);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(860, 40, 100, 27));
        tabWidget = new QTabWidget(CCSD01);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 50, 871, 521));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{height:60px;min-width:100px;margin-right:20px;}\n"
"QTabWidget::pane{\n"
"	border:none;\n"
"}\n"
"QTabBar::tab{background-color:#066d93;color:white}\n"
"QTabBar::tab::selected{background-color:#05526e;color:white}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 60, 611, 301));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(80);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBox_4 = new QComboBox(widget_5);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        sizePolicy.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(comboBox_4);


        gridLayout->addWidget(widget_5, 0, 1, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBox_2);


        gridLayout->addWidget(widget_3, 1, 0, 1, 1);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        comboBox_5 = new QComboBox(widget_6);
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        sizePolicy.setHeightForWidth(comboBox_5->sizePolicy().hasHeightForWidth());
        comboBox_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(comboBox_5);


        gridLayout->addWidget(widget_6, 1, 1, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(widget_4);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(comboBox_3);


        gridLayout->addWidget(widget_4, 2, 0, 1, 1);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_6 = new QComboBox(widget_7);
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        sizePolicy.setHeightForWidth(comboBox_6->sizePolicy().hasHeightForWidth());
        comboBox_6->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(comboBox_6);


        gridLayout->addWidget(widget_7, 2, 1, 1, 1);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit = new QLineEdit(widget_8);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_7->addWidget(lineEdit);


        gridLayout->addWidget(widget_8, 3, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget_9 = new QWidget(tab_2);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(10, 70, 831, 261));
        gridLayout_2 = new QGridLayout(widget_9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(-1, 0, 0, 0);
        lineEdit_6 = new QLineEdit(widget_9);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_6, 2, 2, 1, 2);

        label_13 = new QLabel(widget_9);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 2);

        label_8 = new QLabel(widget_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 2, 1, 1);

        comboBox_7 = new QComboBox(widget_9);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_2->addWidget(comboBox_7, 9, 2, 1, 1);

        lineEdit_19 = new QLineEdit(widget_9);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_19, 7, 4, 1, 2);

        comboBox_8 = new QComboBox(widget_9);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_2->addWidget(comboBox_8, 9, 4, 1, 1);

        label_12 = new QLabel(widget_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 2);

        label_15 = new QLabel(widget_9);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 5, 0, 1, 2);

        label_14 = new QLabel(widget_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 3, 0, 1, 2);

        lineEdit_18 = new QLineEdit(widget_9);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_18, 7, 2, 1, 1);

        lineEdit_2 = new QLineEdit(widget_9);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_2, 1, 2, 1, 2);

        label_16 = new QLabel(widget_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 7, 0, 1, 1);

        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 3, 1, 2);

        lineEdit_8 = new QLineEdit(widget_9);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_8, 2, 6, 1, 1);

        lineEdit_14 = new QLineEdit(widget_9);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_14, 5, 2, 1, 2);

        lineEdit_10 = new QLineEdit(widget_9);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_10, 3, 2, 1, 2);

        label_17 = new QLabel(widget_9);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 9, 0, 1, 2);

        lineEdit_3 = new QLineEdit(widget_9);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_3, 1, 4, 1, 2);

        lineEdit_7 = new QLineEdit(widget_9);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_7, 2, 4, 1, 2);

        lineEdit_15 = new QLineEdit(widget_9);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_15, 5, 4, 1, 1);

        lineEdit_11 = new QLineEdit(widget_9);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_11, 3, 4, 1, 1);

        lineEdit_4 = new QLineEdit(widget_9);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_4, 1, 6, 1, 1);

        label_10 = new QLabel(widget_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 6, 1, 1);

        lineEdit_5 = new QLineEdit(widget_9);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_5, 1, 8, 1, 1);

        label_11 = new QLabel(widget_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 0, 8, 1, 1);

        lineEdit_9 = new QLineEdit(widget_9);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_9, 2, 8, 1, 1);

        lineEdit_12 = new QLineEdit(widget_9);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_12, 3, 6, 1, 1);

        lineEdit_16 = new QLineEdit(widget_9);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_16, 5, 6, 1, 1);

        lineEdit_20 = new QLineEdit(widget_9);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_20, 7, 6, 1, 1);

        lineEdit_13 = new QLineEdit(widget_9);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_13, 3, 8, 1, 1);

        lineEdit_17 = new QLineEdit(widget_9);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_17, 5, 8, 1, 1);

        lineEdit_21 = new QLineEdit(widget_9);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_21, 7, 8, 1, 1);

        comboBox_9 = new QComboBox(widget_9);
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout_2->addWidget(comboBox_9, 9, 6, 1, 1);

        comboBox_10 = new QComboBox(widget_9);
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));

        gridLayout_2->addWidget(comboBox_10, 9, 8, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget_10 = new QWidget(tab_3);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(20, 80, 831, 261));
        gridLayout_3 = new QGridLayout(widget_10);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(-1, 0, 0, 0);
        lineEdit_22 = new QLineEdit(widget_10);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        lineEdit_22->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_22, 2, 2, 1, 2);

        label_18 = new QLabel(widget_10);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 2, 0, 1, 2);

        label_19 = new QLabel(widget_10);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_19, 0, 2, 1, 1);

        comboBox_11 = new QComboBox(widget_10);
        comboBox_11->addItem(QString());
        comboBox_11->addItem(QString());
        comboBox_11->setObjectName(QString::fromUtf8("comboBox_11"));

        gridLayout_3->addWidget(comboBox_11, 9, 2, 1, 1);

        lineEdit_23 = new QLineEdit(widget_10);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_23, 7, 4, 1, 2);

        comboBox_12 = new QComboBox(widget_10);
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));

        gridLayout_3->addWidget(comboBox_12, 9, 4, 1, 1);

        label_20 = new QLabel(widget_10);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 1, 0, 1, 2);

        label_21 = new QLabel(widget_10);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 5, 0, 1, 2);

        label_22 = new QLabel(widget_10);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 3, 0, 1, 2);

        lineEdit_24 = new QLineEdit(widget_10);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_24, 7, 2, 1, 1);

        lineEdit_25 = new QLineEdit(widget_10);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));
        lineEdit_25->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_25, 1, 2, 1, 2);

        label_23 = new QLabel(widget_10);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 7, 0, 1, 1);

        label_24 = new QLabel(widget_10);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_24, 0, 3, 1, 2);

        lineEdit_26 = new QLineEdit(widget_10);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));
        lineEdit_26->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_26, 2, 6, 1, 1);

        lineEdit_27 = new QLineEdit(widget_10);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));
        lineEdit_27->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_27, 5, 2, 1, 2);

        lineEdit_28 = new QLineEdit(widget_10);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));
        lineEdit_28->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_28, 3, 2, 1, 2);

        label_25 = new QLabel(widget_10);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 9, 0, 1, 2);

        lineEdit_29 = new QLineEdit(widget_10);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));
        lineEdit_29->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_29, 1, 4, 1, 2);

        lineEdit_30 = new QLineEdit(widget_10);
        lineEdit_30->setObjectName(QString::fromUtf8("lineEdit_30"));
        lineEdit_30->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_30, 2, 4, 1, 2);

        lineEdit_31 = new QLineEdit(widget_10);
        lineEdit_31->setObjectName(QString::fromUtf8("lineEdit_31"));
        lineEdit_31->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_31, 5, 4, 1, 1);

        lineEdit_32 = new QLineEdit(widget_10);
        lineEdit_32->setObjectName(QString::fromUtf8("lineEdit_32"));
        lineEdit_32->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_32, 3, 4, 1, 1);

        lineEdit_33 = new QLineEdit(widget_10);
        lineEdit_33->setObjectName(QString::fromUtf8("lineEdit_33"));
        lineEdit_33->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_33, 1, 6, 1, 1);

        label_26 = new QLabel(widget_10);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_26, 0, 6, 1, 1);

        lineEdit_34 = new QLineEdit(widget_10);
        lineEdit_34->setObjectName(QString::fromUtf8("lineEdit_34"));
        lineEdit_34->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_34, 1, 8, 1, 1);

        label_27 = new QLabel(widget_10);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_27, 0, 8, 1, 1);

        lineEdit_35 = new QLineEdit(widget_10);
        lineEdit_35->setObjectName(QString::fromUtf8("lineEdit_35"));
        lineEdit_35->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_35, 2, 8, 1, 1);

        lineEdit_36 = new QLineEdit(widget_10);
        lineEdit_36->setObjectName(QString::fromUtf8("lineEdit_36"));
        lineEdit_36->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_36, 3, 6, 1, 1);

        lineEdit_37 = new QLineEdit(widget_10);
        lineEdit_37->setObjectName(QString::fromUtf8("lineEdit_37"));
        lineEdit_37->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_37, 5, 6, 1, 1);

        lineEdit_38 = new QLineEdit(widget_10);
        lineEdit_38->setObjectName(QString::fromUtf8("lineEdit_38"));
        lineEdit_38->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_38, 7, 6, 1, 1);

        lineEdit_39 = new QLineEdit(widget_10);
        lineEdit_39->setObjectName(QString::fromUtf8("lineEdit_39"));
        lineEdit_39->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_39, 3, 8, 1, 1);

        lineEdit_40 = new QLineEdit(widget_10);
        lineEdit_40->setObjectName(QString::fromUtf8("lineEdit_40"));
        lineEdit_40->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_40, 5, 8, 1, 1);

        lineEdit_41 = new QLineEdit(widget_10);
        lineEdit_41->setObjectName(QString::fromUtf8("lineEdit_41"));
        lineEdit_41->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_41, 7, 8, 1, 1);

        comboBox_13 = new QComboBox(widget_10);
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->setObjectName(QString::fromUtf8("comboBox_13"));

        gridLayout_3->addWidget(comboBox_13, 9, 6, 1, 1);

        comboBox_14 = new QComboBox(widget_10);
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->setObjectName(QString::fromUtf8("comboBox_14"));

        gridLayout_3->addWidget(comboBox_14, 9, 8, 1, 1);

        tabWidget->addTab(tab_3, QString());

        retranslateUi(CCSD01);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CCSD01);
    } // setupUi

    void retranslateUi(QDialog *CCSD01)
    {
        CCSD01->setWindowTitle(QCoreApplication::translate("CCSD01", "Dialog", nullptr));
        pb_back->setText(QString());
        label->setText(QCoreApplication::translate("CCSD01", "\345\202\250\347\272\254\345\231\250\346\225\260\351\207\217\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("CCSD01", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("CCSD01", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("CCSD01", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("CCSD01", "4", nullptr));

        label_4->setText(QCoreApplication::translate("CCSD01", "\346\211\213\345\212\250\345\210\271\350\275\246\345\274\200\345\205\263\357\274\232", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("CCSD01", "\346\214\211\351\222\256", nullptr));

        label_2->setText(QCoreApplication::translate("CCSD01", "\345\210\206\346\260\264\347\256\241\351\230\200\350\267\257\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("CCSD01", "1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("CCSD01", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("CCSD01", "3", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("CCSD01", "4", nullptr));

        label_5->setText(QCoreApplication::translate("CCSD01", "\345\201\234\350\275\246\346\214\211\351\222\256\347\261\273\345\236\213\357\274\232", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("CCSD01", "\345\270\270\351\227\255", nullptr));

        label_3->setText(QCoreApplication::translate("CCSD01", "\350\241\245\346\260\264\351\230\200\345\212\250\344\275\234\357\274\232", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("CCSD01", "\345\205\263", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("CCSD01", "\345\274\200", nullptr));

        label_6->setText(QCoreApplication::translate("CCSD01", "\350\212\261\345\236\213\347\274\226\345\206\231\346\226\271\345\220\221\357\274\232", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("CCSD01", "\347\224\261\345\272\225\345\220\221\344\270\212", nullptr));

        label_7->setText(QCoreApplication::translate("CCSD01", "\347\273\207\346\234\272\347\274\226\345\217\267\357\274\232      ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CCSD01", "\350\256\276\345\256\232", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_13->setText(QCoreApplication::translate("CCSD01", "\351\253\230\345\215\240\347\251\272\346\257\224", nullptr));
        label_8->setText(QCoreApplication::translate("CCSD01", "\345\244\271\347\272\2611", nullptr));
        comboBox_7->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_7->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        lineEdit_19->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        comboBox_8->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        label_12->setText(QCoreApplication::translate("CCSD01", "\345\220\257\345\212\250\346\227\266\351\227\264", nullptr));
        label_15->setText(QCoreApplication::translate("CCSD01", "\344\275\216\345\215\240\347\251\272\346\257\224", nullptr));
        label_14->setText(QCoreApplication::translate("CCSD01", "\344\270\255\345\215\240\347\251\272\346\257\224", nullptr));
        lineEdit_18->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_16->setText(QCoreApplication::translate("CCSD01", "\350\204\211\345\256\275", nullptr));
        label_9->setText(QCoreApplication::translate("CCSD01", "\345\244\271\347\272\2612", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_17->setText(QCoreApplication::translate("CCSD01", "\346\226\271\345\220\221", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_10->setText(QCoreApplication::translate("CCSD01", "\345\244\271\347\272\2613", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_11->setText(QCoreApplication::translate("CCSD01", "\345\244\271\347\272\2614", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_16->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_20->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_17->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_21->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        comboBox_9->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_9->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        comboBox_10->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_10->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CCSD01", "\345\244\271\347\272\261\345\231\250", nullptr));
        lineEdit_22->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_18->setText(QCoreApplication::translate("CCSD01", "\351\253\230\345\215\240\347\251\272\346\257\224", nullptr));
        label_19->setText(QCoreApplication::translate("CCSD01", "\346\260\264\351\230\2001", nullptr));
        comboBox_11->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_11->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        lineEdit_23->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        comboBox_12->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_12->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        label_20->setText(QCoreApplication::translate("CCSD01", "\345\220\257\345\212\250\346\227\266\351\227\264", nullptr));
        label_21->setText(QCoreApplication::translate("CCSD01", "\344\275\216\345\215\240\347\251\272\346\257\224", nullptr));
        label_22->setText(QCoreApplication::translate("CCSD01", "\344\270\255\345\215\240\347\251\272\346\257\224", nullptr));
        lineEdit_24->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_25->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_23->setText(QCoreApplication::translate("CCSD01", "\350\204\211\345\256\275", nullptr));
        label_24->setText(QCoreApplication::translate("CCSD01", "\346\260\264\351\230\2002", nullptr));
        lineEdit_26->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_27->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_28->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_25->setText(QCoreApplication::translate("CCSD01", "\346\226\271\345\220\221", nullptr));
        lineEdit_29->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_30->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_31->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_32->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_33->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_26->setText(QCoreApplication::translate("CCSD01", "\346\260\264\351\230\2003", nullptr));
        lineEdit_34->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        label_27->setText(QCoreApplication::translate("CCSD01", "\346\260\264\351\230\2004", nullptr));
        lineEdit_35->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_36->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_37->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_38->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_39->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_40->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        lineEdit_41->setText(QCoreApplication::translate("CCSD01", "0", nullptr));
        comboBox_13->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_13->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        comboBox_14->setItemText(0, QCoreApplication::translate("CCSD01", "\346\255\243", nullptr));
        comboBox_14->setItemText(1, QCoreApplication::translate("CCSD01", "\350\264\237", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("CCSD01", "\350\275\254\345\220\221\351\230\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CCSD01: public Ui_CCSD01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCSD01_H
