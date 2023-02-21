#include "dialog02.h"
#include "ui_dialog02.h"


Dialog02::Dialog02(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog02)
{
    ui->setupUi(this);

    ui->pb_leftTop->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_leftTop->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->tabWidget->setGeometry(30, 30, 850, 500);
}

Dialog02::~Dialog02()
{
    delete ui;
}

void Dialog02::on_pb_leftTop_clicked()
{
    emit backPage();
    this->close();
}
