#include "chuweiqi.h"
#include "ui_chuweiqi.h"
#include "cwq01.h"
#include "cwq02.h"
#include "cwq03.h"
#include "cwq04.h"

ChuWeiQI::ChuWeiQI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChuWeiQI)
{
    ui->setupUi(this);

    setWindowTitle("储纬器参数");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
    ui->buttonsWidget1->setGeometry(20, 10, 600, 70);
    ui->stackedWidget->setGeometry(0, 100, 1024, 400);
    ui->stackedWidget->addWidget(new cwq01);
    ui->stackedWidget->addWidget(new cwq02);
    ui->stackedWidget->addWidget(new cwq03);
    ui->stackedWidget->addWidget(new cwq04);
    ui->stackedWidget->setCurrentIndex(1);
    ui->buttonsWidget2->setGeometry(20, this->height()-80, 600, 70);

    ui->pb_ChangGui->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_ChuanGanQi->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_FangShaJiaoDu->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_WeiShaZhiDong->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_cwq1->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_cwq2->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_cwq3->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_cwq4->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

ChuWeiQI::~ChuWeiQI()
{
    delete ui;
}

void ChuWeiQI::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}


void ChuWeiQI::on_pb_ChangGui_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void ChuWeiQI::on_pb_FangShaJiaoDu_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void ChuWeiQI::on_pb_ChuanGanQi_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void ChuWeiQI::on_pb_WeiShaZhiDong_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

