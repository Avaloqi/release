#ifndef CCSD01_H
#define CCSD01_H

#include <QDialog>

namespace Ui {
class CCSD01;
}

class CCSD01 : public QDialog
{
    Q_OBJECT

public:
    explicit CCSD01(QWidget *parent = nullptr);
    ~CCSD01();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::CCSD01 *ui;
};

#endif // CCSD01_H
