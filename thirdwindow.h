<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>
#include <qpixmap.h>
#include <mysql.h>
#include <qvector.h>
#include <qlabel.h>
#include <qtextedit.h>
#include <QTime>
#include <qmediaplayer.h>
namespace Ui {
class ThirdWindow;
}

class ThirdWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThirdWindow(int courseID, QString way,QWidget *parent = 0);
    ~ThirdWindow();
    QPixmap *pix[4]; //四张图片
    QString zhongwen[4]; //四个中文
    int ID;  //课程编号
    QString studyWay;  //学习方式
    void doStudy(int number);  //生成学习题目
    void doTest(int number);   //生成测试题目
    MySql mySql;  //数据库操作实例
    QVector<QVector<QString> > data;  //30道题目
    QVector<QVector<QString> > choose; // 90个选择
    void showObject(int number);  //显示题目
    QLabel *abcd[4];   //四个图片标签
    QTextEdit *chinese[4]; //四个中文答案
    QVector<int> randomOrder();  //4个选项随机顺序
    QVector<int> randomSeq();  //长度30的随机序列
    QVector<int> randomStyle();  //长度30的学习轮次
    bool eventFilter(QObject *target,QEvent *e);  //事件过滤器的处理
    int nowNumber;  //当前题目编号
    int rightAnswer;  //正确答案
    int style;  //学习方式
    int no; //编号
    QVector<int>  styleSeq;
    QMediaPlayer *wordPlayer;   //播放单词mp3
    QMediaPlayer *sentencePlayer; //播放句子mp3
    QMediaPlayer *autoPlayer;  //自动播放
private slots:
    void enterNext();  //处理下一题的消息
    void on_wordmp3_clicked();   //播放单词

    void on_sentencemp3_clicked();  //播放句子

    void on_pushButton_clicked();  //退出

private:
    Ui::ThirdWindow *ui;
};

#endif // THIRDWINDOW_H
=======
#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>
#include <qpixmap.h>
#include <mysql.h>
#include <qvector.h>
#include <qlabel.h>
#include <qtextedit.h>
#include <QTime>
#include <qmediaplayer.h>
#include <qtcpsocket.h>
namespace Ui {
class ThirdWindow;
}

class ThirdWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThirdWindow(int courseID, QString way,QString money,QString myName="",QString pkName="",QWidget *parent = 0);
    ~ThirdWindow();
    QString mymoney;
    bool finishFlag; //完成标记
    bool pkfinishFlag; //对手完成标记
    QString pkname; //对手名字
    QString myName;  //我的名字
    QPixmap *pix[4]; //四张图片
    QString zhongwen[4]; //四个中文
    int ID;  //课程编号
    QString studyWay;  //学习方式
    void doStudy(int number);  //生成学习题目
    void doTest(int number);   //生成测试题目
    MySql mySql;  //数据库操作实例
    QVector<QVector<QString> > data;  //30道题目
    QVector<QVector<QString> > choose; // 90个选择
    void showObject(int number);  //显示题目
    QLabel *abcd[4];   //四个图片标签
    QTextEdit *chinese[4]; //四个中文答案
    QVector<int> randomOrder();  //4个选项随机顺序
    QVector<int> randomSeq();  //长度30的随机序列
    QVector<int> randomStyle();  //长度30的学习轮次
    bool eventFilter(QObject *target,QEvent *e);  //事件过滤器的处理
    int nowNumber;  //当前题目编号
    int rightAnswer;  //正确答案
    int style;  //学习方式
    int no; //编号
    QVector<int>  styleSeq;
    QMediaPlayer *wordPlayer;   //播放单词mp3
    QMediaPlayer *sentencePlayer; //播放句子mp3
    QMediaPlayer *autoPlayer;  //自动播放
    QTcpSocket *socket; // 通信SOCKET
    int finished;  //已完成
    int accept;   // 以正确
private slots:
    void showWait();
    void dealReply();
    void enterNext();  //处理下一题的消息
    void on_wordmp3_clicked();   //播放单词

    void on_sentencemp3_clicked();  //播放句子

    void on_pushButton_clicked();  //退出
    void closeTo();

signals:
    void showResult(QString name,int flag);
private:
    Ui::ThirdWindow *ui;
};

#endif // THIRDWINDOW_H
>>>>>>> final version
