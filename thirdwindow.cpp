<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include "qdebug.h"
#include "seconddialog.h"
#include "qmediaplaylist.h"
ThirdWindow::ThirdWindow(int courseID, QString way, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->word->setAlignment(Qt::AlignCenter);
    for (int i=0; i<=3; i++)
    {
        pix[i]= new QPixmap();

    }
    data.resize(30);
    for (int i=0;i<=29;i++)
        data[i].resize(4);

    //初始化
    for (int i=0; i<=3; i++)
    {
        abcd[i] = new QLabel();
        abcd[i]->setAttribute(Qt::WA_DeleteOnClose);
        chinese[i] = new QTextEdit();
        chinese[i]->setAttribute(Qt::WA_DeleteOnClose);
    }
    abcd[0] = ui->a;
    abcd[1] = ui->b;
    abcd[2] = ui->c;
    abcd[3] = ui->d;
    chinese[0] = ui->a_2;
    chinese[1] = ui->b_2;
    chinese[2] = ui->c_2;
    chinese[3] = ui->d_2;
    ui->lunci->setAlignment(Qt::AlignCenter);
    ui->wordmp3->setCursor(Qt::PointingHandCursor);
    ui->sentencemp3->setCursor(Qt::PointingHandCursor);
    for (int i=0; i<=3;i++)
    {
        abcd[i]->setScaledContents(true);
        abcd[i]->installEventFilter(this);
        chinese[i]->installEventFilter(this);
        chinese[i]->setReadOnly(this);
        chinese[i]->viewport()->installEventFilter(this);
    }
    this->nowNumber = 0;
    this->rightAnswer = 0;
    this->style = 1;
    this->styleSeq = randomStyle();
    wordPlayer = new QMediaPlayer();
    sentencePlayer = new QMediaPlayer();
    autoPlayer = new QMediaPlayer();
    //参数获取
    ID =courseID;
    studyWay =way;
    this->no = 0;

    //开始答题
    if (this->studyWay=="学习")
    doStudy(courseID);
    else
    {
        doTest(courseID);
    }

}

ThirdWindow::~ThirdWindow()
{
    delete wordPlayer;
    delete sentencePlayer;
    delete autoPlayer;
    delete pix[0];
    delete pix[1];
    delete pix[2];
    delete pix[3];
    delete ui;
}

void ThirdWindow::doStudy(int number)
{
    //调用sql生成题目

    MySql mySql;
    choose.clear();
    this->data = mySql.getOrderFile(number);
    for (int i=data[0][3].toInt(); i<=data[29][3].toInt();i++)
        choose += (mySql.getRandomFile(i));
    showObject(this->nowNumber);

}

void ThirdWindow::doTest(int number)
{
    //调用sql生成题目
    QVector< QVector<QString> > temp(30);
    QVector<int> seq(30);
    temp.resize(4);
    MySql mySql;
    choose.clear();
    seq = randomSeq();
    this->data =mySql.getOrderFile(number);
    temp = this->data;
    for (int i=0; i<=29; i++)
    {
        data[i] = temp[seq[i]];
    }
    for (int i=temp[0][3].toInt();i<=temp[29][3].toInt();i++)
        choose += mySql.getRandomFile(i);
    showObject(this->nowNumber);
}
void ThirdWindow::showObject(int number)
{
    //显示单词和图片
    this->no ++;
    QMediaPlaylist *mp3List;
    mp3List= new QMediaPlaylist();
    if (style==1)
    {
    mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));
    mp3List->addMedia(QUrl::fromLocalFile("sentenceaudios/"+data[number][0]+".mp3"));
    }
    else
    {
        mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));

    }
    autoPlayer->setPlaylist(mp3List);
    autoPlayer->play();
    ui->ahead->setText("当前单词:"+QString::number(this->no%30));
    ui->remain->setText("剩余单词:"+QString::number(30-(this->no%30)));
    if (this->studyWay=="学习")
 {
    if (no>30&&no<=60)
    {
        ui->lunci->setText("第二轮学习");
        ui->sentencemp3->hide();

    }
    if (no>60&&no<=90)
    {
        ui->lunci->setText("第三轮学习");
        ui->sentencemp3->hide();
    }
    if (no<=60)
    {
        ui->A_2->hide();
        ui->B_2->hide();
        ui->C_2->hide();
        ui->D_2->hide();
        for (int i=0; i<=3; i++)
            chinese[i]->hide();
    }
    else
    {
        ui->A_2->show();
        ui->B_2->show();
        ui->C_2->show();
        ui->D_2->show();
        for (int i=0; i<=3; i++)
            chinese[i]->show();
    }
    if (this->style == 2)
        ui->sentence->hide();
    if (this->style == 3)
    {
        ui->sentence->hide();
        ui->A->hide();
        ui->B->hide();
        ui->C->hide();
        ui->D->hide();
        for (int i=0; i<=3; i++)
            abcd[i]->hide();
    }
 }
    else
    {
        mp3List->clear();
        if (styleSeq[this->no-1]==0)
        {
        mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));
        mp3List->addMedia(QUrl::fromLocalFile("sentenceaudios/"+data[number][0]+".mp3"));
        }
        else
        {
            mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));

        }
        autoPlayer->setPlaylist(mp3List);
        autoPlayer->play();
        ui->lunci->setText("能力测试");
        if(this->styleSeq[this->no-1]==0)
        {
            ui->A->show();
            ui->B->show();
            ui->C->show();
            ui->D->show();
            ui->a->show();
            ui->b->show();
            ui->c->show();
            ui->d->show();
            ui->sentence->show();
            ui->A_2->hide();
            ui->B_2->hide();
            ui->C_2->hide();
            ui->D_2->hide();
            ui->a_2->hide();
            ui->b_2->hide();
            ui->c_2->hide();
            ui->d_2->hide();
            ui->wordmp3->show();
            ui->sentencemp3->show();
        }
        else if (this->styleSeq[this->no-1]==1)
        {
            ui->A->show();
            ui->B->show();
            ui->C->show();
            ui->D->show();
            ui->a->show();
            ui->b->show();
            ui->c->show();
            ui->d->show();
            ui->sentence->hide();
            ui->A_2->hide();
            ui->B_2->hide();
            ui->C_2->hide();
            ui->D_2->hide();
            ui->a_2->hide();
            ui->b_2->hide();
            ui->c_2->hide();
            ui->d_2->hide();
            ui->wordmp3->show();
            ui->sentencemp3->hide();

        }
        else
        {
            ui->A->hide();
            ui->B->hide();
            ui->C->hide();
            ui->D->hide();
            ui->a->hide();
            ui->b->hide();
            ui->c->hide();
            ui->d->hide();
            ui->sentence->hide();
            ui->A_2->show();
            ui->B_2->show();
            ui->C_2->show();
            ui->D_2->show();
            ui->a_2->show();
            ui->b_2->show();
            ui->c_2->show();
            ui->d_2->show();
            ui->sentencemp3->hide();

        }


    }

    QVector<int> order;
    order.resize(4);
    ui->word->setText(data[number][0]);
    ui->sentence->setText(data[number][2]);
    ui->sentence->setReadOnly(true);
    pix[0]->load("wordimages/"+data[number][0]+".jpg");
    zhongwen[0] = data[number][1];
    for (int i=1;i<=3;i++)
    {
        pix[i]->load("wordimages/"+choose[3*number+i-1][0]+".jpg");
        zhongwen[i] = choose[3*number+i-1][1];
    }
    order = randomOrder();
    for (int i =0; i<=3; i++)
    {
        abcd[i]->setPixmap(*pix[order[i]]);
        chinese[i]->setText(zhongwen[order[i]]);
        if (0== order[i])
            rightAnswer = i;

    }

}

QVector<int> ThirdWindow::randomOrder()
{
    //调用随机函数生成4个选项顺序
    QVector<int> order;
    order.resize(4);
    bool flag[4] = {false};
    int i = 0;
    int j;
    while (i<4)
    {
        j = qrand()% 4;
        if (flag[j]==false)
        {
            flag[j] =true;
            order[i]=j;
            i++;
        }

    }
    return order;
}

bool ThirdWindow::eventFilter(QObject *target,QEvent *e)
{
    //判断答案是否正确
    QString str = "回答错误";
    for (int i=0; i<=3; i++)
    {
        if (abcd[i]==target&&e->type()==QEvent::MouseButtonPress)
            {
           // this->nowNumber++;
            //showObject(this->nowNumber);
            this->wordPlayer->stop();
            this->sentencePlayer->stop();
            this->autoPlayer->stop();
            this->hide();
            if (i==this->rightAnswer)
                str = "回答正确";
            SecondDialog *d;
            d = new SecondDialog(this->no ,str,data[nowNumber][0],data[nowNumber][2],*pix[0],data[nowNumber][1]);
            connect(d,SIGNAL(nextTest()),this,SLOT(enterNext()));
            d->exec();

        return false;
        }
    }
    for (int i=0; i<=3; i++)
    {
        if (chinese[i]->viewport()==target&&e->type()==QEvent::MouseButtonPress)
            {
           // this->nowNumber++;
            //showObject(this->nowNumber);
            this->hide();
            if (i==this->rightAnswer)
                str = "回答正确";
            SecondDialog *d;
            d = new SecondDialog(this->no ,str,data[nowNumber][0],data[nowNumber][2],*pix[0],data[nowNumber][1]);
            connect(d,SIGNAL(nextTest()),this,SLOT(enterNext()));
            d->exec();

        return false;
        }
    }
    return false;
}

void ThirdWindow::enterNext()
{
    //进入下一题
    if (this->nowNumber<29)
    {
    this->show();
    this->nowNumber ++;
    this->showObject(this->nowNumber);
    }
    else
    {
        style ++;
        this->nowNumber = 0;
        this->doTest(this->ID);
        this->show();
    }
}

void ThirdWindow::on_wordmp3_clicked()
{
    //点击按钮播放单词
    QUrl wordurl = QUrl::fromLocalFile("wordaudios/"+data[nowNumber][0]+".mp3");
    wordPlayer->setMedia(wordurl);
    wordPlayer->play();
}

void ThirdWindow::on_sentencemp3_clicked()
{
    //点击按钮播放句子
    QUrl sentenceurl =QUrl::fromLocalFile("sentenceaudios/"+data[nowNumber][0]+".mp3");
    sentencePlayer->setMedia(sentenceurl);
    sentencePlayer->play();
}


void ThirdWindow::on_pushButton_clicked()
{
    //退出当前课程，进入课程选择列表
    this->autoPlayer->stop();
    this->wordPlayer->stop();
    this->sentencePlayer->stop();
    this->destroyed();
    this->close();
}

QVector<int> ThirdWindow::randomSeq()
{
    //调用随机函数生成长度30序列
    QVector<int> order;
    order.resize(30);
    bool flag[30] = {false};
    int i = 0;
    int j;
    while (i<30)
    {
        j = qrand()% 30;
        if (flag[j]==false)
        {
            flag[j] =true;
            order[i]=j;
            i++;
        }

    }
    return order;
}

QVector<int> ThirdWindow::randomStyle()
{
    QVector<int> order;
    //调用随机函数生成长度30的学习方式用于测试
    order.resize(30);
    int i=0;
    int j;
    while (i<30)
        {
        j = qrand() % 3;
        order[i] = j;
       i++;
    }
    return order;
}
=======
#include "thirdwindow.h"
#include "qdebug.h"
#include "seconddialog.h"
#include "qmediaplaylist.h"
#include "qurl.h"
#include "ui_thirdwindow.h"
#include "fifthdialog.h"
#include "windows.h"

ThirdWindow::ThirdWindow(int courseID, QString way, QString money, QString myName, QString pkName, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdWindow)
{

    ui->setupUi(this);
    //窗体样式设计
    finished = 0;
    accept = 0;
    this->mymoney =money;
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->word->setAlignment(Qt::AlignCenter);
    for (int i=0; i<=3; i++)
    {
        pix[i]= new QPixmap();

    }
    data.resize(30);
    for (int i=0;i<=29;i++)
        data[i].resize(4);

    //初始化
    for (int i=0; i<=3; i++)
    {
        abcd[i] = new QLabel();
        abcd[i]->setAttribute(Qt::WA_DeleteOnClose);
        chinese[i] = new QTextEdit();
        chinese[i]->setAttribute(Qt::WA_DeleteOnClose);
        ui->datas->setAlignment(Qt::AlignCenter);
    }
    abcd[0] = ui->a;
    abcd[1] = ui->b;
    abcd[2] = ui->c;
    abcd[3] = ui->d;
    chinese[0] = ui->a_2;
    chinese[1] = ui->b_2;
    chinese[2] = ui->c_2;
    chinese[3] = ui->d_2;
    this->finishFlag=false;
    this->pkfinishFlag = false;
    ui->lunci->setAlignment(Qt::AlignCenter);
    ui->wordmp3->setCursor(Qt::PointingHandCursor);
    ui->sentencemp3->setCursor(Qt::PointingHandCursor);
    for (int i=0; i<=3;i++)
    {
        abcd[i]->setScaledContents(true);
        abcd[i]->installEventFilter(this);
        chinese[i]->installEventFilter(this);
        chinese[i]->setReadOnly(this);
        chinese[i]->viewport()->installEventFilter(this);
    }
    this->myName = myName;
    this->pkname = pkName;
    this->nowNumber = 0;
    this->rightAnswer = 0;
    this->style = 1;
    this->styleSeq = randomStyle();
    wordPlayer = new QMediaPlayer();
    sentencePlayer = new QMediaPlayer();
    autoPlayer = new QMediaPlayer();
    //参数获取
    ID =courseID;
    studyWay =way;
    this->no = 0;
    ui->datas->hide();
    ui->tap->hide();
    //开始答题
    if (this->studyWay=="挑战")
    {
       ui->datas->setText("0/0");
       socket = new QTcpSocket();
       connect(socket,SIGNAL(readyRead()),this,SLOT(dealReply()));
       socket->connectToHost("115.159.48.101",22656);
       QByteArray initData;
       initData.append(this->myName);
       initData.append("=");
       socket->write(initData);
    }
    if (this->studyWay=="学习")
    doStudy(courseID);
    else
    {
        doTest(courseID);
    }

}

void ThirdWindow::showWait()
{
    QString data = ui->datas->text();
    int index = data.indexOf('/');
    data = data.mid(index+1);
    finishFlag =true;
    if (data!="30")
    {
    FifthDialog *d = new FifthDialog(this->myName,this->mymoney);
    connect(this,SIGNAL(showResult(QString,int)),d,SLOT(showResult(QString,int)));
    d->exec();
    }
    else
    {
        int index;
        int flag;
        QString data = ui->datas->text();
        index = data.indexOf('/');
        data = data.mid(index+1);
        if (accept>data.toInt())
            flag=0;
        else
            flag=1;
        FifthDialog *d = new FifthDialog(this->myName,this->mymoney,this->pkname,flag);
        connect(this,SIGNAL(showResult(QString,int)),d,SLOT(showResult(QString,int)));
        d->exec();
    }


}

void ThirdWindow::dealReply()
{
    QByteArray data;
    data = socket->readAll();
    int index = data.indexOf("%");
    QString finished = data.left(index);
    QString accept = data.mid(index+1);
    ui->datas->setText(accept+'/'+finished);
    if (finished=="30")
    {
        this->pkfinishFlag = true;
        if (finishFlag==true)
        {
            int num;
            if (this->accept > accept.toInt())
                num=0;
            else
                num=1;
            emit showResult(this->pkname,num);
            this->close();
        }
    }
}

ThirdWindow::~ThirdWindow()
{
    delete wordPlayer;
    delete sentencePlayer;
    delete autoPlayer;
    delete pix[0];
    delete pix[1];
    delete pix[2];
    delete pix[3];
    delete ui;
}

void ThirdWindow::doStudy(int number)
{
    //调用sql生成题目

    MySql mySql;
    choose.clear();
    this->data = mySql.getOrderFile(number);
    for (int i=data[0][3].toInt(); i<=data[29][3].toInt();i++)
        choose += (mySql.getRandomFile(i));
    showObject(this->nowNumber);

}

void ThirdWindow::doTest(int number)
{
    //调用sql生成题目
    QVector< QVector<QString> > temp(30);
    QVector<int> seq(30);
    temp.resize(4);
    MySql mySql;
    choose.clear();
    seq = randomSeq();
    this->data =mySql.getOrderFile(number);
    temp = this->data;
    for (int i=0; i<=29; i++)
    {
        data[i] = temp[seq[i]];
    }
    for (int i=temp[0][3].toInt();i<=temp[29][3].toInt();i++)
        choose += mySql.getRandomFile(i);
    showObject(this->nowNumber);
}
void ThirdWindow::showObject(int number)
{
    //显示单词和图片
    this->no ++;
    QMediaPlaylist *mp3List;
    mp3List= new QMediaPlaylist();
    if (style==1)
    {
    mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));
    mp3List->addMedia(QUrl::fromLocalFile("sentenceaudios/"+data[number][0]+".mp3"));
    }
    else
    {
        mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));

    }
    autoPlayer->setPlaylist(mp3List);
    autoPlayer->play();
    ui->ahead->setText("当前单词:"+QString::number(this->no%30));
    ui->remain->setText("剩余单词:"+QString::number(30-(this->no%30)));
    if (this->no%30==0)
    {
    ui->ahead->setText("当前单词:30");
    ui->remain->setText("剩余单词:0");
    }
    if (this->studyWay=="学习")
 {
    if (no>30&&no<=60)
    {
        ui->lunci->setText("第二轮学习");
        ui->sentencemp3->hide();

    }
    if (no>60&&no<=90)
    {
        ui->lunci->setText("第三轮学习");
        ui->sentencemp3->hide();
    }
    if (no<=60)
    {
        ui->A_2->hide();
        ui->B_2->hide();
        ui->C_2->hide();
        ui->D_2->hide();
        for (int i=0; i<=3; i++)
            chinese[i]->hide();
    }
    else
    {
        ui->A_2->show();
        ui->B_2->show();
        ui->C_2->show();
        ui->D_2->show();
        for (int i=0; i<=3; i++)
            chinese[i]->show();
    }
    if (this->style == 2)
        ui->sentence->hide();
    if (this->style == 3)
    {
        ui->sentence->hide();
        ui->A->hide();
        ui->B->hide();
        ui->C->hide();
        ui->D->hide();
        for (int i=0; i<=3; i++)
            abcd[i]->hide();
    }
 }
 else
    {
        mp3List->clear();
        if (styleSeq[this->no-1]==0)
        {
        mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));
        mp3List->addMedia(QUrl::fromLocalFile("sentenceaudios/"+data[number][0]+".mp3"));
        }
        else
        {
            mp3List->addMedia(QUrl::fromLocalFile("wordaudios/"+data[number][0]+".mp3"));

        }
        autoPlayer->setPlaylist(mp3List);
        autoPlayer->play();
        if (this->studyWay=="测试")
        ui->lunci->setText("能力测试");
        else
        {
            ui->lunci->setText("对战中");
            ui->datas->show();
            ui->tap->show();
        }
        if(this->styleSeq[this->no-1]==0)
        {
            ui->A->show();
            ui->B->show();
            ui->C->show();
            ui->D->show();
            ui->a->show();
            ui->b->show();
            ui->c->show();
            ui->d->show();
            ui->sentence->show();
            ui->A_2->hide();
            ui->B_2->hide();
            ui->C_2->hide();
            ui->D_2->hide();
            ui->a_2->hide();
            ui->b_2->hide();
            ui->c_2->hide();
            ui->d_2->hide();
            ui->wordmp3->show();
            ui->sentencemp3->show();
        }
        else if (this->styleSeq[this->no-1]==1)
        {
            ui->A->show();
            ui->B->show();
            ui->C->show();
            ui->D->show();
            ui->a->show();
            ui->b->show();
            ui->c->show();
            ui->d->show();
            ui->sentence->hide();
            ui->A_2->hide();
            ui->B_2->hide();
            ui->C_2->hide();
            ui->D_2->hide();
            ui->a_2->hide();
            ui->b_2->hide();
            ui->c_2->hide();
            ui->d_2->hide();
            ui->wordmp3->show();
            ui->sentencemp3->hide();

        }
        else
        {
            ui->A->hide();
            ui->B->hide();
            ui->C->hide();
            ui->D->hide();
            ui->a->hide();
            ui->b->hide();
            ui->c->hide();
            ui->d->hide();
            ui->sentence->hide();
            ui->A_2->show();
            ui->B_2->show();
            ui->C_2->show();
            ui->D_2->show();
            ui->a_2->show();
            ui->b_2->show();
            ui->c_2->show();
            ui->d_2->show();
            ui->sentencemp3->hide();

        }


    }

    QVector<int> order;
    order.resize(4);
    ui->word->setText(data[number][0]);
    ui->sentence->setText(data[number][2]);
    ui->sentence->setReadOnly(true);
    pix[0]->load("wordimages/"+data[number][0]+".jpg");
    zhongwen[0] = data[number][1];
    for (int i=1;i<=3;i++)
    {
        pix[i]->load("wordimages/"+choose[3*number+i-1][0]+".jpg");
        zhongwen[i] = choose[3*number+i-1][1];
    }
    order = randomOrder();
    for (int i =0; i<=3; i++)
    {
        abcd[i]->setPixmap(*pix[order[i]]);
        chinese[i]->setText(zhongwen[order[i]]);
        if (0== order[i])
            rightAnswer = i;

    }

}

QVector<int> ThirdWindow::randomOrder()
{
    //调用随机函数生成4个选项顺序
    QVector<int> order;
    order.resize(4);
    bool flag[4] = {false};
    int i = 0;
    int j;
    while (i<4)
    {
        j = qrand()% 4;
        if (flag[j]==false)
        {
            flag[j] =true;
            order[i]=j;
            i++;
        }

    }
    return order;
}

bool ThirdWindow::eventFilter(QObject *target,QEvent *e)
{
    //判断答案是否正确
    QString str = "回答错误";
    for (int i=0; i<=3; i++)
    {
        if (abcd[i]==target&&e->type()==QEvent::MouseButtonPress)
            {
           // this->nowNumber++;
            //showObject(this->nowNumber);
            this->wordPlayer->stop();
            this->sentencePlayer->stop();
            this->autoPlayer->stop();
            this->hide();
            finished +=1;
            if (i==this->rightAnswer)
            {
                str = "回答正确";
                accept +=1;
            }
            if (this->studyWay=="挑战")
            {
            QByteArray datas;
            datas.append(this->pkname);
            datas.append("%");
            datas.append(QByteArray::number(this->finished));
            datas.append("%");
            datas.append(QByteArray::number(this->accept));
            socket->write(datas);
            }
            SecondDialog *d;
            d = new SecondDialog(this->no ,str,data[nowNumber][0],data[nowNumber][2],*pix[0],data[nowNumber][1],this->studyWay);
            connect(d,SIGNAL(nextTest()),this,SLOT(enterNext()));
            connect(d,SIGNAL(closeTo()),this,SLOT(closeTo()));
            connect(d,SIGNAL(showWait()),this,SLOT(showWait()));
            d->exec();

        return false;
        }
    }
    for (int i=0; i<=3; i++)
    {
        if (chinese[i]->viewport()==target&&e->type()==QEvent::MouseButtonPress)
        {
            finished +=1;
            this->hide();
            if (i==this->rightAnswer)
                {
                str = "回答正确";
                accept +=1;
                }
            if (this->studyWay=="挑战")
            {
            QByteArray datas;
            datas.append(this->pkname);
            datas.append("%");
            datas.append(QByteArray::number(this->finished));
            datas.append("%");
            datas.append(QByteArray::number(this->accept));
            socket->write(datas);
            }
            SecondDialog *d;
            d = new SecondDialog(this->no ,str,data[nowNumber][0],data[nowNumber][2],*pix[0],data[nowNumber][1],this->studyWay);
            connect(d,SIGNAL(nextTest()),this,SLOT(enterNext()));
            connect(d,SIGNAL(closeTo()),this, SLOT(closeTo()));
            connect(d,SIGNAL(showWait()),this,SLOT(showWait()));
            d->exec();

        return false;
        }
    }
    return false;
}

void ThirdWindow::enterNext()
{
    //进入下一题
    if (this->nowNumber<29)
    {
    this->show();
    this->nowNumber ++;
    this->showObject(this->nowNumber);
    }
    else
    {
        style ++;
        this->nowNumber = 0;
        this->doTest(this->ID);
        this->show();
    }
}

void ThirdWindow::on_wordmp3_clicked()
{
    //点击按钮播放单词
    QUrl wordurl = QUrl::fromLocalFile("wordaudios/"+data[nowNumber][0]+".mp3");
    wordPlayer->setMedia(wordurl);
    wordPlayer->play();
}

void ThirdWindow::on_sentencemp3_clicked()
{
    //点击按钮播放句子
    QUrl sentenceurl =QUrl::fromLocalFile("sentenceaudios/"+data[nowNumber][0]+".mp3");
    sentencePlayer->setMedia(sentenceurl);
    sentencePlayer->play();
}


void ThirdWindow::on_pushButton_clicked()
{
    //退出当前课程，进入课程选择列表
    this->autoPlayer->stop();
    this->wordPlayer->stop();
    this->sentencePlayer->stop();
    this->destroyed();
    this->close();
}

QVector<int> ThirdWindow::randomSeq()
{
    //调用随机函数生成长度30序列
    QVector<int> order;
    order.resize(30);
    bool flag[30] = {false};
    int i = 0;
    int j;
    while (i<30)
    {
        j = qrand()% 30;
        if (flag[j]==false)
        {
            flag[j] =true;
            order[i]=j;
            i++;
        }

    }
    return order;
}

void ThirdWindow::closeTo()
{
    this->autoPlayer->stop();
    this->wordPlayer->stop();
    this->sentencePlayer->stop();
    this->destroyed();
    this->close();
}
QVector<int> ThirdWindow::randomStyle()
{
    QVector<int> order;
    //调用随机函数生成长度30的学习方式用于测试
    order.resize(30);
    int i=0;
    int j;
    while (i<30)
        {
        j = qrand() % 3;
        order[i] = j;
       i++;
    }
    return order;
}

>>>>>>> final version
