#include "ccsd02.h"
#include "ui_ccsd02.h"

CCSD02::CCSD02(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CCSD02)
{
    ui->setupUi(this);

    setWindowTitle("引纬配置");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
}

CCSD02::~CCSD02()
{
    delete ui;
}

void CCSD02::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

