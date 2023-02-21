#ifndef CWQ01_H
#define CWQ01_H

#include <QDialog>

namespace Ui {
class cwq01;
}

class cwq01 : public QDialog
{
    Q_OBJECT

public:
    explicit cwq01(QWidget *parent = nullptr);
    ~cwq01();

private:
    Ui::cwq01 *ui;
};

#endif // CWQ01_H
