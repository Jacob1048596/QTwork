#include "widget.h"
#include<QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton* btn=new QPushButton;
    btn->show();
    btn->setParent(this);
    btn->setText("第一个测试");
    btn->show();
    btn->move(0,0);
    QPushButton* btn2=new QPushButton("close",this);
    btn2->move(200,200);

    //connect（信号发送者，发送的信号（函数地址），信号接收者，信号处理函数（槽））
    connect(btn2,&QPushButton::clicked,this,&Widget::close);

    setWindowTitle("窗口测试");
    setFixedSize(500,500);

}

Widget::~Widget()
{
}

