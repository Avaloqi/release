#include "cwq03.h"
#include "ui_cwq03.h"

cwq03::cwq03(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cwq03)
{
    ui->setupUi(this);
}

cwq03::~cwq03()
{
    delete ui;
}
