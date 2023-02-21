#include "cwq02.h"
#include "ui_cwq02.h"

cwq02::cwq02(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cwq02)
{
    ui->setupUi(this);
}

cwq02::~cwq02()
{
    delete ui;
}
