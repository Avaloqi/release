/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *timeLabel;
    QWidget *buttonsHW;
    QHBoxLayout *horizontalLayout_2;
    QWidget *button0_2;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pb1;
    QWidget *button0_3;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pb2;
    QWidget *button0_5;
    QVBoxLayout *verticalLayout_12;
    QPushButton *pb3;
    QWidget *button0_4;
    QVBoxLayout *verticalLayout_11;
    QPushButton *pb4;
    QWidget *button0_6;
    QVBoxLayout *verticalLayout_13;
    QPushButton *pb5;
    QWidget *button0_8;
    QVBoxLayout *verticalLayout_15;
    QPushButton *pb6;
    QWidget *button0_7;
    QVBoxLayout *verticalLayout_14;
    QPushButton *pb7;
    QWidget *button0_9;
    QVBoxLayout *verticalLayout_16;
    QPushButton *pb8;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_13;
    QWidget *widget2;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_24;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        timeLabel = new QLabel(centralWidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(400, 30, 111, 17));
        timeLabel->setAlignment(Qt::AlignCenter);
        buttonsHW = new QWidget(centralWidget);
        buttonsHW->setObjectName(QString::fromUtf8("buttonsHW"));
        buttonsHW->setGeometry(QRect(110, 410, 791, 101));
        horizontalLayout_2 = new QHBoxLayout(buttonsHW);
        horizontalLayout_2->setSpacing(40);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        button0_2 = new QWidget(buttonsHW);
        button0_2->setObjectName(QString::fromUtf8("button0_2"));
        verticalLayout_9 = new QVBoxLayout(button0_2);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pb1 = new QPushButton(button0_2);
        pb1->setObjectName(QString::fromUtf8("pb1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb1->sizePolicy().hasHeightForWidth());
        pb1->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(pb1);

        verticalLayout_9->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_2);

        button0_3 = new QWidget(buttonsHW);
        button0_3->setObjectName(QString::fromUtf8("button0_3"));
        verticalLayout_10 = new QVBoxLayout(button0_3);
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        pb2 = new QPushButton(button0_3);
        pb2->setObjectName(QString::fromUtf8("pb2"));
        sizePolicy.setHeightForWidth(pb2->sizePolicy().hasHeightForWidth());
        pb2->setSizePolicy(sizePolicy);

        verticalLayout_10->addWidget(pb2);

        verticalLayout_10->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_3);

        button0_5 = new QWidget(buttonsHW);
        button0_5->setObjectName(QString::fromUtf8("button0_5"));
        verticalLayout_12 = new QVBoxLayout(button0_5);
        verticalLayout_12->setSpacing(5);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        pb3 = new QPushButton(button0_5);
        pb3->setObjectName(QString::fromUtf8("pb3"));
        sizePolicy.setHeightForWidth(pb3->sizePolicy().hasHeightForWidth());
        pb3->setSizePolicy(sizePolicy);

        verticalLayout_12->addWidget(pb3);

        verticalLayout_12->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_5);

        button0_4 = new QWidget(buttonsHW);
        button0_4->setObjectName(QString::fromUtf8("button0_4"));
        verticalLayout_11 = new QVBoxLayout(button0_4);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        pb4 = new QPushButton(button0_4);
        pb4->setObjectName(QString::fromUtf8("pb4"));
        sizePolicy.setHeightForWidth(pb4->sizePolicy().hasHeightForWidth());
        pb4->setSizePolicy(sizePolicy);

        verticalLayout_11->addWidget(pb4);

        verticalLayout_11->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_4);

        button0_6 = new QWidget(buttonsHW);
        button0_6->setObjectName(QString::fromUtf8("button0_6"));
        verticalLayout_13 = new QVBoxLayout(button0_6);
        verticalLayout_13->setSpacing(5);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        pb5 = new QPushButton(button0_6);
        pb5->setObjectName(QString::fromUtf8("pb5"));
        sizePolicy.setHeightForWidth(pb5->sizePolicy().hasHeightForWidth());
        pb5->setSizePolicy(sizePolicy);

        verticalLayout_13->addWidget(pb5);

        verticalLayout_13->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_6);

        button0_8 = new QWidget(buttonsHW);
        button0_8->setObjectName(QString::fromUtf8("button0_8"));
        verticalLayout_15 = new QVBoxLayout(button0_8);
        verticalLayout_15->setSpacing(5);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        pb6 = new QPushButton(button0_8);
        pb6->setObjectName(QString::fromUtf8("pb6"));
        sizePolicy.setHeightForWidth(pb6->sizePolicy().hasHeightForWidth());
        pb6->setSizePolicy(sizePolicy);

        verticalLayout_15->addWidget(pb6);

        verticalLayout_15->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_8);

        button0_7 = new QWidget(buttonsHW);
        button0_7->setObjectName(QString::fromUtf8("button0_7"));
        verticalLayout_14 = new QVBoxLayout(button0_7);
        verticalLayout_14->setSpacing(5);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        pb7 = new QPushButton(button0_7);
        pb7->setObjectName(QString::fromUtf8("pb7"));
        sizePolicy.setHeightForWidth(pb7->sizePolicy().hasHeightForWidth());
        pb7->setSizePolicy(sizePolicy);

        verticalLayout_14->addWidget(pb7);

        verticalLayout_14->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_7);

        button0_9 = new QWidget(buttonsHW);
        button0_9->setObjectName(QString::fromUtf8("button0_9"));
        verticalLayout_16 = new QVBoxLayout(button0_9);
        verticalLayout_16->setSpacing(5);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        pb8 = new QPushButton(button0_9);
        pb8->setObjectName(QString::fromUtf8("pb8"));
        sizePolicy.setHeightForWidth(pb8->sizePolicy().hasHeightForWidth());
        pb8->setSizePolicy(sizePolicy);

        verticalLayout_16->addWidget(pb8);

        verticalLayout_16->setStretch(0, 3);

        horizontalLayout_2->addWidget(button0_9);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(170, 60, 281, 291));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(30);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 15, 10, 15);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 3, 1, 1, 1);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 4, 1, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 2, 1, 1);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        label_13 = new QLabel(widget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 5, 1, 1, 1);

        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 4);
        gridLayout->setColumnStretch(2, 1);
        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(540, 50, 281, 291));
        gridLayout_2 = new QGridLayout(widget2);
        gridLayout_2->setSpacing(30);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 15, 10, 15);
        label_14 = new QLabel(widget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_14, 0, 0, 1, 1);

        label_15 = new QLabel(widget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_15, 0, 1, 1, 1);

        label_16 = new QLabel(widget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(widget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_17, 1, 1, 1, 1);

        label_18 = new QLabel(widget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 2, 0, 1, 1);

        label_19 = new QLabel(widget2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_19, 2, 1, 1, 1);

        label_20 = new QLabel(widget2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 3, 0, 1, 1);

        label_21 = new QLabel(widget2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_21, 3, 1, 1, 1);

        label_22 = new QLabel(widget2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 4, 0, 1, 1);

        label_23 = new QLabel(widget2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_23, 4, 1, 1, 1);

        label_25 = new QLabel(widget2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 5, 0, 1, 1);

        label_26 = new QLabel(widget2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_26, 5, 1, 1, 1);

        label_24 = new QLabel(widget2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_24, 1, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 4);
        gridLayout_2->setColumnStretch(1, 4);
        gridLayout_2->setColumnStretch(2, 1);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        timeLabel->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pb1->setText(QCoreApplication::translate("MainWindow", "\350\212\261\345\236\213\n"
"\347\274\226\345\206\231", nullptr));
        pb2->setText(QCoreApplication::translate("MainWindow", "\350\277\220\350\241\214\n"
"\345\217\202\346\225\260", nullptr));
        pb3->setText(QCoreApplication::translate("MainWindow", "\345\207\272\345\216\202\n"
"\351\205\215\347\275\256", nullptr));
        pb4->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\n"
"\345\212\237\350\203\275", nullptr));
        pb5->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\n"
"\345\215\207\347\272\247", nullptr));
        pb6->setText(QCoreApplication::translate("MainWindow", "\345\217\230\351\242\221\345\231\250\n"
"\347\212\266\346\200\201", nullptr));
        pb7->setText(QCoreApplication::translate("MainWindow", "\347\224\265\351\200\201\n"
"\347\224\265\345\215\267", nullptr));
        pb8->setText(QCoreApplication::translate("MainWindow", "\345\221\274\345\217\253\n"
"\347\273\264\344\277\256\345\267\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\273\350\275\264\350\247\222\345\272\246", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\275\246\351\200\237", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\347\217\255\346\254\241", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\225\210\347\216\207", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\234\272\344\270\212\346\255\245\351\225\277", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\261\263", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\234\272\344\270\212\350\212\261\345\236\213", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "abc", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\350\220\275\345\270\203\351\242\204\346\265\213", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "99:99:99", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\347\273\207\347\211\251\345\256\232\351\225\277", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "6242.48", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\351\200\232\347\224\265\346\227\266\351\225\277", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "00\357\274\23200\357\274\23200", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\350\277\220\350\241\214\346\227\266\351\225\277", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "00\357\274\23200\357\274\23200", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\346\234\254\346\254\241\345\274\200\346\234\272\346\227\266\351\225\277", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "00\357\274\23200\357\274\23200", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\345\210\260\350\276\276\350\247\222\345\272\246", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\347\261\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
