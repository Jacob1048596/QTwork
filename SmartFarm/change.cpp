#include "change.h"
#include "ui_change.h"
#include<database.h>
change::change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
}

change::~change()
{
    delete ui;
}

void change::on_pushButton_clicked()
{
    int id=ui->lineEdit->text().toInt();
    QString genus= ui->lineEdit_2->text();
    int age=ui->lineEdit_3->text().toInt();
    QString sex= ui->lineEdit_4->text();
    QString status= ui->lineEdit_5->text();

    Database db1("test");
    QSqlDatabase sql= db1.getConnectionByName("test");
    db1.UpdateMessage(sql,id,genus,age,sex,status);

}
