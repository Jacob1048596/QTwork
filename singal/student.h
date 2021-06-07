#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    //早期QT版本必须写到slots下
    //返回值void，需要声明，需要实现
    void treat();

    void treat(QString foodname);
};

#endif // STUDENT_H
