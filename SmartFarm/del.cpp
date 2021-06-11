#include "del.h"
#include "ui_del.h"

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
