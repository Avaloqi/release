/********************************************************************************
** Form generated from reading UI file 'dialog02.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG02_H
#define UI_DIALOG02_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog02
{
public:
    QPushButton *pb_leftTop;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QTimeEdit *timeEdit;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QFontComboBox *fontComboBox;
    QWidget *tab_3;
    QSpinBox *spinBox;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QWidget *tab_4;
    QDial *dial;
    QComboBox *comboBox;
    QSlider *horizontalSlider;

    void setupUi(QDialog *Dialog02)
    {
        if (Dialog02->objectName().isEmpty())
            Dialog02->setObjectName(QString::fromUtf8("Dialog02"));
        Dialog02->resize(1024, 600);
        pb_leftTop = new QPushButton(Dialog02);
        pb_leftTop->setObjectName(QString::fromUtf8("pb_leftTop"));
        pb_leftTop->setGeometry(QRect(870, 30, 89, 25));
        tabWidget = new QTabWidget(Dialog02);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 20, 821, 471));
        QFont font;
        font.setPointSize(18);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 80, 151, 51));
        timeEdit = new QTimeEdit(tab);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(250, 100, 118, 26));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(120, 70, 104, 70));
        fontComboBox = new QFontComboBox(tab_2);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setGeometry(QRect(140, 220, 228, 25));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        spinBox = new QSpinBox(tab_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(100, 90, 48, 26));
        lcdNumber = new QLCDNumber(tab_3);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(180, 90, 64, 23));
        progressBar = new QProgressBar(tab_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(100, 140, 118, 23));
        progressBar->setValue(24);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        dial = new QDial(tab_4);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(130, 80, 50, 64));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(310, 100, 86, 25));
        horizontalSlider = new QSlider(tab_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(130, 200, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab_4, QString());

        retranslateUi(Dialog02);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog02);
    } // setupUi

    void retranslateUi(QDialog *Dialog02)
    {
        Dialog02->setWindowTitle(QCoreApplication::translate("Dialog02", "Dialog", nullptr));
        pb_leftTop->setText(QString());
        label->setText(QCoreApplication::translate("Dialog02", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dialog02", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Dialog02", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Dialog02", "3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Dialog02", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog02: public Ui_Dialog02 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG02_H
