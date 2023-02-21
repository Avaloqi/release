#ifndef PARAMODIFY_H
#define PARAMODIFY_H

#include <QDialog>

namespace Ui {
class ParaModify;
}

class ParaModify : public QDialog
{
    Q_OBJECT

public:
    explicit ParaModify(QWidget *parent = nullptr);
    ~ParaModify();

signals:
    void mainShow();

private slots:
    void on_pb_back_clicked();

    void on_pb_ChuWeiQI_clicked();

    void on_pb_YinWeiCanShu_clicked();

    void on_pb_TanWeiSheDing_clicked();

    void on_pb_JingShaJianCe_clicked();

    void on_pb_QITingSheDing_clicked();

    void on_pb_DIngChangSheDing_clicked();

private:
    Ui::ParaModify *ui;
};

#endif // PARAMODIFY_H
