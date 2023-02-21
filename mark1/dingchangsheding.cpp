#include "dingchangsheding.h"
#include "ui_dingchangsheding.h"

DingChangSheDIng::DingChangSheDIng(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DingChangSheDIng)
{
    ui->setupUi(this);

    setWindowTitle("定长设定");

    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
}

DingChangSheDIng::~DingChangSheDIng()
{
    delete ui;
}

void DingChangSheDIng::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

