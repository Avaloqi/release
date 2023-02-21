#include "jingshajiance.h"
#include "ui_jingshajiance.h"
#include <QDialogButtonBox>

JingShaJianCe::JingShaJianCe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JingShaJianCe)
{
    ui->setupUi(this);

    setWindowTitle("经纱检测");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    QList<QDialogButtonBox *> bBList;
    bBList<<ui->bB00<<ui->bB01<<ui->bB02<<ui->bB03<<ui->bB04<<ui->bB05<<ui->bB06<<ui->bB07;

    for(int i = 0; i != bBList.length(); i++) {
        bBList[i]->addButton("OFF", QDialogButtonBox::DestructiveRole);
        bBList[i]->addButton("ON", QDialogButtonBox::AcceptRole);
        bBList[i]->buttons().last()->setStyleSheet("background-color:green");
        bBList[i]->buttons().first()->setStyleSheet("background-color:grey");
    }
}

JingShaJianCe::~JingShaJianCe()
{
    delete ui;
}

void JingShaJianCe::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

