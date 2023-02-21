#include "flowerpatternwrite.h"
#include "ui_flowerpatternwrite.h"
#include <QStyle>

FlowerPatternWrite::FlowerPatternWrite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FlowerPatternWrite)
{
    ui->setupUi(this);
    setWindowTitle("花型编写和修改");

    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
//    ui->pb_back->setIcon(style()->standardIcon(QStyle::SP_ArrowBack));
//    ui->pb_back->setIconSize(QSize(50, 50));

    ui->buttonsWidget->setGeometry(this->width()-140, 100, 110, 400);
    ui->pb_deleteFP->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_edit->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_newFP->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_runPB->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_unrun->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

FlowerPatternWrite::~FlowerPatternWrite()
{
    delete ui;
}

void FlowerPatternWrite::on_pb_back_clicked()
{
    emit mainShow();
    this->close();
}


void FlowerPatternWrite::on_pb_newFP_clicked()
{

}


void FlowerPatternWrite::on_pb_edit_clicked()
{

}


void FlowerPatternWrite::on_pb_deleteFP_clicked()
{

}


void FlowerPatternWrite::on_pb_runPB_clicked()
{

}


void FlowerPatternWrite::on_pb_unrun_clicked()
{

}

