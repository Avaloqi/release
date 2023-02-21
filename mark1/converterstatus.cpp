#include "converterstatus.h"
#include "ui_converterstatus.h"

ConverterStatus::ConverterStatus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConverterStatus)
{
    ui->setupUi(this);

    setWindowTitle("变频器状态");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
}

ConverterStatus::~ConverterStatus()
{
    delete ui;
}

void ConverterStatus::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

