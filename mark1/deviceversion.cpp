#include "deviceversion.h"
#include "ui_deviceversion.h"

DeviceVersion::DeviceVersion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeviceVersion)
{
    ui->setupUi(this);

    setWindowTitle("设备版本");
    ui->pb_back->setGeometry(this->width()-80, 30, 50, 50);
    ui->pb_back->setStyleSheet("QPushButton{background-color:#066d93;border-radius:25px;}");
}

DeviceVersion::~DeviceVersion()
{
    delete ui;
}

void DeviceVersion::on_pb_back_clicked()
{

}

