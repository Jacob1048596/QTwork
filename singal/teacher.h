#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //自定义信号
    //返回值void 之声明，不实现
    //可以有参数，可以重载
     void hungry();
     void hungry(QString foodname);
public slots:

};

#endif // TEACHER_H
