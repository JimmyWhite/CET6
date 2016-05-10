<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "fourthwindow.h"
#include "ui_fourthwindow.h"
#include "thirddialog.h"
#include "fourthdialog.h"
FourthWindow::FourthWindow(QString _name, QString _money,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FourthWindow)
{
    ui->setupUi(this);
    //样式初始化
    this->setWindowFlags(Qt::FramelessWindowHint);
    mySocket = new MySocket(_name,_money);
    connect(mySocket, SIGNAL(dealReply(QString)),this,SLOT(dealReply(QString)),Qt::DirectConnection);
    for (int i=0;i <=4; i++)
    {
        name[i] = new QLabel();
        money[i] = new QLabel();
        pk[i] = new QPushButton();
    }
    name[0] = ui->name_2;
    name[1] = ui->name_3;
    name[2] = ui->name_4;
    name[3] = ui->name_5;
    name[4] = ui->name_6;

    money[0] = ui->money_2;
    money[1] = ui->money_3;
    money[2] = ui->money_4;
    money[3] = ui->money_5;
    money[4] = ui->money_6;

    pk[0] = ui->pk;
    pk[1] = ui->pk_2;
    pk[2] = ui->pk_3;
    pk[3] = ui->pk_4;
    pk[4] = ui->pk_5;

    for (int i=0; i<=4;i++)
    {
        name[i]->hide();
        money[i]->hide();
        pk[i]->hide();
        name[i]->setAlignment(Qt::AlignCenter);
        money[i]->setAlignment(Qt::AlignCenter);
    }
    ui->name->setAlignment(Qt::AlignCenter);
    ui->money->setAlignment(Qt::AlignCenter);
    ui->refresh->setCursor(Qt::PointingHandCursor);
}

FourthWindow::~FourthWindow()
{
    delete ui;
}

void FourthWindow::dealReply(QString data)
{
        int count=0;
        int index;
        QString name;
        QString money;
        for (int i=0;i<=4;i++)
        {
            this->name[i]->hide();
            this->money[i]->hide();
            this->pk[i]->hide();
            this->pk[i]->setCursor(Qt::PointingHandCursor);
        }
       if (data.indexOf('-')!=-1)
      {
       while (data!="-")
       {
        index = data.indexOf('-');
        name = data.left(index);
        data = data.mid(index+1);
        index = data.indexOf('-');
        money = data.left(index);
        if (data.length()>index+1)
        data = data.mid(index+1);
        else data="-";
        this->name[count]->setText(name);
        this->money[count]->setText(money);
        this->name[count]->show();
        this->pk[count]->show();
        this->money[count]->show();
        count++;
       }
       if (count==0)
           ui->tip->show();
       else
           ui->tip->hide();
      }
       if (data.indexOf('*')!=-1)
       {
          QString pkName = data.left(data.indexOf('*'));
          QString courseId = data.mid(data.indexOf('*')+1);
          ThirdDialog d(pkName+"向您发起挑战!", courseId);
          d.exec();
       }

}

void FourthWindow::on_refresh_clicked()
{
    mySocket->requestPeople();
}

void FourthWindow::on_close_clicked()
{
    this->close();
}

void FourthWindow::selectCourse(QString courseID)
{
    mySocket->PK(which+'*'+courseID);
}

void FourthWindow::on_pk_clicked()
{
    this->which = name[0]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    d->exec();
}

void FourthWindow::on_pk_2_clicked()
{
    this->which = name[1]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    d->exec();

}

void FourthWindow::on_pk_3_clicked()
{
    this->which = name[2]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    d->exec();
}

void FourthWindow::on_pk_4_clicked()
{
    this->which = name[3]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    d->exec();
}

void FourthWindow::on_pk_5_clicked()
{
    this->which = name[4]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    d->exec();
}
=======
#include "fourthwindow.h"
#include "ui_fourthwindow.h"
#include "thirddialog.h"
#include "fourthdialog.h"
#include "thirdwindow.h"
#include "windows.h"

FourthWindow::FourthWindow(QString _name, QString _money,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FourthWindow)
{
    ui->setupUi(this);
    //样式初始化
    this->setWindowFlags(Qt::FramelessWindowHint);
    mySocket = new MySocket(_name,_money);
    this->myName =_name;
    this->mymoney = _money;
    connect(mySocket, SIGNAL(dealReply(QString)),this,SLOT(dealReply(QString)),Qt::DirectConnection);
    for (int i=0;i <=4; i++)
    {
        name[i] = new QLabel();
        money[i] = new QLabel();
        pk[i] = new QPushButton();
    }
    name[0] = ui->name_2;
    name[1] = ui->name_3;
    name[2] = ui->name_4;
    name[3] = ui->name_5;
    name[4] = ui->name_6;

    money[0] = ui->money_2;
    money[1] = ui->money_3;
    money[2] = ui->money_4;
    money[3] = ui->money_5;
    money[4] = ui->money_6;

    pk[0] = ui->pk;
    pk[1] = ui->pk_2;
    pk[2] = ui->pk_3;
    pk[3] = ui->pk_4;
    pk[4] = ui->pk_5;

    for (int i=0; i<=4;i++)
    {
        name[i]->hide();
        money[i]->hide();
        pk[i]->hide();
        name[i]->setAlignment(Qt::AlignCenter);
        money[i]->setAlignment(Qt::AlignCenter);
    }
    ui->name->setAlignment(Qt::AlignCenter);
    ui->money->setAlignment(Qt::AlignCenter);
    ui->refresh->setCursor(Qt::PointingHandCursor);
}

FourthWindow::~FourthWindow()
{
    delete ui;
}

void FourthWindow::dealReply(QString data)
{
        int count=0;
        int index;
        QString name;
        QString money;
        for (int i=0;i<=4;i++)
        {
            this->name[i]->hide();
            this->money[i]->hide();
            this->pk[i]->hide();
            this->pk[i]->setCursor(Qt::PointingHandCursor);
        }
       if (data.indexOf('-')!=-1)
      {
       while (data!="-")
       {
        index = data.indexOf('-');
        name = data.left(index);
        data = data.mid(index+1);
        index = data.indexOf('-');
        money = data.left(index);
        if (data.length()>index+1)
        data = data.mid(index+1);
        else data="-";
        this->name[count]->setText(name);
        this->money[count]->setText(money);
        this->name[count]->show();
        this->pk[count]->show();
        this->money[count]->show();
        count++;
       }
       if (count==0)
           ui->tip->show();
       else
           ui->tip->hide();
      }
       if (data.indexOf('*')!=-1)
       {
          QString pkName = data.left(data.indexOf('*'));
          QString courseId = data.mid(data.indexOf('*')+1);
          ThirdDialog d(pkName, courseId);
          connect(&d,SIGNAL(agreePK(QString,QString)),this,SLOT(agreePK(QString,QString)));
          d.exec();
       }
       if (data.indexOf('/')!=-1)
       {
           emit closeTo();
           QString pkName = data.left(data.indexOf('/'));
           QString courseId = data.mid(data.indexOf('/')+1);
           ThirdWindow *w;
           w = new ThirdWindow(courseId.toInt(),"挑战",this->mymoney,this->myName,pkName);
           w->show();
           this->close();
       }

}

void FourthWindow::agreePK(QString pkName,QString courseID)
{
    this->mySocket->beginPK(pkName,courseID);
    Sleep(1000);
    ThirdWindow *w;
    w = new ThirdWindow(courseID.toInt(),"挑战",this->mymoney,this->myName,pkName);
    w->show();
    this->close();
}

void FourthWindow::on_refresh_clicked()
{
    mySocket->requestPeople();
}

void FourthWindow::on_close_clicked()
{
    this->close();
}

void FourthWindow::selectCourse(QString courseID)
{
    mySocket->PK(which+'*'+courseID);
}

void FourthWindow::on_pk_clicked()
{
    this->which = name[0]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    connect(this,SIGNAL(closeTo()),d,SLOT(closeTo()));
    d->exec();
}

void FourthWindow::on_pk_2_clicked()
{
    this->which = name[1]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    connect(this,SIGNAL(closeTo()),d,SLOT(closeTo()));

    d->exec();

}

void FourthWindow::on_pk_3_clicked()
{
    this->which = name[2]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    connect(this,SIGNAL(closeTo()),d,SLOT(closeTo()));

    d->exec();
}

void FourthWindow::on_pk_4_clicked()
{
    this->which = name[3]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    connect(this,SIGNAL(closeTo()),d,SLOT(closeTo()));

    d->exec();
}

void FourthWindow::on_pk_5_clicked()
{
    this->which = name[4]->text();
    FourthDialog *d = new FourthDialog();
    connect(d,SIGNAL(selectCourse(QString)),this,SLOT(selectCourse(QString)));
    connect(this,SIGNAL(closeTo()),d,SLOT(closeTo()));

    d->exec();
}
>>>>>>> final version
