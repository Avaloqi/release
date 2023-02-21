#include "factorysetting.h"
#include "ui_factorysetting.h"
#include "ccsd01.h"
#include "ccsd02.h"
#include "ccsd03.h"


FactorySetting::FactorySetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FactorySetting)
{
    ui->setupUi(this);

    setWindowTitle("出厂配置");

    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->buttonsWidget->setGeometry(100, this->height()/2-60, this->width()-200, 60);
    ui->pb_ChangGuiPeiZhi->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_YinWeiPeiZhi->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_ZhuMaDa->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

FactorySetting::~FactorySetting()
{
    delete ui;
}

void FactorySetting::on_pb_back_clicked()
{
    emit mainShow();
    this->close();
}


void FactorySetting::on_pb_ChangGuiPeiZhi_clicked()
{
    this->hide();
    CCSD01 *dg2 = new CCSD01();
    connect(dg2, &CCSD01::backPage, this, &QWidget::show);
    dg2->setAttribute(Qt::WA_DeleteOnClose);//设置子窗体属性：关闭即销毁
    dg2->show();//显示子窗体
}


void FactorySetting::on_pb_YinWeiPeiZhi_clicked()
{
    this->hide();
    CCSD02 *dg2 = new CCSD02();
    connect(dg2, &CCSD02::backPage, this, &QWidget::show);
    dg2->setAttribute(Qt::WA_DeleteOnClose);//设置子窗体属性：关闭即销毁
    dg2->show();//显示子窗体
}


void FactorySetting::on_pb_ZhuMaDa_clicked()
{
    this->hide();
    CCSD03 *dg2 = new CCSD03();
    connect(dg2, &CCSD03::backPage, this, &QWidget::show);
    dg2->setAttribute(Qt::WA_DeleteOnClose);//设置子窗体属性：关闭即销毁
    dg2->show();//显示子窗体
}

