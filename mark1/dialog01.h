#ifndef DIALOG01_H
#define DIALOG01_H

#include <QDialog>
#include <dialog02.h>

namespace Ui {
class Dialog01;
}

class Dialog01 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog01(QWidget *parent = 0);
    ~Dialog01();

private slots:
    void on_pushButton_clicked();

    void on_pb_leftTop_clicked();

signals:
    void mainShow();

private:
    Ui::Dialog01 *ui;
};

#endif // DIALOG01_H
