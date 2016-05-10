<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "mysocket.h"
MySocket::MySocket(QString _name, QString _money,QObject *parent)
    : QThread(parent)
{
    //初始化
    onlineCount = 0;
    socket = new QTcpSocket();
    socket->connectToHost("127.0.0.1",22656);
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    this->name = _name;
    this->money = _money;
    requestPeople();
}

MySocket::~MySocket()
{

}

void MySocket::requestPeople()
{
    QByteArray data;
    data.append(this->name);
    data.append('-');
    data.append(this->money);
    socket->write(data);
}

void MySocket::readyRead()
{
    QByteArray data=socket->readAll();
    emit dealReply(data);

}

void MySocket::PK(QString name)
{
    QByteArray people;
    people.append(name);
    socket->write(people);

}

=======
#include "mysocket.h"
MySocket::MySocket(QString _name, QString _money,QObject *parent)
    : QThread(parent)
{
    //初始化
    onlineCount = 0;
    socket = new QTcpSocket();
    socket->connectToHost("115.159.48.101",22656);
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    this->name = _name;
    this->money = _money;
    requestPeople();
}

MySocket::~MySocket()
{

}

void MySocket::requestPeople()
{
    QByteArray data;
    data.append(this->name);
    data.append('-');
    data.append(this->money);
    socket->write(data);
}

void MySocket::readyRead()
{
    QByteArray data=socket->readAll();
    emit dealReply(data);

}

void MySocket::PK(QString name)
{
    QByteArray people;
    people.append(name);
    socket->write(people);
}

void MySocket::beginPK(QString pkname, QString id)
{
    QByteArray data;
    data.append(pkname);
    data.append('/');
    data.append(id);
    socket->write(data);
}
>>>>>>> final version
