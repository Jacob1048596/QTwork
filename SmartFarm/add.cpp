#include "add.h"
#include "ui_add.h"
#include<QtSql/QSqlDatabase>
#include<database.h>
add::add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
//    createConnectionByName(" ");
//    QSqlDatabase db;
}

add::~add()
{
    delete ui;
}

void add::on_addButton_clicked()
{
    QString name= ui->lineEdit->text();
    int age=ui->lineEdit_2->text().toInt();
    int score=ui->lineEdit_3->text().toInt();

    Database db1("test");
    QSqlDatabase sql= db1.getConnectionByName("test");
    db1.insertUserName(sql,name,age,score);
}
