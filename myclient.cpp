<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "myclient.h"
#include "mainwindow.h"
MyClient::MyClient(QObject *parent) : QTcpSocket(parent)
{
    //连接到服务器
    this->connectToHost("127.0.0.1",22656);
    connect(this,SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);

}

MyClient::~MyClient()
{

}

void MyClient::sendData(QByteArray data)
{
    this->write(data);

}

void MyClient::readyRead()
{
    //自动接受服务器返回的消息并产生信号反馈给主窗口
    QByteArray reply = this->readAll();
    emit dealReply(reply);
}




=======
#include "myclient.h"
#include "mainwindow.h"
MyClient::MyClient(QObject *parent) : QTcpSocket(parent)
{
    //连接到服务器
    this->connectToHost("115.159.48.101",22656);
    connect(this,SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);

}

MyClient::~MyClient()
{

}

void MyClient::sendData(QByteArray data)
{
    this->write(data);

}

void MyClient::readyRead()
{
    //自动接受服务器返回的消息并产生信号反馈给主窗口
    QByteArray reply = this->readAll();
    emit dealReply(reply);
}




>>>>>>> final version
