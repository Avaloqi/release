#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog01.h"
#include<QDateTime>
#include<QTimer>
#include<QFont>
#include<QListWidgetItem>
#include <QMap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void listWidgetInit(QListWidgetItem *item);
    void initData();

private slots:
    void timeShow();
    void on_pb1_clicked();
    void on_pb2_clicked();

    void on_pb3_clicked();

    void on_pb4_clicked();

    void on_pb7_clicked();

    void on_pb5_clicked();

    void on_pb6_clicked();

    void on_pb8_clicked();

private:
    Ui::MainWindow *ui;

    QMap<int, QString> mapList1;
    QMap<int, QString> mapList2;
};

#endif // MAINWINDOW_H
