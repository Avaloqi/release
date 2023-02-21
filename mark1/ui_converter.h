/********************************************************************************
** Form generated from reading UI file 'converter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTER_H
#define UI_CONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Converter
{
public:
    QPushButton *pb_back;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Converter)
    {
        if (Converter->objectName().isEmpty())
            Converter->setObjectName(QString::fromUtf8("Converter"));
        Converter->resize(1024, 600);
        pb_back = new QPushButton(Converter);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(870, 40, 100, 27));
        widget = new QWidget(Converter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 230, 571, 81));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(150);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(Converter);

        QMetaObject::connectSlotsByName(Converter);
    } // setupUi

    void retranslateUi(QDialog *Converter)
    {
        Converter->setWindowTitle(QCoreApplication::translate("Converter", "Dialog", nullptr));
        pb_back->setText(QString());
        pushButton->setText(QCoreApplication::translate("Converter", "\350\277\220\350\241\214\347\212\266\346\200\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Converter", "\345\217\230\351\242\221\345\231\250\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Converter: public Ui_Converter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_H
