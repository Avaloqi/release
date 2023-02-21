#include "ccsd01.h"
#include "ui_ccsd01.h"

CCSD01::CCSD01(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CCSD01)
{
    ui->setupUi(this);
    setWindowTitle("出厂设定常规配置");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
}

CCSD01::~CCSD01()
{
    delete ui;
}

void CCSD01::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

