#ifndef CWQ03_H
#define CWQ03_H

#include <QDialog>

namespace Ui {
class cwq03;
}

class cwq03 : public QDialog
{
    Q_OBJECT

public:
    explicit cwq03(QWidget *parent = nullptr);
    ~cwq03();

private:
    Ui::cwq03 *ui;
};

#endif // CWQ03_H
