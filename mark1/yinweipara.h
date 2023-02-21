#ifndef YINWEIPARA_H
#define YINWEIPARA_H

#include <QDialog>

namespace Ui {
class YinWeiPara;
}

class YinWeiPara : public QDialog
{
    Q_OBJECT

public:
    explicit YinWeiPara(QWidget *parent = nullptr);
    ~YinWeiPara();

private slots:
    void on_buttonBox_accepted();

    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::YinWeiPara *ui;
};

#endif // YINWEIPARA_H
