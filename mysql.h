<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef MYSQL_H
#define MYSQL_H

#include "qsqldatabase.h"
#include "qsqlquery.h"
#include <QObject>
#include <QTime>

class MySql : public QObject
{
    Q_OBJECT
public:
    explicit MySql(QObject *parent = 0);
    ~MySql();
    QSqlDatabase db; //数据库实例
    QSqlQuery query;  //用于对数据库操作
    QVector< QVector<QString> > getOrderFile(int ID); //获取一组顺序30个单词数据
    QVector< QVector<QString> > getRandomFile(int ID) ; //获取一组随机3个单词数据
    QVector<int>  getRandomNumber(int ID); //获取三个随机数、
    QTime time;  //随机种子

signals:

public slots:
};

#endif // MYSQL_H
=======
#ifndef MYSQL_H
#define MYSQL_H

#include "qsqldatabase.h"
#include "qsqlquery.h"
#include <QObject>
#include <QTime>

class MySql : public QObject
{
    Q_OBJECT
public:
    explicit MySql(QObject *parent = 0);
    ~MySql();
    QSqlDatabase db; //数据库实例
    QSqlQuery query;  //用于对数据库操作
    QVector< QVector<QString> > getOrderFile(int ID); //获取一组顺序30个单词数据
    QVector< QVector<QString> > getRandomFile(int ID) ; //获取一组随机3个单词数据
    QVector<int>  getRandomNumber(int ID); //获取三个随机数、
    QTime time;  //随机种子

signals:

public slots:
};

#endif // MYSQL_H
>>>>>>> final version
