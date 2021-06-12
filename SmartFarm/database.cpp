#include "database.h"

Database::Database(const QString &connectionName)
{
    createConnectionByName(connectionName);
}
void Database::createConnectionByName(const QString &connectionName)
{
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL",connectionName);
        db.setHostName("127.0.0.1"); // 数据库服务器IP，我用的是本地电脑
        db.setDatabaseName("SmartFarm");// 数据库名
        db.setUserName("root");// 用户名
        db.setPassword("123456");// 密码
        db.setPort(3306);// 端口号
        bool ok = db.open();

         if (ok)
         {
             qDebug() << "database connect is ok";
         }
         else
         {
             qDebug() << "database connect is fail";
         }

}

QSqlDatabase Database::getConnectionByName(const QString &connectionName) {
    // 获取数据库连接
    return QSqlDatabase::database(connectionName);
}
void Database::insertMessage(QSqlDatabase db, const QString &genus,int age,const QString &sex,const QString &status) {
    QSqlQuery query(db);
    query.prepare("INSERT INTO animal (genus,age,sex,status) VALUES ( :genus,:age,:sex,:status)");
   // query.bindValue(":id", userid);
    query.bindValue(":genus", genus);
    query.bindValue(":age", age);
    query.bindValue(":sex", sex);
    query.bindValue(":status", status);
    query.exec();
}
 void Database::UpdateMessage(QSqlDatabase db,int id, const QString &genus,int age,const QString &sex,const QString &status)
 {
     QSqlQuery query(db);
     query.prepare("update animal set genus=:genus,age=:age,sex=:sex,status=:status where id=:id");
     query.bindValue(":id", id);
     query.bindValue(":genus", genus);
     query.bindValue(":age", age);
     query.bindValue(":sex", sex);
     query.bindValue(":status", status);

     query.exec();
 }
 void  Database::DeleteMessage(QSqlDatabase db,int id)
 {
     QSqlQuery query(db);
     query.prepare("delete from animal where id=:id");
     query.bindValue(":id", id);
     query.exec();
 }
 QSqlQuery Database::SearchAllMessage(QSqlDatabase db)
{
     QString sql = "SELECT * FROM animal" ; // 组装sql语句
     QSqlQuery query(db);                               // [1] 传入数据库连接
     query.exec(sql);                                   // [2] 执行sql语句
     return query;
//     while (query.next()) {                             // [3] 遍历查询结果
//         qDebug() << QString("Id: %1, Username: %2")
//                     .arg(query.value("id").toInt())
//                     .arg(query.value("username").toString());
//     }
}
