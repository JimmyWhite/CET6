<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>
#include <qpixmap.h>

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(int no, QString title, QString word,QString sentence,QPixmap pix,QString chinese,QWidget *parent = 0);
    ~SecondDialog();

private slots:
    void on_next_clicked();
signals:
    void nextTest(); //发送进入下一题信号
private:
    Ui::SecondDialog *ui;
};

#endif // SECONDDIALOG_H
=======
#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>
#include <qpixmap.h>

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(int no, QString title, QString word,QString sentence,QPixmap pix,QString chinese,QString way,QWidget *parent = 0);
    ~SecondDialog();
    int number;
    QString way;

private slots:
    void on_next_clicked();
signals:
    void nextTest(); //发送进入下一题信号
    void closeTo();
    void showWait();
private:
    Ui::SecondDialog *ui;
};

#endif // SECONDDIALOG_H
>>>>>>> final version
