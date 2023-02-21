#ifndef CWQ02_H
#define CWQ02_H

#include <QDialog>

namespace Ui {
class cwq02;
}

class cwq02 : public QDialog
{
    Q_OBJECT

public:
    explicit cwq02(QWidget *parent = nullptr);
    ~cwq02();

private:
    Ui::cwq02 *ui;
};

#endif // CWQ02_H
