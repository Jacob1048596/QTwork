#include "search.h"
#include "ui_search.h"
#include<QSqlTableModel>
#include<database.h>
search::search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);

}

search::~search()
{
    delete ui;
}

void search::on_ShowAllButton_clicked()
{
//    Database db1("test");
//    QSqlDatabase sql= db1.getConnectionByName("test");
//    QSqlQuery ret= db1.SearchAllMessage(sql);
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
//    QString key=ui->nameInput->text();
//    QString str=QString("name = '%1'").arg(key);
//    model->setFilter(str);
    model->select();


}

void search::on_searchByid_clicked()
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
    int key=ui->idInput->text().toInt();
    QString str=QString("id = %1").arg(key);
    model->setFilter(str);
    model->select();
}

void search::on_searchByname_clicked()
{

}

void search::on_searchByage_clicked()
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
    int key=ui->ageInput->text().toInt();
    QString str=QString("age = %1").arg(key);
    model->setFilter(str);
    model->select();
}

void search::on_searchByscore_clicked()
{

}

void search::on_ResetButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1"); // 数据库服务器IP，我用的是本地电脑
    db.setDatabaseName("SmartFarm");// 数据库名
    db.setUserName("root");// 用户名
    db.setPassword("123456");// 密码
    db.setPort(3306);// 端口号
    db.open();

    QSqlQuery query;
    query.prepare("ALTER TABLE animal DROP `id`;");
    query.exec();
    query.prepare("ALTER TABLE animal ADD `id` INT( 11 ) NOT NULL FIRST;");
    query.exec();
    query.prepare("ALTER TABLE animal MODIFY COLUMN `id` INT( 11 ) NOT NULL AUTO_INCREMENT,ADD PRIMARY KEY(id);");
    query.exec();
}

void search::on_searchBygenus_clicked()
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
    QString key=ui->genusInput->text();
    QString str=QString("genus = '%1'").arg(key);
    model->setFilter(str);
    model->select();
}

void search::on_searchBysex_clicked()
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
    QString key=ui->sexInput->text();
    QString str=QString("sex = '%1'").arg(key);
    model->setFilter(str);
    model->select();
}

void search::on_searchBystatus_clicked()
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
    QString key=ui->statusInput->text();
    QString str=QString("status = '%1'").arg(key);
    model->setFilter(str);
    model->select();
}
