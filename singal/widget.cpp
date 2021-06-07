#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
//teacher 类
//student 类
//下课后老师触发信号，学生响应信号


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);

    //创建一个老师对象，学生对象
    this->st=new Student(this);
    this->tea=new Teacher(this);

//    connect(tea,&Teacher::hungry,st,&Student::treat);
//    ClassIsOver();
  //连接带参数的信号和槽
    //指针指向地址
    //函数指针指向函数地址
    void(Teacher::*TeacherSignal)(QString)=&Teacher::hungry;
    void(Student::*StudentSlot)(QString)=&Student::treat;


    ClassIsOver();
    connect(tea,TeacherSignal,st,StudentSlot);
    //点击一个下课按钮在下课
    QPushButton* btn=new QPushButton("下课",this);
    this->resize(600,400);

    //点击按钮出发下课
    connect(btn,&QPushButton::clicked,this,&Widget::ClassIsOver);
    //无参信号与槽
    void(Teacher::*TeacherSignal2)(void)=&Teacher::hungry;
    void(Student::*StudentSlot2)(void)=&Student::treat;
    connect(tea,TeacherSignal2,st,StudentSlot2);
    //信号连接信号
    connect(btn,&QPushButton::clicked,tea,TeacherSignal2);
    //断开信号
    //disconnect(tea,TeacherSignal2,st,StudentSlot2);
    //拓展
    //信号可以连接信号
    //一个信号可以连接多个槽
    //多个信号可以连接一个槽
    //信号与槽函数的参数必须一一对应
    //信号参数的可以多余槽函数，但类型需要对应
    //
    //QT4之前信号与槽的连接

    //connect(tea,SIGNAL(hungry()),st,SLOT(treat()));
    //优点，参数直观，缺点，类型不做检测
    //=值传递 &引用传递

    QPushButton* btn2=new QPushButton("close",this);
    btn2->move(200,200);
    connect(btn2,&QPushButton::clicked,this,[=](){
        //st->treat("宫保鸡丁");
        emit tea->hungry("dw");
        btn2->setText("AAA");

    });
//    [btn](){
//        btn->setText("aaaa");
//    }();




}
void Widget::ClassIsOver()
{
    //调用后，触发信号
    //emit tea->hungry();

    emit tea->hungry("宫保鸡丁");
}
Widget::~Widget()
{
    delete ui;
}

