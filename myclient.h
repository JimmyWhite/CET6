<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QTcpSocket>

class MyClient : public QTcpSocket
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = 0);
    ~MyClient();
    void sendData(QByteArray data);   //发送数据到服务器

signals:
    void dealReply(QString);   //处理从服务器返回的数据

public slots:
    void readyRead();

};

#endif // MYCLIENT_H
=======
#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QTcpSocket>

class MyClient : public QTcpSocket
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = 0);
    ~MyClient();
    void sendData(QByteArray data);   //发送数据到服务器

signals:
    void dealReply(QString);   //处理从服务器返回的数据

public slots:
    void readyRead();

};

#endif // MYCLIENT_H
>>>>>>> final version
