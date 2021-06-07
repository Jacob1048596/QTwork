#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}
void Student::treat()
{
    qDebug()<<"qingke吃饭";
}
void Student::treat(QString foodname)
{

    qDebug()<<"请客吃"<<foodname.toUtf8().data();
}
