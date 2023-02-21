#ifndef FLOWERPATTERNWRITE_H
#define FLOWERPATTERNWRITE_H

#include <QDialog>

namespace Ui {
class FlowerPatternWrite;
}

class FlowerPatternWrite : public QDialog
{
    Q_OBJECT

public:
    explicit FlowerPatternWrite(QWidget *parent = nullptr);
    ~FlowerPatternWrite();

private:
    Ui::FlowerPatternWrite *ui;

signals:
    void mainShow();

private slots:
    void on_pb_back_clicked();
    void on_pb_newFP_clicked();
    void on_pb_edit_clicked();
    void on_pb_deleteFP_clicked();
    void on_pb_runPB_clicked();
    void on_pb_unrun_clicked();
};

#endif // FLOWERPATTERNWRITE_H
