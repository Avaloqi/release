#include "ccsd03.h"
#include "ui_ccsd03.h"

CCSD03::CCSD03(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CCSD03)
{
    ui->setupUi(this);

    setWindowTitle("主马达/刹车");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");

    ui->buttonBox->addButton("OFF", QDialogButtonBox::DestructiveRole);
    ui->buttonBox->addButton("ON", QDialogButtonBox::AcceptRole);
    ui->buttonBox->buttons().last()->setStyleSheet("background-color:green");
    ui->buttonBox->buttons().first()->setStyleSheet("background-color:grey");
}

CCSD03::~CCSD03()
{
    delete ui;
}

void CCSD03::on_pb_back_clicked()
{
    emit backPage();
    this->close();
}

