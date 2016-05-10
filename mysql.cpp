<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "mysql.h"
#include "qdebug.h"
#include "QTime"
MySql::MySql(QObject *parent) : QObject(parent)
{
    //创建数据库实例
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
}

MySql::~MySql()
{

}

QVector<int> MySql::getRandomNumber(int ID)
{
    //生成三个随机数
    QVector<int> IDGroup(3);
    bool flag[3001];
    for (int i=0; i<= 3000; i++)
        flag[i] =false;
    int i = 0 ;
    int j;
    while (i<3)
    {
        j = qrand() % 3001;
        if (abs(j-ID)>30&&flag[j]==false)
        {
            flag[j]=true;
            IDGroup[i]=j;
            i++;
        }
    }
    return IDGroup;

}

QVector <QVector<QString> > MySql::getOrderFile(int ID)
{
    //通过ID获取数据库中30个单词的数据
    QVector < QVector<QString> > data(30);
    for (int i=0;i<=29;i++)
        data[i].resize(4);
    db.setDatabaseName("CETWORD.db");
    db.open();
    query = QSqlQuery(db);
    int beginID = 30*(ID-1)+1;
    int endID = 30*(ID-1)+30;
    QString sql = tr("select * from WORD where GROUPID>=%1 and GROUPID<=%2").arg(beginID).arg(endID);
    query.prepare(sql);
    query.exec();
    int i = 0;
    while (query.next())
    {
        data[i][0] =query.value(1).toString();
        data[i][1] =query.value(2).toString();
        data[i][2] =query.value(3).toString();
        data[i][3] = query.value(4).toString();
        i ++;
    }
    db.close();
    return data;

}

QVector <QVector<QString> > MySql::getRandomFile(int ID)

{
    //通过一个ID获取数据库中3个随机单词的数据

    QVector<int> IDGroup(3);
    IDGroup = this->getRandomNumber(ID);
    QVector <QVector<QString> > data(3);
    for (int i=0; i<=2; i++)
        data[i].resize(4);
    db.setDatabaseName("CETWORD.db");
    db.open();
    query = QSqlQuery(db);
    QString sql = tr("select * from WORD where GROUPID in (%1,%2,%3)").arg(IDGroup[0]).arg(IDGroup[1]).arg(IDGroup[2]);
    query.prepare(sql);
    query.exec();
    int i=0;
    while (query.next())
    {
        data[i][0] = query.value(1).toString();
        data[i][1] = query.value(2).toString();
        data[i][2] = query.value(3).toString();
        data[i][3] = query.value(4).toString();
        ++i;
    }
    db.close();
    return data;


}
=======
#include "mysql.h"
#include "qdebug.h"
#include "QTime"
MySql::MySql(QObject *parent) : QObject(parent)
{
    //创建数据库实例
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QSQLITE");
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
}

MySql::~MySql()
{

}

QVector<int> MySql::getRandomNumber(int ID)
{
    //生成三个随机数
    QVector<int> IDGroup(3);
    bool flag[3001];
    for (int i=0; i<= 3000; i++)
        flag[i] =false;
    int i = 0 ;
    int j;
    while (i<3)
    {
        j = qrand() % 3001;
        if (abs(j-ID)>30&&flag[j]==false)
        {
            flag[j]=true;
            IDGroup[i]=j;
            i++;
        }
    }
    return IDGroup;

}

QVector <QVector<QString> > MySql::getOrderFile(int ID)
{
    //通过ID获取数据库中30个单词的数据
    QVector < QVector<QString> > data(30);
    for (int i=0;i<=29;i++)
        data[i].resize(4);
    db.setDatabaseName("CETWORD.db");
    db.open();
    query = QSqlQuery(db);
    int beginID = 30*(ID-1)+1;
    int endID = 30*(ID-1)+30;
    QString sql = tr("select * from WORD where GROUPID>=%1 and GROUPID<=%2").arg(beginID).arg(endID);
    query.prepare(sql);
    query.exec();
    int i = 0;
    while (query.next())
    {
        data[i][0] =query.value(1).toString();
        data[i][1] =query.value(2).toString();
        data[i][2] =query.value(3).toString();
        data[i][3] = query.value(4).toString();
        i ++;
    }
    db.close();
    return data;

}

QVector <QVector<QString> > MySql::getRandomFile(int ID)

{
    //通过一个ID获取数据库中3个随机单词的数据

    QVector<int> IDGroup(3);
    IDGroup = this->getRandomNumber(ID);
    QVector <QVector<QString> > data(3);
    for (int i=0; i<=2; i++)
        data[i].resize(4);
    db.setDatabaseName("CETWORD.db");
    db.open();
    query = QSqlQuery(db);
    QString sql = tr("select * from WORD where GROUPID in (%1,%2,%3)").arg(IDGroup[0]).arg(IDGroup[1]).arg(IDGroup[2]);
    query.prepare(sql);
    query.exec();
    int i=0;
    while (query.next())
    {
        data[i][0] = query.value(1).toString();
        data[i][1] = query.value(2).toString();
        data[i][2] = query.value(3).toString();
        data[i][3] = query.value(4).toString();
        ++i;
    }
    db.close();
    return data;


}
>>>>>>> final version
