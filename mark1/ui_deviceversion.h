/********************************************************************************
** Form generated from reading UI file 'deviceversion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEVERSION_H
#define UI_DEVICEVERSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceVersion
{
public:
    QPushButton *pb_back;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *DeviceVersion)
    {
        if (DeviceVersion->objectName().isEmpty())
            DeviceVersion->setObjectName(QString::fromUtf8("DeviceVersion"));
        DeviceVersion->resize(1024, 600);
        pb_back = new QPushButton(DeviceVersion);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(840, 40, 100, 27));
        widget = new QWidget(DeviceVersion);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 160, 321, 231));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);


        retranslateUi(DeviceVersion);

        QMetaObject::connectSlotsByName(DeviceVersion);
    } // setupUi

    void retranslateUi(QDialog *DeviceVersion)
    {
        DeviceVersion->setWindowTitle(QCoreApplication::translate("DeviceVersion", "Dialog", nullptr));
        pb_back->setText(QString());
        label->setText(QCoreApplication::translate("DeviceVersion", "\345\261\217\345\271\225\347\211\210\346\234\254\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("DeviceVersion", "v1.1", nullptr));
        label_3->setText(QCoreApplication::translate("DeviceVersion", "\344\270\273\346\216\247\347\211\210\346\234\254:", nullptr));
        label_4->setText(QCoreApplication::translate("DeviceVersion", "v2.2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceVersion: public Ui_DeviceVersion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEVERSION_H
