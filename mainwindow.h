<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <myclient.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MyClient *myClient;   //发送数据使用的SOCKET

private slots:
    void on_register_2_clicked();

    void on_register_3_clicked();

    void on_plus_clicked();

    void on_twocode_clicked();

    void on_close_clicked();

    void on_loginin_clicked();
public slots:

    void dealReply(QString reply);   //处理从服务器返回的数据

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
=======
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <myclient.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MyClient *myClient;   //发送数据使用的SOCKET

private slots:
    void on_register_2_clicked();

    void on_register_3_clicked();

    void on_plus_clicked();

    void on_twocode_clicked();

    void on_close_clicked();

    void on_loginin_clicked();
public slots:

    void dealReply(QString reply);   //处理从服务器返回的数据

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
>>>>>>> final version
