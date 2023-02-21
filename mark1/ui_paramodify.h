/********************************************************************************
** Form generated from reading UI file 'paramodify.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMODIFY_H
#define UI_PARAMODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParaModify
{
public:
    QPushButton *pb_back;
    QWidget *buttonsWidget;
    QGridLayout *gridLayout;
    QPushButton *pb_ChuWeiQI;
    QPushButton *pb_YinWeiCanShu;
    QPushButton *pb_TanWeiSheDing;
    QPushButton *pb_JingShaJianCe;
    QPushButton *pb_QITingSheDing;
    QPushButton *pb_DIngChangSheDing;
    QPushButton *pb_ReadPara;
    QPushButton *pb_DownloadPara;

    void setupUi(QDialog *ParaModify)
    {
        if (ParaModify->objectName().isEmpty())
            ParaModify->setObjectName(QString::fromUtf8("ParaModify"));
        ParaModify->resize(1024, 600);
        pb_back = new QPushButton(ParaModify);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(870, 30, 100, 27));
        buttonsWidget = new QWidget(ParaModify);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        buttonsWidget->setGeometry(QRect(170, 80, 611, 311));
        gridLayout = new QGridLayout(buttonsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(80);
        gridLayout->setVerticalSpacing(60);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pb_ChuWeiQI = new QPushButton(buttonsWidget);
        pb_ChuWeiQI->setObjectName(QString::fromUtf8("pb_ChuWeiQI"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_ChuWeiQI->sizePolicy().hasHeightForWidth());
        pb_ChuWeiQI->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_ChuWeiQI, 0, 0, 1, 1);

        pb_YinWeiCanShu = new QPushButton(buttonsWidget);
        pb_YinWeiCanShu->setObjectName(QString::fromUtf8("pb_YinWeiCanShu"));
        sizePolicy.setHeightForWidth(pb_YinWeiCanShu->sizePolicy().hasHeightForWidth());
        pb_YinWeiCanShu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_YinWeiCanShu, 0, 1, 1, 1);

        pb_TanWeiSheDing = new QPushButton(buttonsWidget);
        pb_TanWeiSheDing->setObjectName(QString::fromUtf8("pb_TanWeiSheDing"));
        sizePolicy.setHeightForWidth(pb_TanWeiSheDing->sizePolicy().hasHeightForWidth());
        pb_TanWeiSheDing->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_TanWeiSheDing, 0, 2, 1, 1);

        pb_JingShaJianCe = new QPushButton(buttonsWidget);
        pb_JingShaJianCe->setObjectName(QString::fromUtf8("pb_JingShaJianCe"));
        sizePolicy.setHeightForWidth(pb_JingShaJianCe->sizePolicy().hasHeightForWidth());
        pb_JingShaJianCe->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_JingShaJianCe, 1, 0, 1, 1);

        pb_QITingSheDing = new QPushButton(buttonsWidget);
        pb_QITingSheDing->setObjectName(QString::fromUtf8("pb_QITingSheDing"));
        sizePolicy.setHeightForWidth(pb_QITingSheDing->sizePolicy().hasHeightForWidth());
        pb_QITingSheDing->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_QITingSheDing, 1, 1, 1, 1);

        pb_DIngChangSheDing = new QPushButton(buttonsWidget);
        pb_DIngChangSheDing->setObjectName(QString::fromUtf8("pb_DIngChangSheDing"));
        sizePolicy.setHeightForWidth(pb_DIngChangSheDing->sizePolicy().hasHeightForWidth());
        pb_DIngChangSheDing->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_DIngChangSheDing, 1, 2, 1, 1);

        pb_ReadPara = new QPushButton(buttonsWidget);
        pb_ReadPara->setObjectName(QString::fromUtf8("pb_ReadPara"));
        sizePolicy.setHeightForWidth(pb_ReadPara->sizePolicy().hasHeightForWidth());
        pb_ReadPara->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_ReadPara, 2, 0, 1, 1);

        pb_DownloadPara = new QPushButton(buttonsWidget);
        pb_DownloadPara->setObjectName(QString::fromUtf8("pb_DownloadPara"));
        sizePolicy.setHeightForWidth(pb_DownloadPara->sizePolicy().hasHeightForWidth());
        pb_DownloadPara->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_DownloadPara, 2, 1, 1, 1);


        retranslateUi(ParaModify);

        QMetaObject::connectSlotsByName(ParaModify);
    } // setupUi

    void retranslateUi(QDialog *ParaModify)
    {
        ParaModify->setWindowTitle(QCoreApplication::translate("ParaModify", "Dialog", nullptr));
        pb_back->setText(QString());
        pb_ChuWeiQI->setText(QCoreApplication::translate("ParaModify", "\345\202\250\347\272\254\345\231\250", nullptr));
        pb_YinWeiCanShu->setText(QCoreApplication::translate("ParaModify", "\345\274\225\347\272\254\345\217\202\346\225\260", nullptr));
        pb_TanWeiSheDing->setText(QCoreApplication::translate("ParaModify", "\346\216\242\347\272\254\350\256\276\345\256\232", nullptr));
        pb_JingShaJianCe->setText(QCoreApplication::translate("ParaModify", "\347\273\217\347\272\261\346\243\200\346\265\213", nullptr));
        pb_QITingSheDing->setText(QCoreApplication::translate("ParaModify", "\345\220\257\345\201\234\350\256\276\345\256\232", nullptr));
        pb_DIngChangSheDing->setText(QCoreApplication::translate("ParaModify", "\345\256\232\351\225\277\350\256\276\345\256\232", nullptr));
        pb_ReadPara->setText(QCoreApplication::translate("ParaModify", "\350\257\273\345\217\226\346\234\272\346\242\260\345\217\202\346\225\260", nullptr));
        pb_DownloadPara->setText(QCoreApplication::translate("ParaModify", "\344\270\213\350\275\275\346\234\272\346\242\260\345\217\202\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParaModify: public Ui_ParaModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMODIFY_H
