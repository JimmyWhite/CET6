<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "thirddialog.h"
#include "ui_thirddialog.h"

ThirdDialog::ThirdDialog(QString pkName, QString courseId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);

    //显示内容初始化
    ui->label->setText(pkName);
    ui->label_2->setText("第"+courseId+"课");
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignCenter);

    ui->pushButton->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "border-image: url(:/main/images/biankuang_07.png);"
                              "color:black;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}

void ThirdDialog::on_pushButton_clicked()
{
    this->close();

}
=======
#include "thirddialog.h"
#include "ui_thirddialog.h"
ThirdDialog::ThirdDialog(QString pkName, QString courseId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
    //窗体样式设计
    this->setWindowFlags(Qt::FramelessWindowHint);

    //显示内容初始化
    ui->label->setText(pkName+"向你发起挑战!");
    ui->label_2->setText("第"+courseId+"课");
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignCenter);
    this->name = pkName;
    this->id =courseId;

    ui->pushButton->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "border-image: url(:/main/images/biankuang_07.png);"
                              "color:black;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}

void ThirdDialog::on_pushButton_clicked()
{
    emit agreePK(this->name,this->id);
    this->close();
}
>>>>>>> final version
