<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmovie.h"
#include "dialog.h"
#include "secondwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(412,312);

    //banner播放
    QMovie *banner_movie = new QMovie(":/login/images/banner.gif");
    ui->banner->setMovie(banner_movie);
    banner_movie->start();

    //文本框显示设计
    ui->password->setEchoMode(QLineEdit::Password);
    ui->username->setTextMargins(6,0,0,0);
    ui->password->setTextMargins(6,0,0,0);

    //初始化通信SOCKET
    myClient = new MyClient();
    connect(myClient,SIGNAL(dealReply(QString)),this,SLOT(dealReply(QString)));

    //文本框、按钮样式设计
    ui->loginin->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "color:white;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );

    ui->username->setStyleSheet("QLineEdit{background-image:url(:/login/images/edit_frame_normal.png);"
                                "background-position:center;"
                                "border-radius:3px;"
                                "font:10pt 微软雅黑;}"
                                "QLineEdit:hover{background-image:url(:/login/images/edit_frame_hover.png);}"
                                );

    ui->password->setStyleSheet("QLineEdit{background-image:url(:/login/images/edit_frame_normal2.png);"
                                "background-position:center;"
                                "border-radius:3px;"
                                "font:10pt 微软雅黑;}"
                                "QLineEdit:hover{background-image:url(:/login/images/edit_frame_hover2.png)}"
                                );

    ui->register_2->setStyleSheet("QPushButton{border:none;"
                                  "color: rgb(60, 171, 255);}"
                                  "QPushButton:hover{color:rgb(150,200,255);}"
                                  );

    ui->register_3->setStyleSheet("QPushButton{border:none;"
                                  "color:rgb(60,171,255);}"
                                  "QPushButton:hover{color:rgb(150,200,255);}"
                                  );

    ui->plus->setStyleSheet("QPushButton{border:none;"
                            "background-image:url(:/login/images/plus.png);}"
                            "QPushButton:hover{background-image:url(:/login/images/plus_hover.png)}"
                            );

    ui->twocode->setStyleSheet("QPushButton{border:none;"
                               "background-image:url(:/login/images/twocode.png);}"
                               "QPushButton:hover{background-image:url(:/login/images/twocode_hover.png);}"
                               );

    ui->close->setStyleSheet("QPushButton{border:none;"
                             "background-image:url(:/login/images/close.png);}"
                             "QPushButton:hover{background-image:url(:/login/images/close_hover.png);}"
                             );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_register_2_clicked()
{
    Dialog d(0, "请联系管理员获取账号密码!");
    d.exec();

}

void MainWindow::on_register_3_clicked()
{
    Dialog d(0, "请联系管理员找回账号密码!");
    d.exec();
}

void MainWindow::on_plus_clicked()
{
    Dialog d(0, "此功能未开通!");
    d.exec();
}

void MainWindow::on_twocode_clicked()
{
    Dialog d(0, "此功能未开通");
    d.exec();
}

void MainWindow::on_close_clicked()
{
    this->close();
}

void MainWindow::on_loginin_clicked()
{
    //登陆处理，发送账号密码到服务器并返回结果触发UI
    QByteArray data;
    data.append(ui->username->text());
    data.append('+');
    data.append(ui->password->text());
    myClient->write(data);
}

void MainWindow::dealReply(QString reply)
{
    if (reply!="请输入正确的账号和密码!")
    {
    int index = reply.indexOf('+');
    QString chinesename = reply.left(index);
    QString money = reply.mid(index+1);
    money +="金币";
    SecondWindow *w = new SecondWindow(chinesename,money);
    this->close();
    w->show();
    }
    else
    {
        Dialog d(0,reply);
        d.exec();
    }

}
=======
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmovie.h"
#include "dialog.h"
#include "secondwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(412,312);

    //banner播放
    QMovie *banner_movie = new QMovie(":/login/images/banner.gif");
    ui->banner->setMovie(banner_movie);
    banner_movie->start();

    //文本框显示设计
    ui->password->setEchoMode(QLineEdit::Password);
    ui->username->setTextMargins(6,0,0,0);
    ui->password->setTextMargins(6,0,0,0);

    //初始化通信SOCKET
    myClient = new MyClient();
    connect(myClient,SIGNAL(dealReply(QString)),this,SLOT(dealReply(QString)));

    //文本框、按钮样式设计
    ui->loginin->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "color:white;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );

    ui->username->setStyleSheet("QLineEdit{background-image:url(:/login/images/edit_frame_normal.png);"
                                "background-position:center;"
                                "border-radius:3px;"
                                "font:10pt 微软雅黑;}"
                                "QLineEdit:hover{background-image:url(:/login/images/edit_frame_hover.png);}"
                                );

    ui->password->setStyleSheet("QLineEdit{background-image:url(:/login/images/edit_frame_normal2.png);"
                                "background-position:center;"
                                "border-radius:3px;"
                                "font:10pt 微软雅黑;}"
                                "QLineEdit:hover{background-image:url(:/login/images/edit_frame_hover2.png)}"
                                );

    ui->register_2->setStyleSheet("QPushButton{border:none;"
                                  "color: rgb(60, 171, 255);}"
                                  "QPushButton:hover{color:rgb(150,200,255);}"
                                  );

    ui->register_3->setStyleSheet("QPushButton{border:none;"
                                  "color:rgb(60,171,255);}"
                                  "QPushButton:hover{color:rgb(150,200,255);}"
                                  );

    ui->plus->setStyleSheet("QPushButton{border:none;"
                            "background-image:url(:/login/images/plus.png);}"
                            "QPushButton:hover{background-image:url(:/login/images/plus_hover.png)}"
                            );

    ui->twocode->setStyleSheet("QPushButton{border:none;"
                               "background-image:url(:/login/images/twocode.png);}"
                               "QPushButton:hover{background-image:url(:/login/images/twocode_hover.png);}"
                               );

    ui->close->setStyleSheet("QPushButton{border:none;"
                             "background-image:url(:/login/images/close.png);}"
                             "QPushButton:hover{background-image:url(:/login/images/close_hover.png);}"
                             );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_register_2_clicked()
{
    Dialog d(0, "请联系管理员获取账号密码!");
    d.exec();

}

void MainWindow::on_register_3_clicked()
{
    Dialog d(0, "请联系管理员找回账号密码!");
    d.exec();
}

void MainWindow::on_plus_clicked()
{
    Dialog d(0, "此功能未开通!");
    d.exec();
}

void MainWindow::on_twocode_clicked()
{
    Dialog d(0, "此功能未开通");
    d.exec();
}

void MainWindow::on_close_clicked()
{
    this->close();
}

void MainWindow::on_loginin_clicked()
{
    //登陆处理，发送账号密码到服务器并返回结果触发UI
    QByteArray data;
    data.append(ui->username->text());
    data.append('+');
    data.append(ui->password->text());
    myClient->write(data);
}

void MainWindow::dealReply(QString reply)
{
    if (reply!="请输入正确的账号和密码!")
    {
    int index = reply.indexOf('+');
    QString chinesename = reply.left(index);
    QString money = reply.mid(index+1);
    money +="金币";
    SecondWindow *w = new SecondWindow(chinesename,money);
    this->close();
    w->show();
    }
    else
    {
        Dialog d(0,reply);
        d.exec();
    }

}
>>>>>>> final version
