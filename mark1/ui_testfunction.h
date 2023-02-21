/********************************************************************************
** Form generated from reading UI file 'testfunction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTFUNCTION_H
#define UI_TESTFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestFunction
{
public:
    QPushButton *pb_back;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *widget_t1;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_111;
    QLabel *label_121;
    QLabel *label_131;
    QLabel *label_141;
    QLabel *label_112;
    QLabel *label_122;
    QLabel *label_132;
    QLabel *label_142;
    QWidget *tab_2;
    QWidget *widget_t2;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QLabel *label_201;
    QLabel *label_10;
    QLabel *label_202;
    QLabel *label_11;
    QLabel *label_203;
    QLabel *label_13;
    QLabel *label_204;
    QWidget *tab_3;
    QWidget *widget_t3;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_301;
    QLabel *label_14;
    QLabel *label_302;
    QLabel *label_15;
    QLabel *label_303;
    QLabel *label_16;
    QLabel *label_304;
    QWidget *tab_4;
    QWidget *widget_t4;
    QGridLayout *gridLayout_4;
    QLabel *label_311;
    QLabel *label_308;
    QLabel *label_309;
    QLabel *label_307;
    QLabel *label_17;
    QLabel *label_312;
    QLabel *label_19;
    QLabel *label_305;
    QLabel *label_18;
    QLabel *label_306;
    QLabel *label_20;
    QLabel *label_310;
    QLabel *label_313;
    QLabel *label_314;
    QWidget *tab;
    QPushButton *pb_allStop;
    QWidget *frequence_widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_frequency;
    QLabel *label_2;

    void setupUi(QDialog *TestFunction)
    {
        if (TestFunction->objectName().isEmpty())
            TestFunction->setObjectName(QString::fromUtf8("TestFunction"));
        TestFunction->resize(1024, 600);
        pb_back = new QPushButton(TestFunction);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(880, 30, 100, 27));
        tabWidget = new QTabWidget(TestFunction);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 60, 921, 451));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{min-height:60px;min-width:100px}\n"
"QTabBar::tab{background-color:#066d93;color:white}\n"
"QTabBar::tab::selected{background-color:#05526e;color:white}"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        widget_t1 = new QWidget(tab_1);
        widget_t1->setObjectName(QString::fromUtf8("widget_t1"));
        widget_t1->setGeometry(QRect(20, 20, 800, 300));
        gridLayout = new QGridLayout(widget_t1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(widget_t1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(widget_t1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(widget_t1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(widget_t1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        label_7 = new QLabel(widget_t1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(widget_t1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label_111 = new QLabel(widget_t1);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_111, 1, 1, 1, 1);

        label_121 = new QLabel(widget_t1);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        label_121->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_121, 1, 2, 1, 1);

        label_131 = new QLabel(widget_t1);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        label_131->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_131, 1, 3, 1, 1);

        label_141 = new QLabel(widget_t1);
        label_141->setObjectName(QString::fromUtf8("label_141"));
        label_141->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_141, 1, 4, 1, 1);

        label_112 = new QLabel(widget_t1);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_112, 2, 1, 1, 1);

        label_122 = new QLabel(widget_t1);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_122, 2, 2, 1, 1);

        label_132 = new QLabel(widget_t1);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_132, 2, 3, 1, 1);

        label_142 = new QLabel(widget_t1);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        label_142->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_142, 2, 4, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget_t2 = new QWidget(tab_2);
        widget_t2->setObjectName(QString::fromUtf8("widget_t2"));
        widget_t2->setGeometry(QRect(90, 40, 300, 300));
        gridLayout_2 = new QGridLayout(widget_t2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_9 = new QLabel(widget_t2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_201 = new QLabel(widget_t2);
        label_201->setObjectName(QString::fromUtf8("label_201"));
        label_201->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_201, 0, 1, 1, 1);

        label_10 = new QLabel(widget_t2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_202 = new QLabel(widget_t2);
        label_202->setObjectName(QString::fromUtf8("label_202"));
        label_202->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_202, 1, 1, 1, 1);

        label_11 = new QLabel(widget_t2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        label_203 = new QLabel(widget_t2);
        label_203->setObjectName(QString::fromUtf8("label_203"));
        label_203->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_203, 2, 1, 1, 1);

        label_13 = new QLabel(widget_t2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        label_204 = new QLabel(widget_t2);
        label_204->setObjectName(QString::fromUtf8("label_204"));
        label_204->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_204, 3, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget_t3 = new QWidget(tab_3);
        widget_t3->setObjectName(QString::fromUtf8("widget_t3"));
        widget_t3->setGeometry(QRect(90, 40, 300, 300));
        gridLayout_3 = new QGridLayout(widget_t3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_12 = new QLabel(widget_t3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        label_301 = new QLabel(widget_t3);
        label_301->setObjectName(QString::fromUtf8("label_301"));
        label_301->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_301, 0, 1, 1, 1);

        label_14 = new QLabel(widget_t3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        label_302 = new QLabel(widget_t3);
        label_302->setObjectName(QString::fromUtf8("label_302"));
        label_302->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_302, 1, 1, 1, 1);

        label_15 = new QLabel(widget_t3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        label_303 = new QLabel(widget_t3);
        label_303->setObjectName(QString::fromUtf8("label_303"));
        label_303->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_303, 2, 1, 1, 1);

        label_16 = new QLabel(widget_t3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_16, 3, 0, 1, 1);

        label_304 = new QLabel(widget_t3);
        label_304->setObjectName(QString::fromUtf8("label_304"));
        label_304->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_304, 3, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        widget_t4 = new QWidget(tab_4);
        widget_t4->setObjectName(QString::fromUtf8("widget_t4"));
        widget_t4->setGeometry(QRect(140, 20, 361, 341));
        gridLayout_4 = new QGridLayout(widget_t4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_311 = new QLabel(widget_t4);
        label_311->setObjectName(QString::fromUtf8("label_311"));
        label_311->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_311, 5, 0, 1, 1);

        label_308 = new QLabel(widget_t4);
        label_308->setObjectName(QString::fromUtf8("label_308"));
        label_308->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_308, 3, 1, 1, 1);

        label_309 = new QLabel(widget_t4);
        label_309->setObjectName(QString::fromUtf8("label_309"));
        label_309->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_309, 4, 0, 1, 1);

        label_307 = new QLabel(widget_t4);
        label_307->setObjectName(QString::fromUtf8("label_307"));
        label_307->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_307, 2, 1, 1, 1);

        label_17 = new QLabel(widget_t4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        label_312 = new QLabel(widget_t4);
        label_312->setObjectName(QString::fromUtf8("label_312"));
        label_312->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_312, 5, 1, 1, 1);

        label_19 = new QLabel(widget_t4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_19, 2, 0, 1, 1);

        label_305 = new QLabel(widget_t4);
        label_305->setObjectName(QString::fromUtf8("label_305"));
        label_305->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_305, 0, 1, 1, 1);

        label_18 = new QLabel(widget_t4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_18, 1, 0, 1, 1);

        label_306 = new QLabel(widget_t4);
        label_306->setObjectName(QString::fromUtf8("label_306"));
        label_306->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_306, 1, 1, 1, 1);

        label_20 = new QLabel(widget_t4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_20, 3, 0, 1, 1);

        label_310 = new QLabel(widget_t4);
        label_310->setObjectName(QString::fromUtf8("label_310"));
        label_310->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_310, 4, 1, 1, 1);

        label_313 = new QLabel(widget_t4);
        label_313->setObjectName(QString::fromUtf8("label_313"));
        label_313->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_313, 6, 0, 1, 1);

        label_314 = new QLabel(widget_t4);
        label_314->setObjectName(QString::fromUtf8("label_314"));
        label_314->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_314, 6, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        pb_allStop = new QPushButton(TestFunction);
        pb_allStop->setObjectName(QString::fromUtf8("pb_allStop"));
        pb_allStop->setGeometry(QRect(840, 520, 160, 60));
        frequence_widget = new QWidget(TestFunction);
        frequence_widget->setObjectName(QString::fromUtf8("frequence_widget"));
        frequence_widget->setGeometry(QRect(30, 530, 180, 50));
        horizontalLayout = new QHBoxLayout(frequence_widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frequence_widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_frequency = new QLineEdit(frequence_widget);
        lineEdit_frequency->setObjectName(QString::fromUtf8("lineEdit_frequency"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(lineEdit_frequency->sizePolicy().hasHeightForWidth());
        lineEdit_frequency->setSizePolicy(sizePolicy);
        lineEdit_frequency->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_frequency);

        label_2 = new QLabel(frequence_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(TestFunction);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TestFunction);
    } // setupUi

    void retranslateUi(QDialog *TestFunction)
    {
        TestFunction->setWindowTitle(QCoreApplication::translate("TestFunction", "Dialog", nullptr));
        pb_back->setText(QString());
        label_3->setText(QCoreApplication::translate("TestFunction", "\345\202\250\347\272\254\345\231\2501", nullptr));
        label_4->setText(QCoreApplication::translate("TestFunction", "\345\202\250\347\272\254\345\231\2502", nullptr));
        label_5->setText(QCoreApplication::translate("TestFunction", "\345\202\250\347\272\254\345\231\2503", nullptr));
        label_6->setText(QCoreApplication::translate("TestFunction", "\345\202\250\347\272\254\345\231\2504", nullptr));
        label_7->setText(QCoreApplication::translate("TestFunction", "\351\251\254\350\276\276", nullptr));
        label_8->setText(QCoreApplication::translate("TestFunction", "\347\224\265\347\243\201\351\222\210", nullptr));
        label_111->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_121->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_131->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_141->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_112->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_122->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_132->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_142->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("TestFunction", "\345\202\250\347\272\254\345\231\250", nullptr));
        label_9->setText(QCoreApplication::translate("TestFunction", "\345\244\271\347\272\261\345\231\2501\357\274\232", nullptr));
        label_201->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_10->setText(QCoreApplication::translate("TestFunction", "\345\244\271\347\272\261\345\231\2502\357\274\232", nullptr));
        label_202->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_11->setText(QCoreApplication::translate("TestFunction", "\345\244\271\347\272\261\345\231\2503\357\274\232", nullptr));
        label_203->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_13->setText(QCoreApplication::translate("TestFunction", "\345\244\271\347\272\261\345\231\2504\357\274\232", nullptr));
        label_204->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("TestFunction", "\345\244\271\347\272\261\345\231\250", nullptr));
        label_12->setText(QCoreApplication::translate("TestFunction", "\350\275\254\351\230\2001\357\274\232", nullptr));
        label_301->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_14->setText(QCoreApplication::translate("TestFunction", "\350\275\254\351\230\2002\357\274\232", nullptr));
        label_302->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_15->setText(QCoreApplication::translate("TestFunction", "\350\275\254\351\230\2003\357\274\232", nullptr));
        label_303->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_16->setText(QCoreApplication::translate("TestFunction", "\350\275\254\351\230\2004\357\274\232", nullptr));
        label_304->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("TestFunction", "\350\275\254\351\230\200", nullptr));
        label_311->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_308->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_309->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_307->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_17->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_312->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_19->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_305->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_18->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_306->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_20->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_310->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_313->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_314->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("TestFunction", "\347\273\217\347\272\261\346\243\200\346\265\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("TestFunction", "\347\251\272\350\275\246\346\250\241\345\274\217", nullptr));
        pb_allStop->setText(QCoreApplication::translate("TestFunction", "\345\205\250\351\203\250\345\201\234\346\255\242", nullptr));
        label->setText(QCoreApplication::translate("TestFunction", "\351\242\221\347\216\207\357\274\232", nullptr));
        lineEdit_frequency->setText(QCoreApplication::translate("TestFunction", "0", nullptr));
        label_2->setText(QCoreApplication::translate("TestFunction", "\350\265\253\345\205\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestFunction: public Ui_TestFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTFUNCTION_H
