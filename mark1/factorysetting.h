#ifndef FACTORYSETTING_H
#define FACTORYSETTING_H

#include <QDialog>

namespace Ui {
class FactorySetting;
}

class FactorySetting : public QDialog
{
    Q_OBJECT

public:
    explicit FactorySetting(QWidget *parent = nullptr);
    ~FactorySetting();

private slots:
    void on_pb_back_clicked();

    void on_pb_ChangGuiPeiZhi_clicked();

    void on_pb_YinWeiPeiZhi_clicked();

    void on_pb_ZhuMaDa_clicked();

signals:
    void mainShow();

private:
    Ui::FactorySetting *ui;
};

#endif // FACTORYSETTING_H
