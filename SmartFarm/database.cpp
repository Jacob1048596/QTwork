#include "database.h"

Database::Database(const QString &connectionName)
{
    createConnectionByName(connectionName);
}
void Database::createConnectionByName(const QString &connectionName)
{
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL",connectionName);
        db.setHostName("127.0.0.1"); // 数据库服务器IP，我用的是本地电脑
        db.setDatabaseName("test");// 数据库名
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
void Database::insertUserName(QSqlDatabase db, const QString &name,int age,int score) {
    QSqlQuery query(db);
    query.prepare("INSERT INTO student (name,age,score) VALUES ( :username,:age,:score)");
   // query.bindValue(":id", userid);
    query.bindValue(":username", name);
    query.bindValue(":age", age);
    query.bindValue(":score", score);

    query.exec();
}
