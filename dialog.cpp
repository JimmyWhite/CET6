<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent, QString text) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);

    //显示内容初始化
    ui->label->setText(text);
    ui->label->setAlignment(Qt::AlignCenter);

    ui->pushButton->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "color:white;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
}
=======
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent, QString text) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);

    //显示内容初始化
    ui->label->setText(text);
    ui->label->setAlignment(Qt::AlignCenter);

    ui->pushButton->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "color:white;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
}
>>>>>>> final version
