/********************************************************************************
** Form generated from reading UI file 'dialog01.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG01_H
#define UI_DIALOG01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog01
{
public:
    QPushButton *pushButton;
    QPushButton *pb_leftTop;

    void setupUi(QDialog *Dialog01)
    {
        if (Dialog01->objectName().isEmpty())
            Dialog01->setObjectName(QString::fromUtf8("Dialog01"));
        Dialog01->resize(1024, 600);
        pushButton = new QPushButton(Dialog01);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(900, 110, 89, 25));
        pb_leftTop = new QPushButton(Dialog01);
        pb_leftTop->setObjectName(QString::fromUtf8("pb_leftTop"));
        pb_leftTop->setGeometry(QRect(924, 30, 50, 50));
        pb_leftTop->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(Dialog01);

        QMetaObject::connectSlotsByName(Dialog01);
    } // setupUi

    void retranslateUi(QDialog *Dialog01)
    {
        Dialog01->setWindowTitle(QCoreApplication::translate("Dialog01", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog01", "Next", nullptr));
        pb_leftTop->setText(QCoreApplication::translate("Dialog01", "12", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog01: public Ui_Dialog01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG01_H
