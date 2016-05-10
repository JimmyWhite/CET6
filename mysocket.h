<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef MYSOCKET_H
#define MYSOCKET_H

#include<qthread.h>
#include<QObject>
#include<qtcpsocket.h>
#include <qpixmap.h>

class MySocket : public QThread
{
    Q_OBJECT
public:
    explicit MySocket(QString _name, QString _money, QObject *parent = 0);
    ~MySocket();
    QTcpSocket *socket;   //用于通信的socket
    int onlineCount;    //在线人数
    QVector<QString> onlinePeople[10]; //在线人姓名
    QVector<QPixmap> onlineHeadshow[10]; //在线人头像
    QVector<QString> onlineMoney[10]; //在线人金币
    void PK(QString name);
    void requestPeople();
    QString name;
    QString money;
signals:
    void dealReply(QString);

public slots:
    void readyRead();
};

#endif // MYSOCKET_H
=======
#ifndef MYSOCKET_H
#define MYSOCKET_H

#include<qthread.h>
#include<QObject>
#include<qtcpsocket.h>
#include <qpixmap.h>

class MySocket : public QThread
{
    Q_OBJECT
public:
    explicit MySocket(QString _name, QString _money, QObject *parent = 0);
    ~MySocket();
    QTcpSocket *socket;   //用于通信的socket
    int onlineCount;    //在线人数
    QVector<QString> onlinePeople[10]; //在线人姓名
    QVector<QPixmap> onlineHeadshow[10]; //在线人头像
    QVector<QString> onlineMoney[10]; //在线人金币
    void PK(QString name);
    void requestPeople();
    void beginPK(QString pkname, QString id);
    QString name;
    QString money;
signals:
    void dealReply(QString);

public slots:
    void readyRead();
};

#endif // MYSOCKET_H
>>>>>>> final version
