#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // ui->actionnew->setIcon(QIcon());

    //使用qt添加资源
}

MainWindow::~MainWindow()
{
    delete ui;
}

