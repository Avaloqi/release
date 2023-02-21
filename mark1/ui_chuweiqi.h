/********************************************************************************
** Form generated from reading UI file 'chuweiqi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHUWEIQI_H
#define UI_CHUWEIQI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChuWeiQI
{
public:
    QPushButton *pb_back;
    QWidget *buttonsWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_ChangGui;
    QPushButton *pb_FangShaJiaoDu;
    QPushButton *pb_ChuanGanQi;
    QPushButton *pb_WeiShaZhiDong;
    QWidget *buttonsWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb_cwq1;
    QPushButton *pb_cwq2;
    QPushButton *pb_cwq3;
    QPushButton *pb_cwq4;
    QStackedWidget *stackedWidget;
    QWidget *page_0;

    void setupUi(QDialog *ChuWeiQI)
    {
        if (ChuWeiQI->objectName().isEmpty())
            ChuWeiQI->setObjectName(QString::fromUtf8("ChuWeiQI"));
        ChuWeiQI->resize(1024, 600);
        pb_back = new QPushButton(ChuWeiQI);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(870, 50, 100, 27));
        buttonsWidget1 = new QWidget(ChuWeiQI);
        buttonsWidget1->setObjectName(QString::fromUtf8("buttonsWidget1"));
        buttonsWidget1->setGeometry(QRect(80, 50, 571, 81));
        horizontalLayout = new QHBoxLayout(buttonsWidget1);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pb_ChangGui = new QPushButton(buttonsWidget1);
        pb_ChangGui->setObjectName(QString::fromUtf8("pb_ChangGui"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_ChangGui->sizePolicy().hasHeightForWidth());
        pb_ChangGui->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb_ChangGui);

        pb_FangShaJiaoDu = new QPushButton(buttonsWidget1);
        pb_FangShaJiaoDu->setObjectName(QString::fromUtf8("pb_FangShaJiaoDu"));
        sizePolicy.setHeightForWidth(pb_FangShaJiaoDu->sizePolicy().hasHeightForWidth());
        pb_FangShaJiaoDu->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb_FangShaJiaoDu);

        pb_ChuanGanQi = new QPushButton(buttonsWidget1);
        pb_ChuanGanQi->setObjectName(QString::fromUtf8("pb_ChuanGanQi"));
        sizePolicy.setHeightForWidth(pb_ChuanGanQi->sizePolicy().hasHeightForWidth());
        pb_ChuanGanQi->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb_ChuanGanQi);

        pb_WeiShaZhiDong = new QPushButton(buttonsWidget1);
        pb_WeiShaZhiDong->setObjectName(QString::fromUtf8("pb_WeiShaZhiDong"));
        sizePolicy.setHeightForWidth(pb_WeiShaZhiDong->sizePolicy().hasHeightForWidth());
        pb_WeiShaZhiDong->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb_WeiShaZhiDong);

        buttonsWidget2 = new QWidget(ChuWeiQI);
        buttonsWidget2->setObjectName(QString::fromUtf8("buttonsWidget2"));
        buttonsWidget2->setGeometry(QRect(80, 480, 571, 81));
        horizontalLayout_2 = new QHBoxLayout(buttonsWidget2);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_cwq1 = new QPushButton(buttonsWidget2);
        pb_cwq1->setObjectName(QString::fromUtf8("pb_cwq1"));
        sizePolicy.setHeightForWidth(pb_cwq1->sizePolicy().hasHeightForWidth());
        pb_cwq1->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pb_cwq1);

        pb_cwq2 = new QPushButton(buttonsWidget2);
        pb_cwq2->setObjectName(QString::fromUtf8("pb_cwq2"));
        sizePolicy.setHeightForWidth(pb_cwq2->sizePolicy().hasHeightForWidth());
        pb_cwq2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pb_cwq2);

        pb_cwq3 = new QPushButton(buttonsWidget2);
        pb_cwq3->setObjectName(QString::fromUtf8("pb_cwq3"));
        sizePolicy.setHeightForWidth(pb_cwq3->sizePolicy().hasHeightForWidth());
        pb_cwq3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pb_cwq3);

        pb_cwq4 = new QPushButton(buttonsWidget2);
        pb_cwq4->setObjectName(QString::fromUtf8("pb_cwq4"));
        sizePolicy.setHeightForWidth(pb_cwq4->sizePolicy().hasHeightForWidth());
        pb_cwq4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pb_cwq4);

        stackedWidget = new QStackedWidget(ChuWeiQI);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(90, 150, 811, 301));
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        stackedWidget->addWidget(page_0);

        retranslateUi(ChuWeiQI);

        QMetaObject::connectSlotsByName(ChuWeiQI);
    } // setupUi

    void retranslateUi(QDialog *ChuWeiQI)
    {
        ChuWeiQI->setWindowTitle(QCoreApplication::translate("ChuWeiQI", "Dialog", nullptr));
        pb_back->setText(QString());
        pb_ChangGui->setText(QCoreApplication::translate("ChuWeiQI", "\345\270\270\350\247\204", nullptr));
        pb_FangShaJiaoDu->setText(QCoreApplication::translate("ChuWeiQI", "\347\272\272\347\272\261\350\247\222\345\272\246", nullptr));
        pb_ChuanGanQi->setText(QCoreApplication::translate("ChuWeiQI", "\344\274\240\346\204\237\345\231\250", nullptr));
        pb_WeiShaZhiDong->setText(QCoreApplication::translate("ChuWeiQI", "\347\272\254\347\272\261\345\210\266\345\212\250", nullptr));
        pb_cwq1->setText(QCoreApplication::translate("ChuWeiQI", "\345\202\250\347\272\254\345\231\2501", nullptr));
        pb_cwq2->setText(QCoreApplication::translate("ChuWeiQI", "\345\202\250\347\272\254\345\231\2502", nullptr));
        pb_cwq3->setText(QCoreApplication::translate("ChuWeiQI", "\345\202\250\347\272\254\345\231\2503", nullptr));
        pb_cwq4->setText(QCoreApplication::translate("ChuWeiQI", "\345\202\250\347\272\254\345\231\2504", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChuWeiQI: public Ui_ChuWeiQI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHUWEIQI_H
