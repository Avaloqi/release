#ifndef QITINGSHEDING_H
#define QITINGSHEDING_H

#include <QDialog>

namespace Ui {
class QiTingSheDing;
}

class QiTingSheDing : public QDialog
{
    Q_OBJECT

public:
    explicit QiTingSheDing(QWidget *parent = nullptr);
    ~QiTingSheDing();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::QiTingSheDing *ui;
};

#endif // QITINGSHEDING_H
