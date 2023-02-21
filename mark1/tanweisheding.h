#ifndef TANWEISHEDING_H
#define TANWEISHEDING_H

#include <QDialog>


namespace Ui {
class TanWeiSheDing;
}

class TanWeiSheDing : public QDialog
{
    Q_OBJECT

public:
    explicit TanWeiSheDing(QWidget *parent = nullptr);
    ~TanWeiSheDing();

private slots:
    void on_buttonBox_accepted();

    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::TanWeiSheDing *ui;
};

#endif // TANWEISHEDING_H
