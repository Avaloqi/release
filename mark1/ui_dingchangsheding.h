/********************************************************************************
** Form generated from reading UI file 'dingchangsheding.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINGCHANGSHEDING_H
#define UI_DINGCHANGSHEDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DingChangSheDIng
{
public:
    QPushButton *pb_back;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *comboBox_2;

    void setupUi(QDialog *DingChangSheDIng)
    {
        if (DingChangSheDIng->objectName().isEmpty())
            DingChangSheDIng->setObjectName(QString::fromUtf8("DingChangSheDIng"));
        DingChangSheDIng->resize(1024, 600);
        pb_back = new QPushButton(DingChangSheDIng);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(880, 40, 100, 27));
        widget = new QWidget(DingChangSheDIng);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 100, 291, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_2);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        comboBox = new QComboBox(widget_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        comboBox_2 = new QComboBox(widget_5);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(comboBox_2);


        verticalLayout->addWidget(widget_5);


        retranslateUi(DingChangSheDIng);

        QMetaObject::connectSlotsByName(DingChangSheDIng);
    } // setupUi

    void retranslateUi(QDialog *DingChangSheDIng)
    {
        DingChangSheDIng->setWindowTitle(QCoreApplication::translate("DingChangSheDIng", "Dialog", nullptr));
        pb_back->setText(QString());
        label->setText(QCoreApplication::translate("DingChangSheDIng", "       \347\272\254\345\257\206", nullptr));
        label_2->setText(QCoreApplication::translate("DingChangSheDIng", "\345\216\230\347\261\263", nullptr));
        label_3->setText(QCoreApplication::translate("DingChangSheDIng", "\345\256\232\351\225\277\350\256\276\345\256\232 ", nullptr));
        label_4->setText(QCoreApplication::translate("DingChangSheDIng", "\347\261\263   ", nullptr));
        label_5->setText(QCoreApplication::translate("DingChangSheDIng", "\346\217\220\351\206\222\346\226\271\345\274\217", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DingChangSheDIng", "\345\205\263", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DingChangSheDIng", "\344\273\205\346\214\207\347\244\272\347\201\257\344\272\256", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DingChangSheDIng", "\346\214\207\347\244\272\347\201\257+\345\201\234\350\275\246", nullptr));

        label_6->setText(QCoreApplication::translate("DingChangSheDIng", "\351\225\277\345\272\246\345\215\225\344\275\215", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("DingChangSheDIng", "\347\261\263", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("DingChangSheDIng", "\347\272\254", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DingChangSheDIng: public Ui_DingChangSheDIng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINGCHANGSHEDING_H
