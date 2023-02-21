#include "paramodify.h"
#include "ui_paramodify.h"
#include "chuweiqi.h"
#include "yinweipara.h"
#include "tanweisheding.h"
#include "jingshajiance.h"
#include "qitingsheding.h"
#include "dingchangsheding.h"

ParaModify::ParaModify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParaModify)
{
    ui->setupUi(this);
    setWindowTitle("运行参数");

    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->buttonsWidget->setGeometry(60, 150, this->width()-120, 350);
    ui->pb_ChuWeiQI->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_DIngChangSheDing->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_DownloadPara->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_JingShaJianCe->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_QITingSheDing->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_ReadPara->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_TanWeiSheDing->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_YinWeiCanShu->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

ParaModify::~ParaModify()
{
    delete ui;
}

void ParaModify::on_pb_back_clicked()
{
    emit mainShow();
    this->close();
}


void ParaModify::on_pb_ChuWeiQI_clicked()
{
    this->hide();
    ChuWeiQI *dg = new ChuWeiQI;
    connect(dg, &ChuWeiQI::backPage, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}


void ParaModify::on_pb_YinWeiCanShu_clicked()
{
    this->hide();
    YinWeiPara *dg = new YinWeiPara;
    connect(dg, &YinWeiPara::backPage, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}


void ParaModify::on_pb_TanWeiSheDing_clicked()
{
    this->hide();
    TanWeiSheDing *dg = new TanWeiSheDing;
    connect(dg, &TanWeiSheDing::backPage, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}


void ParaModify::on_pb_JingShaJianCe_clicked()
{
    this->hide();
    JingShaJianCe *dg = new JingShaJianCe;
    connect(dg, &JingShaJianCe::backPage, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}


void ParaModify::on_pb_QITingSheDing_clicked()
{
    this->hide();
    QiTingSheDing *dg = new QiTingSheDing;
    connect(dg, &QiTingSheDing::backPage, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}


void ParaModify::on_pb_DIngChangSheDing_clicked()
{
    this->hide();
    DingChangSheDIng *dg = new DingChangSheDIng;
    connect(dg, &DingChangSheDIng::backPage, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}

