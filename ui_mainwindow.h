/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *background;
    QLabel *headshow;
    QLabel *online;
    QPushButton *loginin;
    QLineEdit *username;
    QLineEdit *password;
    QCheckBox *remerber;
    QLabel *banner;
    QLabel *icon;
    QLabel *title;
    QCheckBox *autologin;
    QPushButton *register_2;
    QPushButton *register_3;
    QPushButton *plus;
    QPushButton *twocode;
    QPushButton *close;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(412, 312);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 140, 412, 170));
        background->setStyleSheet(QStringLiteral("border-image: url(:/login/images/background.png);"));
        headshow = new QLabel(centralWidget);
        headshow->setObjectName(QStringLiteral("headshow"));
        headshow->setGeometry(QRect(20, 160, 80, 80));
        headshow->setStyleSheet(QLatin1String("background-image: url(:/login/images/headshowframe.png);\n"
"image: url(:/login/images/headshow.png);"));
        online = new QLabel(centralWidget);
        online->setObjectName(QStringLiteral("online"));
        online->setGeometry(QRect(85, 223, 15, 15));
        online->setStyleSheet(QStringLiteral("image: url(:/login/images/imonline.png);"));
        loginin = new QPushButton(centralWidget);
        loginin->setObjectName(QStringLiteral("loginin"));
        loginin->setGeometry(QRect(120, 259, 194, 30));
        loginin->setStyleSheet(QStringLiteral(""));
        username = new QLineEdit(centralWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(120, 160, 194, 30));
        username->setStyleSheet(QStringLiteral(""));
        password = new QLineEdit(centralWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(120, 190, 194, 30));
        password->setStyleSheet(QStringLiteral(""));
        remerber = new QCheckBox(centralWidget);
        remerber->setObjectName(QStringLiteral("remerber"));
        remerber->setGeometry(QRect(119, 230, 91, 20));
        remerber->setStyleSheet(QLatin1String("QCheckBox {\n"
"    spacing: 5px; \n"
"    color: rgb(157, 159, 160);\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(:/login/images/checkbox_normal.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/login/images/checkbox_tick_highlight.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/login/images/checkbox_hightlight.png);\n"
"}\n"
""));
        banner = new QLabel(centralWidget);
        banner->setObjectName(QStringLiteral("banner"));
        banner->setGeometry(QRect(0, 0, 412, 142));
        icon = new QLabel(centralWidget);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(110, 30, 80, 80));
        icon->setStyleSheet(QStringLiteral("image: url(:/login/images/qieicon.png);"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(190, 40, 100, 64));
        title->setStyleSheet(QStringLiteral("image: url(:/login/images/title.png);"));
        autologin = new QCheckBox(centralWidget);
        autologin->setObjectName(QStringLiteral("autologin"));
        autologin->setGeometry(QRect(234, 230, 91, 20));
        autologin->setStyleSheet(QLatin1String("QCheckBox {\n"
"    spacing: 5px; \n"
"    color: rgb(157, 159, 160);\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(:/login/images/checkbox_normal.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/login/images/checkbox_tick_highlight.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/login/images/checkbox_hightlight.png);\n"
"}\n"
""));
        register_2 = new QPushButton(centralWidget);
        register_2->setObjectName(QStringLiteral("register_2"));
        register_2->setGeometry(QRect(320, 164, 81, 21));
        register_2->setStyleSheet(QStringLiteral(""));
        register_3 = new QPushButton(centralWidget);
        register_3->setObjectName(QStringLiteral("register_3"));
        register_3->setGeometry(QRect(320, 196, 81, 21));
        register_3->setStyleSheet(QStringLiteral(""));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(7, 280, 24, 24));
        twocode = new QPushButton(centralWidget);
        twocode->setObjectName(QStringLiteral("twocode"));
        twocode->setGeometry(QRect(381, 280, 24, 24));
        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(388, 0, 25, 25));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        background->setText(QString());
        headshow->setText(QString());
        online->setText(QString());
        loginin->setText(QApplication::translate("MainWindow", "\347\231\273 \345\275\225", 0));
        remerber->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        banner->setText(QString());
        icon->setText(QString());
        title->setText(QString());
        autologin->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        register_2->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214\350\264\246\345\217\267", 0));
        register_3->setText(QApplication::translate("MainWindow", "\346\211\276\345\233\236\345\257\206\347\240\201", 0));
        plus->setText(QString());
        twocode->setText(QString());
        close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
