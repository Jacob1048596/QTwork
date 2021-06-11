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


}
