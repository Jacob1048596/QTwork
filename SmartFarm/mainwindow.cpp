#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtSql/QSqlDatabase>
#include<QDebug>
#include<QSqlQuery>
#include<database.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<QSqlDatabase::drivers();
    //SqlConnect();
}
void MainWindow::SqlConnect()
{

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addButton_clicked()
{
    Add.show();
}

void MainWindow::on_deleteButton_clicked()
{
    Delete.show();
}

void MainWindow::on_changeButton_clicked()
{
    Change.show();
}

void MainWindow::on_searchButton_clicked()
{
    Search.show();
}

void MainWindow::on_flushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1"); // 数据库服务器IP，我用的是本地电脑
    db.setDatabaseName("SmartFarm");// 数据库名
    db.setUserName("root");// 用户名
    db.setPassword("123456");// 密码
    db.setPort(3306);// 端口号
    db.open();

    model=new QSqlTableModel(this);
    model->setTable("animal");
    ui->tableView->setModel(model);
    model->select();
}
