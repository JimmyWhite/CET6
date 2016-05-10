<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "qdebug.h"
#include "thirdwindow.h"
#include "fourthwindow.h"
SecondWindow::SecondWindow(QString chinesename, QString money, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(600,600);

    //控件样式设计
    ui->chinesename->setAlignment(Qt::AlignCenter);
    ui->money->setAlignment(Qt::AlignCenter);
    ui->finish->setAlignment(Qt::AlignCenter);
    ui->close->setCursor(Qt::PointingHandCursor);
    ui->pk->setCursor(Qt::PointingHandCursor);


    //书本按钮控件组初始化
    for (int i =0; i<=24; i++)
    {
        book[i] = new QPushButton();
    }
    book[0] = ui->book;
    book[1] = ui->book_2;
    book[2] = ui->book_3;
    book[3] = ui->book_4;
    book[4] = ui->book_5;
    book[5] = ui->book_6;
    book[6] = ui->book_7;
    book[7] = ui->book_8;
    book[8] = ui->book_9;
    book[9] = ui->book_10;
    book[10] = ui->book_11;
    book[11] = ui->book_12;
    book[12] = ui->book_13;
    book[13] = ui->book_14;
    book[14] = ui->book_15;
    book[15] = ui->book_16;
    book[16] = ui->book_17;
    book[17] = ui->book_18;
    book[18] = ui->book_19;
    book[19] = ui->book_20;
    book[20] = ui->book_21;
    book[21] = ui->book_22;
    book[22] = ui->book_23;
    book[23] = ui->book_24;
    book[24] = ui->book_25;
    for (int i=0; i<=24; i++)
    {
        book[i]->setCursor(Qt::PointingHandCursor);
        book[i]->installEventFilter(this);  //对控件进行监视
    }

    ui->left->setCursor(Qt::PointingHandCursor);
    ui->right->setCursor(Qt::PointingHandCursor);
    ui->money->setText(money);
    ui->chinesename->setText(chinesename);

    //选择按钮初始化
    for (int i=0; i<=49; i++)
        {
        choose[i]= new QPushButton();
    }
    choose[0]= ui->choose;
    choose[1]= ui->choose_2;
    choose[2]= ui->choose_3;
    choose[3]= ui->choose_4;
    choose[4]= ui->choose_5;
    choose[5]= ui->choose_6;
    choose[6]= ui->choose_7;
    choose[7]= ui->choose_8;
    choose[8]= ui->choose_9;
    choose[9]= ui->choose_10;
    choose[10]= ui->choose_11;
    choose[11]= ui->choose_12;
    choose[12]= ui->choose_13;
    choose[13]= ui->choose_14;
    choose[14]= ui->choose_15;
    choose[15]= ui->choose_16;
    choose[16]= ui->choose_17;
    choose[17]= ui->choose_18;
    choose[18]= ui->choose_19;
    choose[19]= ui->choose_20;
    choose[20]= ui->choose_21;
    choose[21]= ui->choose_22;
    choose[22]= ui->choose_23;
    choose[23]= ui->choose_24;
    choose[24]= ui->choose_25;
    choose[25]= ui->choose_26;
    choose[26]= ui->choose_27;
    choose[27]= ui->choose_28;
    choose[28]= ui->choose_29;
    choose[29]= ui->choose_30;
    choose[30]= ui->choose_31;
    choose[31]= ui->choose_32;
    choose[32]= ui->choose_33;
    choose[33]= ui->choose_34;
    choose[34]= ui->choose_35;
    choose[35]= ui->choose_36;
    choose[36]= ui->choose_37;
    choose[37]= ui->choose_38;
    choose[38]= ui->choose_39;
    choose[39]= ui->choose_40;
    choose[40]= ui->choose_41;
    choose[41]= ui->choose_42;
    choose[42]= ui->choose_43;
    choose[43]= ui->choose_44;
    choose[44]= ui->choose_45;
    choose[45]= ui->choose_46;
    choose[46]= ui->choose_47;
    choose[47]= ui->choose_48;
    choose[48]= ui->choose_49;
    choose[49]= ui->choose_50;
    for (int i=0; i<=49; i++)
    {
        choose[i]->hide();
        choose[i]->setCursor(Qt::PointingHandCursor);
        choose[i]->installEventFilter(this);  //对控件进行监视
    }
    ui->pk->installEventFilter(this);

}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_left_clicked()
{
    //实现向左翻页功能，判断当前页数及下一页数
    for (int i=0; i<=49; i++)
        choose[i]->hide();
    if (book[0]->text()=="1")
    {

    }
    else if (book[0]->text()=="26")
    {
        for (int i =0; i<=24; i++)
        {
              book[i]->setText(QString::number(i+1));
        }
    }
    else if (book[0]->text()=="51")
    {
        for (int i=0; i<=24; i++)
        {
            book[i]->setText(QString::number(i+26));
        }
    }
    else if (book[0]->text()=="76")
    {
        for (int i=0; i<=24; i++)
        {
        book[i]->setText(QString::number(i+51));
        }
    }

}

void SecondWindow::on_right_clicked()
{
    //实现向右翻页功能，判断当前页数及下一页数

    for (int i=0; i<=49; i++)
        choose[i]->hide();
    if (book[0]->text()=="1")
    {
        for (int i=0; i<=24; i++)
        {

            book[i]->setText(QString::number(i+26));
        }

    }
    else if (book[0]->text()=="26")
    {
        for (int i=0;i<=24;i++)
        {
            book[i]->setText(QString::number(i+51));
        }

    }
    else if (book[0]->text()=="51")
    {
        for (int i=0;i<=24;i++)
        {
            book[i]->setText(QString::number(i+76));
        }
    }

}

bool SecondWindow::eventFilter(QObject *target,QEvent *e)
{
    //判断鼠标是否移动到监视控件，进行相应的操作
    for (int i=0; i<=49;i++)
    {
        if(target==choose[i]&&e->type()==QEvent::MouseButtonPress)
        {
            ThirdWindow *w = new ThirdWindow(book[i/2]->text().toInt(),choose[i]->text());
            connect(w,SIGNAL(destroyed()),this,SLOT(anginShow()));
            this->hide();
            w->show();
        }
    }

    for (int i=0; i<=24;i++)
    {
        if (target==book[i]&&e->type()==QEvent::Enter)
        {
            choose[i*2]->show();
            choose[i*2+1]->show();
            for (int j=0; j<=24; j++)
            {
                if (j!=i&&choose[j*2]->isVisible()==true)
                {
                    choose[j*2]->hide();
                    choose[j*2+1]->hide();
                }
            }
            return false;
        }

    }
    if (target==ui->pk&&e->type()==QEvent::Enter)
    {
        for (int j=0; j<=24; j++)
        {
            if (choose[j*2]->isVisible()==true)
            {
                choose[j*2]->hide();
                choose[j*2+1]->hide();
            }
        }

    }

    return false;
}

void SecondWindow::on_close_clicked()
{
    this->close();
}

void SecondWindow::anginShow()
{
    this->show();
}

void SecondWindow::on_pk_clicked()
{
    this->hide();
    FourthWindow *w = new FourthWindow(ui->chinesename->text(),ui->money->text());
    w->show();
}
=======
#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "qdebug.h"
#include "thirdwindow.h"
#include "fourthwindow.h"
SecondWindow::SecondWindow(QString chinesename, QString money, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(600,600);
    this->mymoney =money;

    //控件样式设计
    ui->chinesename->setAlignment(Qt::AlignCenter);
    ui->money->setAlignment(Qt::AlignCenter);
    ui->finish->setAlignment(Qt::AlignCenter);
    ui->close->setCursor(Qt::PointingHandCursor);
    ui->pk->setCursor(Qt::PointingHandCursor);


    //书本按钮控件组初始化
    for (int i =0; i<=24; i++)
    {
        book[i] = new QPushButton();
    }
    book[0] = ui->book;
    book[1] = ui->book_2;
    book[2] = ui->book_3;
    book[3] = ui->book_4;
    book[4] = ui->book_5;
    book[5] = ui->book_6;
    book[6] = ui->book_7;
    book[7] = ui->book_8;
    book[8] = ui->book_9;
    book[9] = ui->book_10;
    book[10] = ui->book_11;
    book[11] = ui->book_12;
    book[12] = ui->book_13;
    book[13] = ui->book_14;
    book[14] = ui->book_15;
    book[15] = ui->book_16;
    book[16] = ui->book_17;
    book[17] = ui->book_18;
    book[18] = ui->book_19;
    book[19] = ui->book_20;
    book[20] = ui->book_21;
    book[21] = ui->book_22;
    book[22] = ui->book_23;
    book[23] = ui->book_24;
    book[24] = ui->book_25;
    for (int i=0; i<=24; i++)
    {
        book[i]->setCursor(Qt::PointingHandCursor);
        book[i]->installEventFilter(this);  //对控件进行监视
    }

    ui->left->setCursor(Qt::PointingHandCursor);
    ui->right->setCursor(Qt::PointingHandCursor);
    ui->money->setText(money);
    ui->chinesename->setText(chinesename);

    //选择按钮初始化
    for (int i=0; i<=49; i++)
        {
        choose[i]= new QPushButton();
    }
    choose[0]= ui->choose;
    choose[1]= ui->choose_2;
    choose[2]= ui->choose_3;
    choose[3]= ui->choose_4;
    choose[4]= ui->choose_5;
    choose[5]= ui->choose_6;
    choose[6]= ui->choose_7;
    choose[7]= ui->choose_8;
    choose[8]= ui->choose_9;
    choose[9]= ui->choose_10;
    choose[10]= ui->choose_11;
    choose[11]= ui->choose_12;
    choose[12]= ui->choose_13;
    choose[13]= ui->choose_14;
    choose[14]= ui->choose_15;
    choose[15]= ui->choose_16;
    choose[16]= ui->choose_17;
    choose[17]= ui->choose_18;
    choose[18]= ui->choose_19;
    choose[19]= ui->choose_20;
    choose[20]= ui->choose_21;
    choose[21]= ui->choose_22;
    choose[22]= ui->choose_23;
    choose[23]= ui->choose_24;
    choose[24]= ui->choose_25;
    choose[25]= ui->choose_26;
    choose[26]= ui->choose_27;
    choose[27]= ui->choose_28;
    choose[28]= ui->choose_29;
    choose[29]= ui->choose_30;
    choose[30]= ui->choose_31;
    choose[31]= ui->choose_32;
    choose[32]= ui->choose_33;
    choose[33]= ui->choose_34;
    choose[34]= ui->choose_35;
    choose[35]= ui->choose_36;
    choose[36]= ui->choose_37;
    choose[37]= ui->choose_38;
    choose[38]= ui->choose_39;
    choose[39]= ui->choose_40;
    choose[40]= ui->choose_41;
    choose[41]= ui->choose_42;
    choose[42]= ui->choose_43;
    choose[43]= ui->choose_44;
    choose[44]= ui->choose_45;
    choose[45]= ui->choose_46;
    choose[46]= ui->choose_47;
    choose[47]= ui->choose_48;
    choose[48]= ui->choose_49;
    choose[49]= ui->choose_50;
    for (int i=0; i<=49; i++)
    {
        choose[i]->hide();
        choose[i]->setCursor(Qt::PointingHandCursor);
        choose[i]->installEventFilter(this);  //对控件进行监视
    }
    ui->pk->installEventFilter(this);

}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_left_clicked()
{
    //实现向左翻页功能，判断当前页数及下一页数
    for (int i=0; i<=49; i++)
        choose[i]->hide();
    if (book[0]->text()=="1")
    {

    }
    else if (book[0]->text()=="26")
    {
        for (int i =0; i<=24; i++)
        {
              book[i]->setText(QString::number(i+1));
        }
    }
    else if (book[0]->text()=="51")
    {
        for (int i=0; i<=24; i++)
        {
            book[i]->setText(QString::number(i+26));
        }
    }
    else if (book[0]->text()=="76")
    {
        for (int i=0; i<=24; i++)
        {
        book[i]->setText(QString::number(i+51));
        }
    }

}

void SecondWindow::on_right_clicked()
{
    //实现向右翻页功能，判断当前页数及下一页数

    for (int i=0; i<=49; i++)
        choose[i]->hide();
    if (book[0]->text()=="1")
    {
        for (int i=0; i<=24; i++)
        {

            book[i]->setText(QString::number(i+26));
        }

    }
    else if (book[0]->text()=="26")
    {
        for (int i=0;i<=24;i++)
        {
            book[i]->setText(QString::number(i+51));
        }

    }
    else if (book[0]->text()=="51")
    {
        for (int i=0;i<=24;i++)
        {
            book[i]->setText(QString::number(i+76));
        }
    }

}

bool SecondWindow::eventFilter(QObject *target,QEvent *e)
{
    //判断鼠标是否移动到监视控件，进行相应的操作
    for (int i=0; i<=49;i++)
    {
        if(target==choose[i]&&e->type()==QEvent::MouseButtonPress)
        {
            ThirdWindow *w = new ThirdWindow(book[i/2]->text().toInt(),choose[i]->text(),this->mymoney);
            connect(w,SIGNAL(destroyed()),this,SLOT(anginShow()));
            this->hide();
            w->show();
        }
    }

    for (int i=0; i<=24;i++)
    {
        if (target==book[i]&&e->type()==QEvent::Enter)
        {
            choose[i*2]->show();
            choose[i*2+1]->show();
            for (int j=0; j<=24; j++)
            {
                if (j!=i&&choose[j*2]->isVisible()==true)
                {
                    choose[j*2]->hide();
                    choose[j*2+1]->hide();
                }
            }
            return false;
        }

    }
    if (target==ui->pk&&e->type()==QEvent::Enter)
    {
        for (int j=0; j<=24; j++)
        {
            if (choose[j*2]->isVisible()==true)
            {
                choose[j*2]->hide();
                choose[j*2+1]->hide();
            }
        }

    }

    return false;
}

void SecondWindow::on_close_clicked()
{
    this->close();
}

void SecondWindow::anginShow()
{
    this->show();
}

void SecondWindow::on_pk_clicked()
{
    this->close();
    FourthWindow *w = new FourthWindow(ui->chinesename->text(),ui->money->text());
    w->show();
}
>>>>>>> final version
