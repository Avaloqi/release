/********************************************************************************
** Form generated from reading UI file 'factorysetting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORYSETTING_H
#define UI_FACTORYSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FactorySetting
{
public:
    QPushButton *pb_back;
    QWidget *buttonsWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_ChangGuiPeiZhi;
    QPushButton *pb_YinWeiPeiZhi;
    QPushButton *pb_ZhuMaDa;

    void setupUi(QDialog *FactorySetting)
    {
        if (FactorySetting->objectName().isEmpty())
            FactorySetting->setObjectName(QString::fromUtf8("FactorySetting"));
        FactorySetting->resize(1024, 600);
        pb_back = new QPushButton(FactorySetting);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(880, 40, 100, 27));
        buttonsWidget = new QWidget(FactorySetting);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        buttonsWidget->setGeometry(QRect(180, 190, 601, 91));
        horizontalLayout = new QHBoxLayout(buttonsWidget);
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pb_ChangGuiPeiZhi = new QPushButton(buttonsWidget);
        pb_ChangGuiPeiZhi->setObjectName(QString::fromUtf8("pb_ChangGuiPeiZhi"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_ChangGuiPeiZhi->sizePolicy().hasHeightForWidth());
        pb_ChangGuiPeiZhi->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb_ChangGuiPeiZhi);

        pb_YinWeiPeiZhi = new QPushButton(buttonsWidget);
        pb_YinWeiPeiZhi->setObjectName(QString::fromUtf8("pb_YinWeiPeiZhi"));
        sizePolicy.setHeightForWidth(pb_YinWeiPeiZhi->sizePolicy().hasHeightForWidth());
        pb_YinWeiPeiZhi->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb_YinWeiPeiZhi);

        pb_ZhuMaDa = new QPushButton(buttonsWidget);
        pb_ZhuMaDa->setObjectName(QString::fromUtf8("pb_ZhuMaDa"));
        sizePolicy.setHeightForWidth(pb_ZhuMaDa->sizePolicy().hasHeightForWidth());
        pb_ZhuMaDa->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb_ZhuMaDa);


        retranslateUi(FactorySetting);

        QMetaObject::connectSlotsByName(FactorySetting);
    } // setupUi

    void retranslateUi(QDialog *FactorySetting)
    {
        FactorySetting->setWindowTitle(QCoreApplication::translate("FactorySetting", "Dialog", nullptr));
        pb_back->setText(QString());
        pb_ChangGuiPeiZhi->setText(QCoreApplication::translate("FactorySetting", "\345\270\270\350\247\204\351\205\215\347\275\256", nullptr));
        pb_YinWeiPeiZhi->setText(QCoreApplication::translate("FactorySetting", "\345\274\225\347\272\254\351\205\215\347\275\256", nullptr));
        pb_ZhuMaDa->setText(QCoreApplication::translate("FactorySetting", "\344\270\273\351\251\254\350\276\276/\345\210\271\350\275\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FactorySetting: public Ui_FactorySetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORYSETTING_H
