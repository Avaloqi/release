#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog01.h"
#include <QDebug>
#include <QScrollBar>
#include "flowerpatternwrite.h"
#include "paramodify.h"
#include "factorysetting.h"
#include "testfunction.h"
#include "converter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("主页面");

    initData();

    ui->timeLabel->setGeometry((this->width()-150)/2, 30, 150, 20);
    QFont t_font;
    t_font.setPointSize(18);
    ui->timeLabel->setFont(t_font);
    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeShow()));

    ui->buttonsHW->setGeometry(50, 420, this->width()-100, 70);
    ui->pb1->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb2->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb3->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb4->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb5->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb6->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb7->setStyleSheet("QPushButton{background-color:#066d93;color:white}");
    ui->pb8->setStyleSheet("QPushButton{background-color:#066d93;color:white}");

    ui->widget1->setGeometry(50, 70, 400, 320);
    ui->widget2->setGeometry(this->width()-400-50, 70, 400, 320);
    ui->widget1->setStyleSheet(QString::fromUtf8("#widget1{border:3px solid white}"));
    ui->widget2->setStyleSheet(QString::fromUtf8("#widget2{border:3px solid white}"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeShow()
{
    QDateTime t_time = QDateTime::currentDateTime();
    QString str = t_time.toString("hh:mm:ss");
    ui->timeLabel->setText(str);
}


void MainWindow::listWidgetInit(QListWidgetItem *item)
{
    item->setTextAlignment(Qt::AlignCenter);
    item->setFlags(item->flags() & ~Qt::ItemIsEnabled & ~Qt::ItemIsSelectable);
}


void MainWindow::initData()
{
}


void MainWindow::on_pb1_clicked()
{
    this->hide();
    //Dialog01 *dg1 = new Dialog01;
    FlowerPatternWrite *dg1 = new FlowerPatternWrite;
    connect(dg1, &FlowerPatternWrite::mainShow, this, &QWidget::show);
    dg1->setAttribute(Qt::WA_DeleteOnClose);//设置子窗体属性：关闭即销毁
    dg1->show();
}

void MainWindow::on_pb2_clicked()
{
    this->hide();
    ParaModify *dg = new ParaModify;
    connect(dg, &ParaModify::mainShow, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}

void MainWindow::on_pb3_clicked()
{
    this->hide();
    FactorySetting *dg = new FactorySetting;
    connect(dg, &FactorySetting::mainShow, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}

void MainWindow::on_pb4_clicked()
{
    this->hide();
    TestFunction *dg = new TestFunction;
    connect(dg, &TestFunction::mainShow, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}


void MainWindow::on_pb5_clicked()
{

}

void MainWindow::on_pb6_clicked()
{
    this->hide();
    Converter *dg = new Converter;
    connect(dg, &Converter::mainShow, this, &QWidget::show);
    dg->setAttribute(Qt::WA_DeleteOnClose);
    dg->show();
}

void MainWindow::on_pb7_clicked()
{

}

void MainWindow::on_pb8_clicked()
{

}

