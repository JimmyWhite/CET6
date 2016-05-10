<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "seconddialog.h"
#include "ui_seconddialog.h"
#include "qpalette.h"
SecondDialog::SecondDialog(int no, QString title,QString word, QString sentence,QPixmap pix,QString chinese,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
    ui->setupUi(this);
    //窗体样式设计,参数初始化
    ui->chinese->setAttribute(Qt::WA_TranslucentBackground, true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->title->setText(title);
    ui->title->setAlignment(Qt::AlignCenter);
    ui->word->setText(word);
    ui->word->setAlignment(Qt::AlignCenter);
    ui->sentence->setText(sentence);
    ui->sentence->setReadOnly(true);
    ui->chinese->setText(chinese);
    ui->chinese->setReadOnly(true);
    ui->photo->setPixmap(pix);
    ui->photo->setScaledContents(true);
    ui->next->setCursor(Qt::PointingHandCursor);
    if (title!="回答正确")
        ui->title->setStyleSheet("background-image: url(:/main/images/fm_ormal_bg.png);"
                                 "font: 20pt '微软雅黑';"
                                 "color: rgb(255, 0, 0);"
                                 "border-image:url(:/main/images/fm_ormal_bg.png);");
    else
        ui->title->setStyleSheet("background-image: url(:/main/images/fm_ormal_bg.png);"
                                 "font: 20pt '微软雅黑';"
                                 "color: rgb(0, 0, 0);"
                                 "border-image:url(:/main/images/fm_ormal_bg.png);");
    if (no == 30)
    {
        ui->next->setText("第二轮学习");
    }
    if (no == 60)
    {
        ui->next->setText("第三轮学习");
    }
}

SecondDialog::~SecondDialog()
{
    delete ui;
}

void SecondDialog::on_next_clicked()
{
    //发送信号
    emit nextTest();
    this->close();
}
=======
#include "seconddialog.h"
#include "ui_seconddialog.h"
#include "qpalette.h"
#include "qdebug.h"
SecondDialog::SecondDialog(int no, QString title, QString word, QString sentence, QPixmap pix, QString chinese, QString way, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
    ui->setupUi(this);
    //窗体样式设计,参数初始化
    this->number = no;
    this->way =way;
    ui->chinese->setAttribute(Qt::WA_TranslucentBackground, true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->title->setText(title);
    ui->title->setAlignment(Qt::AlignCenter);
    ui->word->setText(word);
    ui->word->setAlignment(Qt::AlignCenter);
    ui->sentence->setText(sentence);
    ui->sentence->setReadOnly(true);
    ui->chinese->setText(chinese);
    ui->chinese->setReadOnly(true);
    ui->photo->setPixmap(pix);
    ui->photo->setScaledContents(true);
    ui->next->setCursor(Qt::PointingHandCursor);
    if (title!="回答正确")
        ui->title->setStyleSheet("background-image: url(:/main/images/fm_ormal_bg.png);"
                                 "font: 20pt '微软雅黑';"
                                 "color: rgb(255, 0, 0);"
                                 "border-image:url(:/main/images/fm_ormal_bg.png);");
    else
        ui->title->setStyleSheet("background-image: url(:/main/images/fm_ormal_bg.png);"
                                 "font: 20pt '微软雅黑';"
                                 "color: rgb(0, 0, 0);"
                                 "border-image:url(:/main/images/fm_ormal_bg.png);");
    if (no == 30)
    {
        ui->next->setText("第二轮学习");
    }
    if (no == 30 && way=="测试")
    {
        ui->next->setText("返回课程");
    }
    if (no == 60)
    {
        ui->next->setText("第三轮学习");
    }
    if (no==90)
        ui->next->setText("返回课程");
    if (this->way=="挑战"&&no==30)
        ui->next->setText("查看结果");
}

SecondDialog::~SecondDialog()
{
    delete ui;
}

void SecondDialog::on_next_clicked()
{
    //发送信号
    if(this->way=="挑战"&&this->number==30)
    {
        this->close();
        emit showWait();
        return;
    }

    if (this->way=="测试"&&this->number==30)
    {
        emit closeTo();
        this->close();
        return;
    }
    if (this->number!=90)
    emit nextTest();
    else
        emit closeTo();
    this->close();
}
>>>>>>> final version
