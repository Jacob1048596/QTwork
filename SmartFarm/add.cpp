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
    QString genus= ui->lineEdit->text();
    int age=ui->lineEdit_2->text().toInt();
    QString sex= ui->lineEdit_3->text();
    QString status= ui->lineEdit_4->text();

    Database db1("test");
    QSqlDatabase sql= db1.getConnectionByName("test");
    db1.insertMessage(sql,genus,age,sex,status);
}
