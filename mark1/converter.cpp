#include "converter.h"
#include "ui_converter.h"
#include "converterstatus.h"
#include "converterworkset.h"

Converter::Converter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Converter)
{
    ui->setupUi(this);

    setWindowTitle("变频器");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->pushButton->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pushButton_2->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

Converter::~Converter()
{
    delete ui;
}

void Converter::on_pb_back_clicked()
{
    emit mainShow();
    this->close();
}


void Converter::on_pushButton_clicked()
{
    this->hide();
    ConverterStatus *dg2 = new ConverterStatus();
    connect(dg2, &ConverterStatus::backPage, this, &QWidget::show);
    dg2->setAttribute(Qt::WA_DeleteOnClose);//设置子窗体属性：关闭即销毁
    dg2->show();//显示子窗体
}


void Converter::on_pushButton_2_clicked()
{
    this->hide();
    ConverterWorkSet *dg2 = new ConverterWorkSet();
    connect(dg2, &ConverterWorkSet::backPage, this, &QWidget::show);
    dg2->setAttribute(Qt::WA_DeleteOnClose);//设置子窗体属性：关闭即销毁
    dg2->show();//显示子窗体
}

