#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击新建按钮，弹出对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
        //对话框,
        //模态对话框（不可  非模态对话框（可以对其他窗口操作
        //模态创建 //阻塞
//        QDialog dlg(this);
//        dlg.resize(100,100);
//        dlg.exec();

//        qDebug()<<"弹出";

        //非模态对话框
         QDialog *dlg2=new QDialog (this);
         dlg2->resize(100,100);
         dlg2->show();
         dlg2->setAttribute(Qt::WA_DeleteOnClose);

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

