#ifndef DINGCHANGSHEDING_H
#define DINGCHANGSHEDING_H

#include <QDialog>

namespace Ui {
class DingChangSheDIng;
}

class DingChangSheDIng : public QDialog
{
    Q_OBJECT

public:
    explicit DingChangSheDIng(QWidget *parent = nullptr);
    ~DingChangSheDIng();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::DingChangSheDIng *ui;
};

#endif // DINGCHANGSHEDING_H
