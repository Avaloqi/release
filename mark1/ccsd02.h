#ifndef CCSD02_H
#define CCSD02_H

#include <QDialog>

namespace Ui {
class CCSD02;
}

class CCSD02 : public QDialog
{
    Q_OBJECT

public:
    explicit CCSD02(QWidget *parent = nullptr);
    ~CCSD02();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::CCSD02 *ui;
};

#endif // CCSD02_H
