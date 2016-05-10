<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "fourthdialog.h"
#include "ui_fourthdialog.h"
#include "qmovie.h"
FourthDialog::FourthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FourthDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->pushButton->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "border-image: url(:/main/images/biankuang_07.png);"
                              "color:black;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );
    ui->label_3->hide();
    ui->label_4->hide();
    ui->flash->hide();
    for (int i=1; i<=100; i++)
        ui->comboBox->addItem(QString::number(i));
}

FourthDialog::~FourthDialog()
{
    delete ui;
}

void FourthDialog::on_pushButton_clicked()
{
    emit selectCourse(ui->comboBox->currentText());
    QMovie *banner_movie = new QMovie(":/main/images/loading.gif");
    ui->label_3->show();
    ui->label_4->show();
    ui->flash->setMovie(banner_movie);
    banner_movie->start();
    ui->flash->show();
    ui->label->hide();
    ui->comboBox->hide();
    ui->pushButton->hide();
}
=======
#include "fourthdialog.h"
#include "ui_fourthdialog.h"
#include "qmovie.h"
FourthDialog::FourthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FourthDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->pushButton->setStyleSheet("QPushButton{background-image:url(:/login/images/button_login_normal.png);"
                              "border-image: url(:/main/images/biankuang_07.png);"
                              "color:black;"
                              "border-radius:5px;}"
                              "QPushButton:hover{background-image:url(:/login/images/button_login_hover.png);}"
                               );
    ui->label_3->hide();
    ui->label_4->hide();
    ui->flash->hide();
    for (int i=1; i<=100; i++)
        ui->comboBox->addItem(QString::number(i));
}

FourthDialog::~FourthDialog()
{
    delete ui;
}

void FourthDialog::closeTo()
{
    this->close();
}

void FourthDialog::on_pushButton_clicked()
{
    emit selectCourse(ui->comboBox->currentText());
    QMovie *banner_movie = new QMovie(":/main/images/loading.gif");
    ui->label_3->show();
    ui->label_4->show();
    ui->flash->setMovie(banner_movie);
    banner_movie->start();
    ui->flash->show();
    ui->label->hide();
    ui->comboBox->hide();
    ui->pushButton->hide();
}
>>>>>>> final version
