#ifndef CONVERTERWORKSET_H
#define CONVERTERWORKSET_H

#include <QDialog>

namespace Ui {
class ConverterWorkSet;
}

class ConverterWorkSet : public QDialog
{
    Q_OBJECT

public:
    explicit ConverterWorkSet(QWidget *parent = nullptr);
    ~ConverterWorkSet();

private slots:
    void on_pb_back_clicked();

    void on_pushButton_5_clicked();

signals:
    void backPage();

private:
    Ui::ConverterWorkSet *ui;
};

#endif // CONVERTERWORKSET_H
