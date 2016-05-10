<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <myclient.h>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QString chinesename, QString money, QWidget *parent = 0);
    ~SecondWindow();
    QPushButton *book[25]; //课程按钮
    QPushButton *choose[50]; //方式按钮
    bool eventFilter(QObject *target,QEvent *e);  //事件过滤器的处理

private slots:
    void on_left_clicked();   //左翻页按钮
    void on_right_clicked();  //右翻页按钮
    void on_close_clicked();  //关闭当前窗口
    void anginShow();  //再次显示

    void on_pk_clicked();

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
=======
#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <myclient.h>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QString chinesename, QString money, QWidget *parent = 0);
    ~SecondWindow();
    QPushButton *book[25]; //课程按钮
    QPushButton *choose[50]; //方式按钮
    bool eventFilter(QObject *target,QEvent *e);  //事件过滤器的处理
    QString mymoney;

private slots:
    void on_left_clicked();   //左翻页按钮
    void on_right_clicked();  //右翻页按钮
    void on_close_clicked();  //关闭当前窗口
    void anginShow();  //再次显示

    void on_pk_clicked();

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
>>>>>>> final version
