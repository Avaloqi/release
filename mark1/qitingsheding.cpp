#include "qitingsheding.h"
#include "ui_qitingsheding.h"

QiTingSheDing::QiTingSheDing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QiTingSheDing)
{
    ui->setupUi(this);

    setWindowTitle("启停设定");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->bB1->addButton("OFF", QDialogButtonBox::DestructiveRole);
    ui->bB1->addButton("ON", QDialogButtonBox::AcceptRole);
    ui->bB1->buttons().last()->setStyleSheet("background-color:green");
    ui->bB1->buttons().first()->setStyleSheet("background-color:grey");
    ui->bB2->addButton("OFF", QDialogButtonBox::DestructiveRole);
    ui->bB2->addButton("ON", QDialogButtonBox::AcceptRole);
    ui->bB2->buttons().last()->setStyleSheet("background-color:green");
    ui->bB2->buttons().first()->setStyleSheet("background-color:grey");
}

QiTingSheDing::~QiTingSheDing()
{
    delete ui;
}

void QiTingSheDing::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

