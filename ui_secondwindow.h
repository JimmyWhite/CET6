/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *centralwidget;
    QLabel *biankuang;
    QLabel *headshow;
    QLabel *chinesename;
    QLabel *money;
    QLabel *finish;
    QLabel *biankuang2;
    QPushButton *book;
    QPushButton *left;
    QPushButton *right;
    QPushButton *book_2;
    QPushButton *book_3;
    QPushButton *book_4;
    QPushButton *book_5;
    QPushButton *book_6;
    QPushButton *book_7;
    QPushButton *book_8;
    QPushButton *book_9;
    QPushButton *book_10;
    QPushButton *book_11;
    QPushButton *book_12;
    QPushButton *book_13;
    QPushButton *book_14;
    QPushButton *book_15;
    QPushButton *book_16;
    QPushButton *book_17;
    QPushButton *book_18;
    QPushButton *book_19;
    QPushButton *book_20;
    QPushButton *book_21;
    QPushButton *book_22;
    QPushButton *book_23;
    QPushButton *book_24;
    QPushButton *book_25;
    QPushButton *choose;
    QPushButton *choose_2;
    QPushButton *choose_3;
    QPushButton *choose_4;
    QPushButton *choose_5;
    QPushButton *choose_6;
    QPushButton *choose_7;
    QPushButton *choose_8;
    QPushButton *choose_9;
    QPushButton *choose_10;
    QPushButton *choose_11;
    QPushButton *choose_12;
    QPushButton *choose_13;
    QPushButton *choose_14;
    QPushButton *choose_15;
    QPushButton *choose_16;
    QPushButton *choose_17;
    QPushButton *choose_18;
    QPushButton *choose_19;
    QPushButton *choose_20;
    QPushButton *choose_21;
    QPushButton *choose_22;
    QPushButton *choose_23;
    QPushButton *choose_24;
    QPushButton *choose_25;
    QPushButton *choose_26;
    QPushButton *choose_27;
    QPushButton *choose_28;
    QPushButton *choose_29;
    QPushButton *choose_30;
    QPushButton *choose_31;
    QPushButton *choose_32;
    QPushButton *choose_33;
    QPushButton *choose_34;
    QPushButton *choose_35;
    QPushButton *choose_36;
    QPushButton *choose_37;
    QPushButton *choose_38;
    QPushButton *choose_39;
    QPushButton *choose_40;
    QPushButton *choose_41;
    QPushButton *choose_42;
    QPushButton *choose_43;
    QPushButton *choose_44;
    QPushButton *choose_45;
    QPushButton *choose_46;
    QPushButton *choose_47;
    QPushButton *choose_48;
    QPushButton *choose_49;
    QPushButton *choose_50;
    QPushButton *close;
    QPushButton *pk;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QStringLiteral("SecondWindow"));
        SecondWindow->resize(600, 600);
        SecondWindow->setStyleSheet(QStringLiteral("background-color: rgb(233, 228, 217);"));
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        biankuang = new QLabel(centralwidget);
        biankuang->setObjectName(QStringLiteral("biankuang"));
        biankuang->setGeometry(QRect(0, 0, 600, 100));
        biankuang->setStyleSheet(QStringLiteral("image: url(:/main/images/biankuang_01.png);"));
        headshow = new QLabel(centralwidget);
        headshow->setObjectName(QStringLiteral("headshow"));
        headshow->setGeometry(QRect(40, 10, 80, 80));
        headshow->setStyleSheet(QStringLiteral("image: url(:/login/images/headshow.png);"));
        chinesename = new QLabel(centralwidget);
        chinesename->setObjectName(QStringLiteral("chinesename"));
        chinesename->setGeometry(QRect(130, 10, 141, 80));
        chinesename->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        money = new QLabel(centralwidget);
        money->setObjectName(QStringLiteral("money"));
        money->setGeometry(QRect(300, 10, 101, 80));
        money->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        finish = new QLabel(centralwidget);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setGeometry(QRect(430, 10, 101, 80));
        finish->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        biankuang2 = new QLabel(centralwidget);
        biankuang2->setObjectName(QStringLiteral("biankuang2"));
        biankuang2->setGeometry(QRect(0, 100, 600, 500));
        biankuang2->setStyleSheet(QStringLiteral("border-image: url(:/main/images/biankuang_02.png);"));
        book = new QPushButton(centralwidget);
        book->setObjectName(QStringLiteral("book"));
        book->setGeometry(QRect(85, 123, 73, 80));
        book->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        left = new QPushButton(centralwidget);
        left->setObjectName(QStringLiteral("left"));
        left->setGeometry(QRect(31, 323, 40, 40));
        left->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image: url(:/main/images/back_normal_default.png);\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-image:url(:/main/images/back_normal_night.png);\n"
"\n"
"}"));
        right = new QPushButton(centralwidget);
        right->setObjectName(QStringLiteral("right"));
        right->setGeometry(QRect(531, 323, 40, 40));
        right->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image: url(:/main/images/forward_normal_default.png);\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-image:url(:/main/images/forward_normal_night.png);\n"
"\n"
"}"));
        book_2 = new QPushButton(centralwidget);
        book_2->setObjectName(QStringLiteral("book_2"));
        book_2->setGeometry(QRect(175, 123, 73, 80));
        book_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_3 = new QPushButton(centralwidget);
        book_3->setObjectName(QStringLiteral("book_3"));
        book_3->setGeometry(QRect(265, 123, 73, 80));
        book_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_4 = new QPushButton(centralwidget);
        book_4->setObjectName(QStringLiteral("book_4"));
        book_4->setGeometry(QRect(355, 123, 73, 80));
        book_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_5 = new QPushButton(centralwidget);
        book_5->setObjectName(QStringLiteral("book_5"));
        book_5->setGeometry(QRect(445, 123, 73, 80));
        book_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_6 = new QPushButton(centralwidget);
        book_6->setObjectName(QStringLiteral("book_6"));
        book_6->setGeometry(QRect(85, 213, 73, 80));
        book_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_7 = new QPushButton(centralwidget);
        book_7->setObjectName(QStringLiteral("book_7"));
        book_7->setGeometry(QRect(175, 213, 73, 80));
        book_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_8 = new QPushButton(centralwidget);
        book_8->setObjectName(QStringLiteral("book_8"));
        book_8->setGeometry(QRect(265, 213, 73, 80));
        book_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_9 = new QPushButton(centralwidget);
        book_9->setObjectName(QStringLiteral("book_9"));
        book_9->setGeometry(QRect(355, 213, 73, 80));
        book_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_10 = new QPushButton(centralwidget);
        book_10->setObjectName(QStringLiteral("book_10"));
        book_10->setGeometry(QRect(445, 213, 73, 80));
        book_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_11 = new QPushButton(centralwidget);
        book_11->setObjectName(QStringLiteral("book_11"));
        book_11->setGeometry(QRect(85, 303, 73, 80));
        book_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_12 = new QPushButton(centralwidget);
        book_12->setObjectName(QStringLiteral("book_12"));
        book_12->setGeometry(QRect(175, 303, 73, 80));
        book_12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_13 = new QPushButton(centralwidget);
        book_13->setObjectName(QStringLiteral("book_13"));
        book_13->setGeometry(QRect(265, 303, 73, 80));
        book_13->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_14 = new QPushButton(centralwidget);
        book_14->setObjectName(QStringLiteral("book_14"));
        book_14->setGeometry(QRect(355, 303, 73, 80));
        book_14->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_15 = new QPushButton(centralwidget);
        book_15->setObjectName(QStringLiteral("book_15"));
        book_15->setGeometry(QRect(445, 303, 73, 80));
        book_15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_16 = new QPushButton(centralwidget);
        book_16->setObjectName(QStringLiteral("book_16"));
        book_16->setGeometry(QRect(85, 393, 73, 80));
        book_16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_17 = new QPushButton(centralwidget);
        book_17->setObjectName(QStringLiteral("book_17"));
        book_17->setGeometry(QRect(175, 393, 73, 80));
        book_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_18 = new QPushButton(centralwidget);
        book_18->setObjectName(QStringLiteral("book_18"));
        book_18->setGeometry(QRect(265, 393, 73, 80));
        book_18->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_19 = new QPushButton(centralwidget);
        book_19->setObjectName(QStringLiteral("book_19"));
        book_19->setGeometry(QRect(355, 393, 73, 80));
        book_19->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_20 = new QPushButton(centralwidget);
        book_20->setObjectName(QStringLiteral("book_20"));
        book_20->setGeometry(QRect(445, 393, 73, 80));
        book_20->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_21 = new QPushButton(centralwidget);
        book_21->setObjectName(QStringLiteral("book_21"));
        book_21->setGeometry(QRect(85, 483, 73, 80));
        book_21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_22 = new QPushButton(centralwidget);
        book_22->setObjectName(QStringLiteral("book_22"));
        book_22->setGeometry(QRect(175, 483, 73, 80));
        book_22->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_23 = new QPushButton(centralwidget);
        book_23->setObjectName(QStringLiteral("book_23"));
        book_23->setGeometry(QRect(265, 483, 73, 80));
        book_23->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_24 = new QPushButton(centralwidget);
        book_24->setObjectName(QStringLiteral("book_24"));
        book_24->setGeometry(QRect(355, 483, 73, 80));
        book_24->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        book_25 = new QPushButton(centralwidget);
        book_25->setObjectName(QStringLiteral("book_25"));
        book_25->setGeometry(QRect(445, 483, 73, 80));
        book_25->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image: url(:/main/images/book_icon_normal_default.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-image: url(:/main/images/book_learning_normal_default.png);\n"
"}"));
        choose = new QPushButton(centralwidget);
        choose->setObjectName(QStringLiteral("choose"));
        choose->setGeometry(QRect(85, 123, 73, 40));
        choose->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_2 = new QPushButton(centralwidget);
        choose_2->setObjectName(QStringLiteral("choose_2"));
        choose_2->setGeometry(QRect(85, 163, 73, 40));
        choose_2->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_3 = new QPushButton(centralwidget);
        choose_3->setObjectName(QStringLiteral("choose_3"));
        choose_3->setGeometry(QRect(175, 123, 73, 40));
        choose_3->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_4 = new QPushButton(centralwidget);
        choose_4->setObjectName(QStringLiteral("choose_4"));
        choose_4->setGeometry(QRect(175, 163, 73, 40));
        choose_4->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_5 = new QPushButton(centralwidget);
        choose_5->setObjectName(QStringLiteral("choose_5"));
        choose_5->setGeometry(QRect(265, 163, 73, 40));
        choose_5->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_6 = new QPushButton(centralwidget);
        choose_6->setObjectName(QStringLiteral("choose_6"));
        choose_6->setGeometry(QRect(265, 123, 73, 40));
        choose_6->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_7 = new QPushButton(centralwidget);
        choose_7->setObjectName(QStringLiteral("choose_7"));
        choose_7->setGeometry(QRect(355, 163, 73, 40));
        choose_7->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_8 = new QPushButton(centralwidget);
        choose_8->setObjectName(QStringLiteral("choose_8"));
        choose_8->setGeometry(QRect(355, 123, 73, 40));
        choose_8->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_9 = new QPushButton(centralwidget);
        choose_9->setObjectName(QStringLiteral("choose_9"));
        choose_9->setGeometry(QRect(445, 163, 73, 40));
        choose_9->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_10 = new QPushButton(centralwidget);
        choose_10->setObjectName(QStringLiteral("choose_10"));
        choose_10->setGeometry(QRect(445, 123, 73, 40));
        choose_10->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_11 = new QPushButton(centralwidget);
        choose_11->setObjectName(QStringLiteral("choose_11"));
        choose_11->setGeometry(QRect(85, 253, 73, 40));
        choose_11->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_12 = new QPushButton(centralwidget);
        choose_12->setObjectName(QStringLiteral("choose_12"));
        choose_12->setGeometry(QRect(85, 213, 73, 40));
        choose_12->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_13 = new QPushButton(centralwidget);
        choose_13->setObjectName(QStringLiteral("choose_13"));
        choose_13->setGeometry(QRect(175, 253, 73, 40));
        choose_13->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_14 = new QPushButton(centralwidget);
        choose_14->setObjectName(QStringLiteral("choose_14"));
        choose_14->setGeometry(QRect(175, 213, 73, 40));
        choose_14->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_15 = new QPushButton(centralwidget);
        choose_15->setObjectName(QStringLiteral("choose_15"));
        choose_15->setGeometry(QRect(265, 253, 73, 40));
        choose_15->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_16 = new QPushButton(centralwidget);
        choose_16->setObjectName(QStringLiteral("choose_16"));
        choose_16->setGeometry(QRect(265, 213, 73, 40));
        choose_16->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_17 = new QPushButton(centralwidget);
        choose_17->setObjectName(QStringLiteral("choose_17"));
        choose_17->setGeometry(QRect(355, 253, 73, 40));
        choose_17->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_18 = new QPushButton(centralwidget);
        choose_18->setObjectName(QStringLiteral("choose_18"));
        choose_18->setGeometry(QRect(355, 213, 73, 40));
        choose_18->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_19 = new QPushButton(centralwidget);
        choose_19->setObjectName(QStringLiteral("choose_19"));
        choose_19->setGeometry(QRect(445, 253, 73, 40));
        choose_19->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_20 = new QPushButton(centralwidget);
        choose_20->setObjectName(QStringLiteral("choose_20"));
        choose_20->setGeometry(QRect(445, 213, 73, 40));
        choose_20->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_21 = new QPushButton(centralwidget);
        choose_21->setObjectName(QStringLiteral("choose_21"));
        choose_21->setGeometry(QRect(85, 343, 73, 40));
        choose_21->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_22 = new QPushButton(centralwidget);
        choose_22->setObjectName(QStringLiteral("choose_22"));
        choose_22->setGeometry(QRect(85, 303, 73, 40));
        choose_22->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_23 = new QPushButton(centralwidget);
        choose_23->setObjectName(QStringLiteral("choose_23"));
        choose_23->setGeometry(QRect(175, 343, 73, 40));
        choose_23->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_24 = new QPushButton(centralwidget);
        choose_24->setObjectName(QStringLiteral("choose_24"));
        choose_24->setGeometry(QRect(175, 303, 73, 40));
        choose_24->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_25 = new QPushButton(centralwidget);
        choose_25->setObjectName(QStringLiteral("choose_25"));
        choose_25->setGeometry(QRect(265, 343, 73, 40));
        choose_25->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_26 = new QPushButton(centralwidget);
        choose_26->setObjectName(QStringLiteral("choose_26"));
        choose_26->setGeometry(QRect(265, 303, 73, 40));
        choose_26->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_27 = new QPushButton(centralwidget);
        choose_27->setObjectName(QStringLiteral("choose_27"));
        choose_27->setGeometry(QRect(355, 343, 73, 40));
        choose_27->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_28 = new QPushButton(centralwidget);
        choose_28->setObjectName(QStringLiteral("choose_28"));
        choose_28->setGeometry(QRect(355, 303, 73, 40));
        choose_28->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_29 = new QPushButton(centralwidget);
        choose_29->setObjectName(QStringLiteral("choose_29"));
        choose_29->setGeometry(QRect(445, 343, 73, 40));
        choose_29->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_30 = new QPushButton(centralwidget);
        choose_30->setObjectName(QStringLiteral("choose_30"));
        choose_30->setGeometry(QRect(445, 303, 73, 40));
        choose_30->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_31 = new QPushButton(centralwidget);
        choose_31->setObjectName(QStringLiteral("choose_31"));
        choose_31->setGeometry(QRect(85, 433, 73, 40));
        choose_31->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_32 = new QPushButton(centralwidget);
        choose_32->setObjectName(QStringLiteral("choose_32"));
        choose_32->setGeometry(QRect(85, 393, 73, 40));
        choose_32->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_33 = new QPushButton(centralwidget);
        choose_33->setObjectName(QStringLiteral("choose_33"));
        choose_33->setGeometry(QRect(175, 433, 73, 40));
        choose_33->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_34 = new QPushButton(centralwidget);
        choose_34->setObjectName(QStringLiteral("choose_34"));
        choose_34->setGeometry(QRect(175, 393, 73, 40));
        choose_34->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_35 = new QPushButton(centralwidget);
        choose_35->setObjectName(QStringLiteral("choose_35"));
        choose_35->setGeometry(QRect(265, 433, 73, 40));
        choose_35->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_36 = new QPushButton(centralwidget);
        choose_36->setObjectName(QStringLiteral("choose_36"));
        choose_36->setGeometry(QRect(265, 393, 73, 40));
        choose_36->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_37 = new QPushButton(centralwidget);
        choose_37->setObjectName(QStringLiteral("choose_37"));
        choose_37->setGeometry(QRect(355, 433, 73, 40));
        choose_37->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_38 = new QPushButton(centralwidget);
        choose_38->setObjectName(QStringLiteral("choose_38"));
        choose_38->setGeometry(QRect(355, 393, 73, 40));
        choose_38->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_39 = new QPushButton(centralwidget);
        choose_39->setObjectName(QStringLiteral("choose_39"));
        choose_39->setGeometry(QRect(445, 433, 73, 40));
        choose_39->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_40 = new QPushButton(centralwidget);
        choose_40->setObjectName(QStringLiteral("choose_40"));
        choose_40->setGeometry(QRect(445, 393, 73, 40));
        choose_40->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_41 = new QPushButton(centralwidget);
        choose_41->setObjectName(QStringLiteral("choose_41"));
        choose_41->setGeometry(QRect(85, 523, 73, 40));
        choose_41->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_42 = new QPushButton(centralwidget);
        choose_42->setObjectName(QStringLiteral("choose_42"));
        choose_42->setGeometry(QRect(85, 483, 73, 40));
        choose_42->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_43 = new QPushButton(centralwidget);
        choose_43->setObjectName(QStringLiteral("choose_43"));
        choose_43->setGeometry(QRect(175, 523, 73, 40));
        choose_43->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_44 = new QPushButton(centralwidget);
        choose_44->setObjectName(QStringLiteral("choose_44"));
        choose_44->setGeometry(QRect(175, 483, 73, 40));
        choose_44->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_45 = new QPushButton(centralwidget);
        choose_45->setObjectName(QStringLiteral("choose_45"));
        choose_45->setGeometry(QRect(265, 523, 73, 40));
        choose_45->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_46 = new QPushButton(centralwidget);
        choose_46->setObjectName(QStringLiteral("choose_46"));
        choose_46->setGeometry(QRect(265, 483, 73, 40));
        choose_46->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_47 = new QPushButton(centralwidget);
        choose_47->setObjectName(QStringLiteral("choose_47"));
        choose_47->setGeometry(QRect(355, 523, 73, 40));
        choose_47->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_48 = new QPushButton(centralwidget);
        choose_48->setObjectName(QStringLiteral("choose_48"));
        choose_48->setGeometry(QRect(355, 483, 73, 40));
        choose_48->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        choose_49 = new QPushButton(centralwidget);
        choose_49->setObjectName(QStringLiteral("choose_49"));
        choose_49->setGeometry(QRect(445, 523, 73, 40));
        choose_49->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-1.png);\n"
"color: rgb(170, 170, 127);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        choose_50 = new QPushButton(centralwidget);
        choose_50->setObjectName(QStringLiteral("choose_50"));
        choose_50->setGeometry(QRect(445, 483, 73, 40));
        choose_50->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/f-0.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(170, 170, 127);"));
        close = new QPushButton(centralwidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(550, 33, 39, 39));
        close->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-image: url(:/main/images/close_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"background-image:url(:main/images/close_normal_night.png);\n"
"}"));
        pk = new QPushButton(centralwidget);
        pk->setObjectName(QStringLiteral("pk"));
        pk->setGeometry(QRect(150, 567, 302, 31));
        pk->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(170, 170, 127);\n"
"	background-color: rgb(203, 203, 203);\n"
"background-image: url(:/main/images/fm_ormal_bg.png);\n"
"border-image: url(:/main/images/background23.png);\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"	font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        SecondWindow->setCentralWidget(centralwidget);

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QApplication::translate("SecondWindow", "MainWindow", 0));
        biankuang->setText(QString());
        headshow->setText(QString());
        chinesename->setText(QString());
        money->setText(QApplication::translate("SecondWindow", "0\351\207\221\345\270\201", 0));
        finish->setText(QApplication::translate("SecondWindow", "0/100", 0));
        biankuang2->setText(QString());
        book->setText(QApplication::translate("SecondWindow", "1", 0));
        left->setText(QString());
        right->setText(QString());
        book_2->setText(QApplication::translate("SecondWindow", "2", 0));
        book_3->setText(QApplication::translate("SecondWindow", "3", 0));
        book_4->setText(QApplication::translate("SecondWindow", "4", 0));
        book_5->setText(QApplication::translate("SecondWindow", "5", 0));
        book_6->setText(QApplication::translate("SecondWindow", "6", 0));
        book_7->setText(QApplication::translate("SecondWindow", "7", 0));
        book_8->setText(QApplication::translate("SecondWindow", "8", 0));
        book_9->setText(QApplication::translate("SecondWindow", "9", 0));
        book_10->setText(QApplication::translate("SecondWindow", "10", 0));
        book_11->setText(QApplication::translate("SecondWindow", "11", 0));
        book_12->setText(QApplication::translate("SecondWindow", "12", 0));
        book_13->setText(QApplication::translate("SecondWindow", "13", 0));
        book_14->setText(QApplication::translate("SecondWindow", "14", 0));
        book_15->setText(QApplication::translate("SecondWindow", "15", 0));
        book_16->setText(QApplication::translate("SecondWindow", "16", 0));
        book_17->setText(QApplication::translate("SecondWindow", "17", 0));
        book_18->setText(QApplication::translate("SecondWindow", "18", 0));
        book_19->setText(QApplication::translate("SecondWindow", "19", 0));
        book_20->setText(QApplication::translate("SecondWindow", "20", 0));
        book_21->setText(QApplication::translate("SecondWindow", "21", 0));
        book_22->setText(QApplication::translate("SecondWindow", "22", 0));
        book_23->setText(QApplication::translate("SecondWindow", "23", 0));
        book_24->setText(QApplication::translate("SecondWindow", "24", 0));
        book_25->setText(QApplication::translate("SecondWindow", "25", 0));
        choose->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_2->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_3->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_4->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_5->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_6->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_7->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_8->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_9->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_10->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_11->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_12->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_13->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_14->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_15->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_16->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_17->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_18->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_19->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_20->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_21->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_22->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_23->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_24->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_25->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_26->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_27->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_28->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_29->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_30->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_31->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_32->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_33->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_34->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_35->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_36->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_37->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_38->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_39->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_40->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_41->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_42->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_43->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_44->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_45->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_46->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_47->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_48->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        choose_49->setText(QApplication::translate("SecondWindow", "\346\265\213\350\257\225", 0));
        choose_50->setText(QApplication::translate("SecondWindow", "\345\255\246\344\271\240", 0));
        close->setText(QString());
        pk->setText(QApplication::translate("SecondWindow", "\345\215\216\345\261\261\350\256\272\345\211\221", 0));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
