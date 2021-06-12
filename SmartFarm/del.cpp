#include "del.h"
#include "ui_del.h"
#include<database.h>
del::del(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::del)
{
    ui->setupUi(this);
}

del::~del()
{
    delete ui;
}

void del::on_pushButton_clicked()
{
    int id=ui->lineEdit->text().toInt();
    Database db1("test");
    QSqlDatabase sql= db1.getConnectionByName("test");
    db1.DeleteMessage(sql,id);
}
