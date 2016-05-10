/********************************************************************************
** Form generated from reading UI file 'fourthwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHWINDOW_H
#define UI_FOURTHWINDOW_H

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

class Ui_FourthWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *name;
    QLabel *money;
    QLabel *name_2;
    QLabel *name_3;
    QLabel *name_4;
    QLabel *name_5;
    QLabel *name_6;
    QLabel *money_2;
    QLabel *money_3;
    QLabel *money_4;
    QLabel *money_5;
    QLabel *money_6;
    QPushButton *pk;
    QPushButton *pk_2;
    QPushButton *pk_3;
    QPushButton *pk_4;
    QPushButton *pk_5;
    QPushButton *refresh;
    QPushButton *close;
    QLabel *tip;

    void setupUi(QMainWindow *FourthWindow)
    {
        if (FourthWindow->objectName().isEmpty())
            FourthWindow->setObjectName(QStringLiteral("FourthWindow"));
        FourthWindow->resize(500, 450);
        FourthWindow->setStyleSheet(QStringLiteral("background-color: rgb(233, 228, 217);"));
        centralwidget = new QWidget(FourthWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(100, -10, 300, 80));
        title->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-image: url(:/main/images/mytitle.png);"));
        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(100, 80, 64, 64));
        name->setStyleSheet(QStringLiteral("background-image: url(:/main/images/name.png);"));
        money = new QLabel(centralwidget);
        money->setObjectName(QStringLiteral("money"));
        money->setGeometry(QRect(260, 78, 72, 72));
        money->setStyleSheet(QStringLiteral("background-image: url(:/main/images/money.png);"));
        name_2 = new QLabel(centralwidget);
        name_2->setObjectName(QStringLiteral("name_2"));
        name_2->setGeometry(QRect(60, 165, 141, 31));
        name_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        name_3 = new QLabel(centralwidget);
        name_3->setObjectName(QStringLiteral("name_3"));
        name_3->setGeometry(QRect(60, 225, 141, 31));
        name_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        name_4 = new QLabel(centralwidget);
        name_4->setObjectName(QStringLiteral("name_4"));
        name_4->setGeometry(QRect(60, 285, 141, 31));
        name_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        name_5 = new QLabel(centralwidget);
        name_5->setObjectName(QStringLiteral("name_5"));
        name_5->setGeometry(QRect(60, 345, 141, 31));
        name_5->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        name_6 = new QLabel(centralwidget);
        name_6->setObjectName(QStringLiteral("name_6"));
        name_6->setGeometry(QRect(60, 405, 141, 31));
        name_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        money_2 = new QLabel(centralwidget);
        money_2->setObjectName(QStringLiteral("money_2"));
        money_2->setGeometry(QRect(230, 165, 141, 31));
        money_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        money_3 = new QLabel(centralwidget);
        money_3->setObjectName(QStringLiteral("money_3"));
        money_3->setGeometry(QRect(230, 225, 141, 31));
        money_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        money_4 = new QLabel(centralwidget);
        money_4->setObjectName(QStringLiteral("money_4"));
        money_4->setGeometry(QRect(230, 285, 141, 31));
        money_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        money_5 = new QLabel(centralwidget);
        money_5->setObjectName(QStringLiteral("money_5"));
        money_5->setGeometry(QRect(230, 345, 141, 31));
        money_5->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        money_6 = new QLabel(centralwidget);
        money_6->setObjectName(QStringLiteral("money_6"));
        money_6->setGeometry(QRect(230, 405, 141, 31));
        money_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 170, 0);"));
        pk = new QPushButton(centralwidget);
        pk->setObjectName(QStringLiteral("pk"));
        pk->setGeometry(QRect(390, 160, 52, 50));
        pk->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-image: url(:/main/images/pk_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/main/images/pk_pressed_night.png);\n"
"\n"
"}"));
        pk_2 = new QPushButton(centralwidget);
        pk_2->setObjectName(QStringLiteral("pk_2"));
        pk_2->setGeometry(QRect(390, 220, 52, 50));
        pk_2->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-image: url(:/main/images/pk_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/main/images/pk_pressed_night.png);\n"
"\n"
"}"));
        pk_3 = new QPushButton(centralwidget);
        pk_3->setObjectName(QStringLiteral("pk_3"));
        pk_3->setGeometry(QRect(390, 280, 52, 50));
        pk_3->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-image: url(:/main/images/pk_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/main/images/pk_pressed_night.png);\n"
"\n"
"}"));
        pk_4 = new QPushButton(centralwidget);
        pk_4->setObjectName(QStringLiteral("pk_4"));
        pk_4->setGeometry(QRect(390, 340, 52, 50));
        pk_4->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-image: url(:/main/images/pk_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/main/images/pk_pressed_night.png);\n"
"\n"
"}"));
        pk_5 = new QPushButton(centralwidget);
        pk_5->setObjectName(QStringLiteral("pk_5"));
        pk_5->setGeometry(QRect(390, 400, 52, 50));
        pk_5->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-image: url(:/main/images/pk_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/main/images/pk_pressed_night.png);\n"
"\n"
"}"));
        refresh = new QPushButton(centralwidget);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(400, 90, 43, 49));
        refresh->setStyleSheet(QLatin1String("border:none;\n"
"background-image: url(:/main/images/default_ptr_rotate.png);"));
        close = new QPushButton(centralwidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(432, 2, 67, 61));
        close->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image: url(:/main/images/business_close_normal.png);\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-image: url(:/main/images/business_close_selected.png);\n"
"\n"
"}"));
        tip = new QLabel(centralwidget);
        tip->setObjectName(QStringLiteral("tip"));
        tip->setGeometry(QRect(50, 180, 400, 100));
        tip->setStyleSheet(QStringLiteral("background-image: url(:/main/images/tip.png);"));
        FourthWindow->setCentralWidget(centralwidget);

        retranslateUi(FourthWindow);

        QMetaObject::connectSlotsByName(FourthWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FourthWindow)
    {
        FourthWindow->setWindowTitle(QApplication::translate("FourthWindow", "MainWindow", 0));
        title->setText(QString());
        name->setText(QString());
        money->setText(QString());
        name_2->setText(QApplication::translate("FourthWindow", "\345\247\223\345\220\215", 0));
        name_3->setText(QApplication::translate("FourthWindow", "\345\247\223\345\220\215", 0));
        name_4->setText(QApplication::translate("FourthWindow", "\345\247\223\345\220\215", 0));
        name_5->setText(QApplication::translate("FourthWindow", "\345\247\223\345\220\215", 0));
        name_6->setText(QApplication::translate("FourthWindow", "\345\247\223\345\220\215", 0));
        money_2->setText(QApplication::translate("FourthWindow", "\351\207\221\345\270\201", 0));
        money_3->setText(QApplication::translate("FourthWindow", "\351\207\221\345\270\201", 0));
        money_4->setText(QApplication::translate("FourthWindow", "\351\207\221\345\270\201", 0));
        money_5->setText(QApplication::translate("FourthWindow", "\351\207\221\345\270\201", 0));
        money_6->setText(QApplication::translate("FourthWindow", "\351\207\221\345\270\201", 0));
        pk->setText(QString());
        pk_2->setText(QString());
        pk_3->setText(QString());
        pk_4->setText(QString());
        pk_5->setText(QString());
        refresh->setText(QString());
        close->setText(QString());
        tip->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FourthWindow: public Ui_FourthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHWINDOW_H
