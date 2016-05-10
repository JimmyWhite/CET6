<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef FOURTHWINDOW_H
#define FOURTHWINDOW_H
#include <mysocket.h>
#include <QMainWindow>
#include <qlabel.h>
#include <qpushbutton.h>
namespace Ui {
class FourthWindow;
}

class FourthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FourthWindow(QString _name, QString _money, QWidget *parent = 0);
    ~FourthWindow();
    MySocket *mySocket;
    QLabel *name[5];  //显示姓名
    QLabel *money[5]; //显示金币
    QPushButton *pk[5]; //显示按钮
    QString which; // 选择姓名


private:
    Ui::FourthWindow *ui;
public slots:
    void dealReply(QString data);
private slots:
    void on_refresh_clicked();
    void on_close_clicked();
    void on_pk_clicked();
    void selectCourse(QString courseID);
    void on_pk_2_clicked();
    void on_pk_3_clicked();
    void on_pk_4_clicked();
    void on_pk_5_clicked();
};

#endif // FOURTHWINDOW_H
=======
#ifndef FOURTHWINDOW_H
#define FOURTHWINDOW_H
#include <mysocket.h>
#include <QMainWindow>
#include <qlabel.h>
#include <qpushbutton.h>
namespace Ui {
class FourthWindow;
}

class FourthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FourthWindow(QString _name, QString _money, QWidget *parent = 0);
    ~FourthWindow();
    MySocket *mySocket;
    QString myName; //我的名字
    QLabel *name[5];  //显示姓名
    QLabel *money[5]; //显示金币
    QPushButton *pk[5]; //显示按钮
    QString which; // 选择姓名
    QString mymoney;


private:
    Ui::FourthWindow *ui;
signals:
    void closeTo();
public slots:
    void dealReply(QString data);
    void agreePK(QString pkName, QString courseID);
private slots:
    void on_refresh_clicked();
    void on_close_clicked();
    void on_pk_clicked();
    void selectCourse(QString courseID);
    void on_pk_2_clicked();
    void on_pk_3_clicked();
    void on_pk_4_clicked();
    void on_pk_5_clicked();
};

#endif // FOURTHWINDOW_H
>>>>>>> final version
