#include "testfunction.h"
#include "ui_testfunction.h"

TestFunction::TestFunction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestFunction)
{
    ui->setupUi(this);

    setWindowTitle("测试功能");

    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->tabWidget->setGeometry(10, 30, this->width()-120, this->height()-130);
//    ui->tabWidget->setStyleSheet("QTabBar::tab{background-color:#066d93;color:white}"
//                                 "QTabBar::tab::selected{background-color:#05526e;color:white}");

    ui->pb_allStop->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
}

TestFunction::~TestFunction()
{
    delete ui;
}

void TestFunction::on_pb_back_clicked()
{
    qDebug("click");
    emit mainShow();
    this->close();
}


void TestFunction::on_pb_allStop_clicked()
{

}

