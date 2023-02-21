#ifndef JINGSHAJIANCE_H
#define JINGSHAJIANCE_H

#include <QDialog>

namespace Ui {
class JingShaJianCe;
}

class JingShaJianCe : public QDialog
{
    Q_OBJECT

public:
    explicit JingShaJianCe(QWidget *parent = nullptr);
    ~JingShaJianCe();

private slots:
    void on_pb_back_clicked();

signals:
    void backPage();

private:
    Ui::JingShaJianCe *ui;
};

#endif // JINGSHAJIANCE_H
