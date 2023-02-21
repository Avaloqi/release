#include "yinweipara.h"
#include "ui_yinweipara.h"
#include <QDialogButtonBox>

YinWeiPara::YinWeiPara(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::YinWeiPara)
{
    ui->setupUi(this);

    setWindowTitle("引纬参数");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->tabWidget->setGeometry(10, 30, this->width()-120, this->height()-60);
    ui->buttonsWidget->setGeometry(10, ui->tabWidget->height()-80-60, 500, 70);

    ui->buttonBox->addButton("OFF", QDialogButtonBox::DestructiveRole);
    ui->buttonBox->addButton("ON", QDialogButtonBox::AcceptRole);
    ui->buttonBox->buttons().last()->setStyleSheet("background-color:green");
    ui->buttonBox->buttons().first()->setStyleSheet("background-color:grey");

    ui->pb_s1->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_s2->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_s3->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb_s4->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

YinWeiPara::~YinWeiPara()
{
    delete ui;
}

void YinWeiPara::on_buttonBox_accepted()
{

}


void YinWeiPara::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

