#ifndef CWQ04_H
#define CWQ04_H

#include <QDialog>

namespace Ui {
class cwq04;
}

class cwq04 : public QDialog
{
    Q_OBJECT

public:
    explicit cwq04(QWidget *parent = nullptr);
    ~cwq04();

private:
    Ui::cwq04 *ui;
};

#endif // CWQ04_H
