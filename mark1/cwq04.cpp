#include "cwq04.h"
#include "ui_cwq04.h"

cwq04::cwq04(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cwq04)
{
    ui->setupUi(this);
}

cwq04::~cwq04()
{
    delete ui;
}
