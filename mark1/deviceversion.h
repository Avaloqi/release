#ifndef DEVICEVERSION_H
#define DEVICEVERSION_H

#include <QDialog>

namespace Ui {
class DeviceVersion;
}

class DeviceVersion : public QDialog
{
    Q_OBJECT

public:
    explicit DeviceVersion(QWidget *parent = nullptr);
    ~DeviceVersion();

private slots:
    void on_pb_back_clicked();

private:
    Ui::DeviceVersion *ui;
};

#endif // DEVICEVERSION_H
