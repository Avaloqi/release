#ifndef TESTFUNCTION_H
#define TESTFUNCTION_H

#include <QDialog>

namespace Ui {
class TestFunction;
}

class TestFunction : public QDialog
{
    Q_OBJECT

public:
    explicit TestFunction(QWidget *parent = nullptr);
    ~TestFunction();

private slots:
    void on_pb_back_clicked();

    void on_pb_allStop_clicked();

signals:
    void mainShow();

private:
    Ui::TestFunction *ui;
};

#endif // TESTFUNCTION_H
