#ifndef YINWEIPEIZHI_H
#define YINWEIPEIZHI_H

#include <QDialog>

namespace Ui {
class YinWeiPeiZhi;
}

class YinWeiPeiZhi : public QDialog
{
    Q_OBJECT

public:
    explicit YinWeiPeiZhi(QWidget *parent = nullptr);
    ~YinWeiPeiZhi();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::YinWeiPeiZhi *ui;
};

#endif // YINWEIPEIZHI_H
