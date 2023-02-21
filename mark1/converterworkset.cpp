#include "converterworkset.h"
#include "ui_converterworkset.h"

ConverterWorkSet::ConverterWorkSet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConverterWorkSet)
{
    ui->setupUi(this);
    setWindowTitle("变频器工作设置");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->pushButton_10->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pushButton_11->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pushButton_5->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pushButton_6->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pushButton_7->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pushButton_8->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pushButton_9->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

ConverterWorkSet::~ConverterWorkSet()
{
    delete ui;
}

void ConverterWorkSet::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}


void ConverterWorkSet::on_pushButton_5_clicked()
{

}

