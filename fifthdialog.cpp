#include "fifthdialog.h"
#include "ui_fifthdialog.h"
#include "qmovie.h"
#include "secondwindow.h"

FifthDialog::FifthDialog(QString name, QString money, QString pkname, int flag, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FifthDialog)
{
    ui->setupUi(this);
    mymoney = money;
    myname =name;
    ui->pushButton->setCursor(Qt::PointingHandCursor);
    ui->tap1->hide();
    ui->tap2->hide();
    ui->pushButton->hide();
    ui->tap1->setAlignment(Qt::AlignCenter);
    ui->tap2->setAlignment(Qt::AlignCenter);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QMovie *banner_movie = new QMovie(":/main/images/loading.gif");
    ui->flash->setMovie(banner_movie);
    banner_movie->start();
    if(pkname!="")
    {
        ui->label->hide();
        ui->label_2->hide();
        ui->flash->hide();
        ui->tap1->show();
        ui->tap2->show();
        ui->pushButton->show();
        if (flag==0)
        {
            ui->tap1->setText("你打败了"+pkname);
            ui->tap2->setText("获得10金币");
        }
        else
        {
            ui->tap1->setText("你被"+pkname+"打败了");
            ui->tap2->setText("失去10金币");
        }

    }
}
void FifthDialog::showResult(QString name, int flag)
{
    ui->label->hide();
    ui->label_2->hide();
    ui->flash->hide();
    ui->tap1->show();
    ui->tap2->show();
    ui->pushButton->show();
    if (flag==0)
    {
        ui->tap1->setText("你打败了"+name);
        ui->tap2->setText("获得10金币");
    }
    else
    {
        ui->tap1->setText("你被"+name+"打败了");
        ui->tap2->setText("失去10金币");
    }
}
FifthDialog::~FifthDialog()
{
    delete ui;
}

void FifthDialog::on_pushButton_clicked()
{
    SecondWindow *w;
    w = new SecondWindow(this->myname,this->mymoney);
    w->show();
    this->close();
}
