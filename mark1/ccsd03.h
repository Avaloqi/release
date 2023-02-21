#ifndef CCSD03_H
#define CCSD03_H

#include <QDialog>

namespace Ui {
class CCSD03;
}

class CCSD03 : public QDialog
{
    Q_OBJECT

public:
    explicit CCSD03(QWidget *parent = nullptr);
    ~CCSD03();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::CCSD03 *ui;
};

#endif // CCSD03_H
