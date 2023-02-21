#include "tanweisheding.h"
#include "ui_tanweisheding.h"
#include <QDialogButtonBox>

TanWeiSheDing::TanWeiSheDing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TanWeiSheDing)
{
    ui->setupUi(this);
    setWindowTitle("探纬设定");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->buttonBox->addButton("OFF", QDialogButtonBox::DestructiveRole);
    ui->buttonBox->addButton("ON", QDialogButtonBox::AcceptRole);
    ui->buttonBox->buttons().last()->setStyleSheet("background-color:green");
    ui->buttonBox->buttons().first()->setStyleSheet("background-color:grey");
}

TanWeiSheDing::~TanWeiSheDing()
{
    delete ui;
}

void TanWeiSheDing::on_buttonBox_accepted()
{

}


void TanWeiSheDing::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

