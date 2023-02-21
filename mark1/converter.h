#ifndef CONVERTER_H
#define CONVERTER_H

#include <QDialog>

namespace Ui {
class Converter;
}

class Converter : public QDialog
{
    Q_OBJECT

public:
    explicit Converter(QWidget *parent = nullptr);
    ~Converter();

private slots:
    void on_pb_back_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void mainShow();

private:
    Ui::Converter *ui;
};

#endif // CONVERTER_H
