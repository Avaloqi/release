#ifndef CONVERTERSTATUS_H
#define CONVERTERSTATUS_H

#include <QDialog>

namespace Ui {
class ConverterStatus;
}

class ConverterStatus : public QDialog
{
    Q_OBJECT

public:
    explicit ConverterStatus(QWidget *parent = nullptr);
    ~ConverterStatus();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::ConverterStatus *ui;
};

#endif // CONVERTERSTATUS_H
