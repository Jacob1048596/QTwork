#ifndef DATABASE_H
#define DATABASE_H

#include<QtSql/QSqlDatabase>
#include<QDebug>
#include<QString>
#include<QSqlQuery>
class Database
{
public:
    Database(const QString &connectionName);
    QSqlDatabase getConnectionByName(const QString &connectionName);  // 使用自定义 connectionName 获取连接
    void insertMessage(QSqlDatabase db,const QString &genus,int age,const QString &sex,const QString &status);
    void UpdateMessage(QSqlDatabase db,int id,const QString &genus,int age,const QString &sex,const QString &status);
    void DeleteMessage(QSqlDatabase db,int id);
    QSqlQuery SearchAllMessage(QSqlDatabase db);
private:
    void createConnectionByName(const QString &connectionName); //使用自定义 connectionName 创建连接


};

#endif // DATABASE_H
