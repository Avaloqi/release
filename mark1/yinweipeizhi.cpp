#include "yinweipeizhi.h"
#include "ui_yinweipeizhi.h"

YinWeiPeiZhi::YinWeiPeiZhi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::YinWeiPeiZhi)
{
    ui->setupUi(this);

    setWindowTitle("引纬配置");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:grey;border-radius:25px;}");
}

YinWeiPeiZhi::~YinWeiPeiZhi()
{
    delete ui;
}

void YinWeiPeiZhi::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

