/********************************************************************************
** Form generated from reading UI file 'flowerpatternwrite.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWERPATTERNWRITE_H
#define UI_FLOWERPATTERNWRITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlowerPatternWrite
{
public:
    QPushButton *pb_back;
    QWidget *buttonsWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_newFP;
    QPushButton *pb_edit;
    QPushButton *pb_deleteFP;
    QPushButton *pb_runPB;
    QPushButton *pb_unrun;
    QLabel *label;

    void setupUi(QDialog *FlowerPatternWrite)
    {
        if (FlowerPatternWrite->objectName().isEmpty())
            FlowerPatternWrite->setObjectName(QString::fromUtf8("FlowerPatternWrite"));
        FlowerPatternWrite->resize(1024, 600);
        pb_back = new QPushButton(FlowerPatternWrite);
        pb_back->setObjectName(QString::fromUtf8("pb_back"));
        pb_back->setGeometry(QRect(850, 50, 100, 27));
        buttonsWidget = new QWidget(FlowerPatternWrite);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        buttonsWidget->setGeometry(QRect(840, 100, 118, 311));
        verticalLayout = new QVBoxLayout(buttonsWidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pb_newFP = new QPushButton(buttonsWidget);
        pb_newFP->setObjectName(QString::fromUtf8("pb_newFP"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_newFP->sizePolicy().hasHeightForWidth());
        pb_newFP->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pb_newFP);

        pb_edit = new QPushButton(buttonsWidget);
        pb_edit->setObjectName(QString::fromUtf8("pb_edit"));
        sizePolicy.setHeightForWidth(pb_edit->sizePolicy().hasHeightForWidth());
        pb_edit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pb_edit);

        pb_deleteFP = new QPushButton(buttonsWidget);
        pb_deleteFP->setObjectName(QString::fromUtf8("pb_deleteFP"));
        sizePolicy.setHeightForWidth(pb_deleteFP->sizePolicy().hasHeightForWidth());
        pb_deleteFP->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pb_deleteFP);

        pb_runPB = new QPushButton(buttonsWidget);
        pb_runPB->setObjectName(QString::fromUtf8("pb_runPB"));
        sizePolicy.setHeightForWidth(pb_runPB->sizePolicy().hasHeightForWidth());
        pb_runPB->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pb_runPB);

        pb_unrun = new QPushButton(buttonsWidget);
        pb_unrun->setObjectName(QString::fromUtf8("pb_unrun"));
        sizePolicy.setHeightForWidth(pb_unrun->sizePolicy().hasHeightForWidth());
        pb_unrun->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pb_unrun);

        label = new QLabel(FlowerPatternWrite);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 500, 150, 40));

        retranslateUi(FlowerPatternWrite);

        QMetaObject::connectSlotsByName(FlowerPatternWrite);
    } // setupUi

    void retranslateUi(QDialog *FlowerPatternWrite)
    {
        FlowerPatternWrite->setWindowTitle(QCoreApplication::translate("FlowerPatternWrite", "Dialog", nullptr));
        pb_back->setText(QString());
        pb_newFP->setText(QCoreApplication::translate("FlowerPatternWrite", "\346\226\260\345\273\272\350\212\261\345\236\213", nullptr));
        pb_edit->setText(QCoreApplication::translate("FlowerPatternWrite", "\347\274\226\350\276\221\344\277\256\346\224\271", nullptr));
        pb_deleteFP->setText(QCoreApplication::translate("FlowerPatternWrite", "\345\210\240\351\231\244\350\212\261\345\236\213", nullptr));
        pb_runPB->setText(QCoreApplication::translate("FlowerPatternWrite", "\350\277\220\350\241\214\350\212\261\345\236\213", nullptr));
        pb_unrun->setText(QCoreApplication::translate("FlowerPatternWrite", "\350\247\243\351\231\244\350\277\220\350\241\214", nullptr));
        label->setText(QCoreApplication::translate("FlowerPatternWrite", "\350\277\220\350\241\214\344\270\255\347\232\204\350\212\261\345\236\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlowerPatternWrite: public Ui_FlowerPatternWrite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWERPATTERNWRITE_H
