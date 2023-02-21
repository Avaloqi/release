/********************************************************************************
** Form generated from reading UI file 'ccsd03.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCSD03_H
#define UI_CCSD03_H

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

class Ui_CCSD03
{
public:
    QPushButton *pb_back;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLabel *label_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLabel *label_5;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QLabel *label_6;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_5;
    QLabel *label_11;
    QWidget *tab_2;
    QWidget *widget_7;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_16;
    QLineEdit *lineEdit_13;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QDialogButtonBox *buttonBox;
    QWidget *widget_8;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_16;
    QLabel *label_22;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_14;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_23;

    void setupUi(QDialog *CCSD03)
    {
        if (CCSD03->objectName().isEmpty())
            CCSD03->setObjectName(QString::fromUtf8("CCSD03"));
        CCSD03->resize(1024, 600);
        pb_back = new QPushButton(CCSD03);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(880, 20, 100, 27));
        tabWidget = new QTabWidget(CCSD03);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 30, 821, 541));
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
        widget->setGeometry(QRect(90, 50, 401, 341));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(80);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_2);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);


        gridLayout->addWidget(widget_3, 2, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(widget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_3);

        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);


        gridLayout->addWidget(widget_4, 3, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(widget_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_4);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);


        gridLayout->addWidget(widget_5, 4, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(widget_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_5);

        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);


        gridLayout->addWidget(widget_6, 5, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget_7 = new QWidget(tab_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(70, 170, 231, 141));
        gridLayout_2 = new QGridLayout(widget_7);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        label_12 = new QLabel(widget_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        label_16 = new QLabel(widget_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_16, 3, 0, 1, 1);

        lineEdit_13 = new QLineEdit(widget_7);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_13, 3, 1, 1, 1);

        comboBox_2 = new QComboBox(widget_7);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_2->addWidget(comboBox_2, 0, 1, 1, 1);

        comboBox_3 = new QComboBox(widget_7);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_2->addWidget(comboBox_3, 2, 1, 1, 1);

        widget1 = new QWidget(tab_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(70, 60, 261, 45));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(widget1);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_6->addWidget(label_19);

        buttonBox = new QDialogButtonBox(widget1);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        horizontalLayout_6->addWidget(buttonBox);

        widget_8 = new QWidget(tab_2);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(380, 180, 261, 141));
        gridLayout_3 = new QGridLayout(widget_8);
        gridLayout_3->setSpacing(10);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_16 = new QLineEdit(widget_8);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_16, 3, 2, 1, 1);

        label_22 = new QLabel(widget_8);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_22, 4, 0, 1, 1);

        lineEdit_15 = new QLineEdit(widget_8);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_15, 1, 2, 1, 1);

        lineEdit_14 = new QLineEdit(widget_8);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lineEdit_14, 4, 2, 1, 1);

        label_20 = new QLabel(widget_8);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_20, 1, 0, 1, 1);

        label_21 = new QLabel(widget_8);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_21, 2, 0, 1, 1);

        label_23 = new QLabel(widget_8);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_23, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(CCSD03);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CCSD03);
    } // setupUi

    void retranslateUi(QDialog *CCSD03)
    {
        CCSD03->setWindowTitle(QCoreApplication::translate("CCSD03", "Dialog", nullptr));
        pb_back->setText(QString());
        label->setText(QCoreApplication::translate("CCSD03", "\344\270\273\351\251\254\350\276\276\351\251\261\345\212\250\346\226\271\345\274\217", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("CCSD03", "\345\267\245\351\242\221\347\233\264\351\251\261", nullptr));

        label_2->setText(QCoreApplication::translate("CCSD03", "\347\273\207\345\270\203\346\234\272\350\275\246\351\200\237", nullptr));
        lineEdit->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        label_7->setText(QCoreApplication::translate("CCSD03", "\350\275\254/\345\210\206", nullptr));
        label_3->setText(QCoreApplication::translate("CCSD03", "\345\212\240\351\200\237\347\224\265\346\265\201\357\274\210\345\277\253\350\275\246\357\274\211", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        label_8->setText(QCoreApplication::translate("CCSD03", "  A   ", nullptr));
        label_4->setText(QCoreApplication::translate("CCSD03", "\345\212\240\351\200\237\347\224\265\346\265\201\357\274\210\346\205\242\350\275\246\357\274\211", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        label_9->setText(QCoreApplication::translate("CCSD03", "  A   ", nullptr));
        label_5->setText(QCoreApplication::translate("CCSD03", "\344\277\235\346\214\201\347\224\265\346\265\201\357\274\210\351\235\231\346\255\242\357\274\211", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        label_10->setText(QCoreApplication::translate("CCSD03", "  A   ", nullptr));
        label_6->setText(QCoreApplication::translate("CCSD03", "\351\253\230\345\216\213\345\210\271\350\275\246\357\274\210\346\227\266\351\227\264\357\274\211", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        label_11->setText(QCoreApplication::translate("CCSD03", "  A   ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CCSD03", "\345\270\270\350\247\204", nullptr));
        label_14->setText(QCoreApplication::translate("CCSD03", "\350\267\237\351\232\217\347\262\276\345\272\246\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("CCSD03", "\346\227\213\350\275\254\346\226\271\345\220\221\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("CCSD03", "\346\200\273\350\204\211\345\206\262\357\274\232", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("CCSD03", "\351\241\272\346\227\266\351\222\210", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("CCSD03", "\351\200\206\346\227\266\351\222\210", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("CCSD03", "\351\253\230", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("CCSD03", "\344\275\216", nullptr));

        label_19->setText(QCoreApplication::translate("CCSD03", "\346\240\241\346\255\243\347\274\226\347\240\201\345\231\250", nullptr));
        lineEdit_16->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        label_22->setText(QCoreApplication::translate("CCSD03", "\345\275\223\345\211\215\350\247\222\345\272\246\357\274\232", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("CCSD03", "0", nullptr));
        label_20->setText(QCoreApplication::translate("CCSD03", "\346\234\272\346\242\260\350\247\222\345\272\246\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("CCSD03", "\345\274\200\345\247\213\346\240\241\346\255\243\357\274\232", nullptr));
        label_23->setText(QCoreApplication::translate("CCSD03", "\345\275\223\345\211\215\350\204\211\345\206\262\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CCSD03", "\347\274\226\347\240\201\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CCSD03: public Ui_CCSD03 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCSD03_H
