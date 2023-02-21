#include "dialog01.h"
#include "ui_dialog01.h"

Dialog01::Dialog01(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog01)
{
    ui->setupUi(this);

    ui->pb_leftTop->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_leftTop->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
}

Dialog01::~Dialog01()
{
    delete ui;
}

void Dialog01::on_pushButton_clicked()
{
    this->hide();
    Dialog02 *dg2 = new Dialog02();
    connect(dg2, &Dialog02::backPage, this, &QWidget::show);
    dg2->setAttribute(Qt::WA_DeleteOnClose);//设置子窗体属性：关闭即销毁
    dg2->show();//显示子窗体
}

void Dialog01::on_pb_leftTop_clicked()
{
    emit mainShow();
    this->close();
}
