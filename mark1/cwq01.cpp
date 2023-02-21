#include "cwq01.h"
#include "ui_cwq01.h"

cwq01::cwq01(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cwq01)
{
    ui->setupUi(this);
}

cwq01::~cwq01()
{
    delete ui;
}
