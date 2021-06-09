#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton* btn1=new QPushButton("open",this);
    QPushButton* btn2=new QPushButton("close",this);
    QPushButton* btn3=new QPushButton("open",this);
    btn3->setText("open");
    btn1->move(100,100);
    btn2->move(100,200);
    connect(btn1,&QPushButton::clicked,this,&Widget::OpenWindow);
    connect(btn2,&QPushButton::clicked,this,&Widget::CloseWindow);

    connect(btn3,&QPushButton::clicked,this,[=](){
       if(btn3->text()=="open")
       {
           dig.show();
            btn3->setText("close");
       }
       else if(btn3->text()=="close")
       {
           dig.close();
            btn3->setText("open");
       }

    });
}
void Widget::OpenWindow()
{

    dig.show();
}
void Widget::CloseWindow()
{

    dig.close();
}
Widget::~Widget()
{
    delete ui;
}

