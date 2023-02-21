#ifndef CHUWEIQI_H
#define CHUWEIQI_H

#include <QDialog>

namespace Ui {
class ChuWeiQI;
}

class ChuWeiQI : public QDialog
{
    Q_OBJECT

public:
    explicit ChuWeiQI(QWidget *parent = nullptr);
    ~ChuWeiQI();

private slots:
    void on_pb_back_clicked();

    void on_pb_ChangGui_clicked();

    void on_pb_FangShaJiaoDu_clicked();

    void on_pb_ChuanGanQi_clicked();

    void on_pb_WeiShaZhiDong_clicked();

signals:
    void backPage();

private:
    Ui::ChuWeiQI *ui;
};

#endif // CHUWEIQI_H
