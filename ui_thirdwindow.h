/********************************************************************************
** Form generated from reading UI file 'thirdwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_H
#define UI_THIRDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdWindow
{
public:
    QWidget *centralwidget;
    QLabel *word;
    QTextEdit *sentence;
    QLabel *a;
    QLabel *b;
    QLabel *c;
    QLabel *d;
    QLabel *lunci;
    QLabel *A;
    QLabel *B;
    QLabel *C;
    QLabel *D;
    QLabel *A_2;
    QLabel *B_2;
    QLabel *C_2;
    QLabel *D_2;
    QTextEdit *a_2;
    QTextEdit *b_2;
    QTextEdit *c_2;
    QTextEdit *d_2;
    QPushButton *sentencemp3;
    QPushButton *wordmp3;
    QLabel *ahead;
    QLabel *remain;
    QPushButton *pushButton;
    QLabel *datas;
    QLabel *tap;
    void setupUi(QMainWindow *ThirdWindow)
    {
        if (ThirdWindow->objectName().isEmpty())
            ThirdWindow->setObjectName(QStringLiteral("ThirdWindow"));
        ThirdWindow->resize(870, 800);
        ThirdWindow->setStyleSheet(QLatin1String("border-image: url(:/main/images/background2.png);\n"
""));

        centralwidget = new QWidget(ThirdWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        word = new QLabel(centralwidget);
        datas = new QLabel(centralwidget);
        tap = new QLabel(centralwidget);
        datas->setAlignment(Qt::AlignCenter);
        tap->setObjectName(QStringLiteral("tap"));
        tap->setGeometry(390,705,111,31);
        tap->setStyleSheet(QString::fromLocal8Bit("border-image:url(:/main/images/background24.png);\n"
                                                  "font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
                                                  "color: rgb(255, 0, 0);\n"));
        tap->setText("对手战况");
        datas->setObjectName(QStringLiteral("datas"));
        datas->setGeometry(396,744,91,21);
        datas->setStyleSheet(QString::fromLocal8Bit("border-image:url(:/main/images/background24.png);\n"
                                                    "font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"));
        datas->setAlignment(Qt::AlignCenter);
        word->setObjectName(QStringLiteral("word"));
        word->setGeometry(QRect(286, 60, 300, 50));
        word->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:none;\n"
"color: rgb(0, 0, 0);\n"
"border-image: url(:/main/images/background4.png);"));
        sentence = new QTextEdit(centralwidget);
        sentence->setObjectName(QStringLiteral("sentence"));
        sentence->setGeometry(QRect(236, 140, 381, 100));
        sentence->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: italic 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);\n"
"border-image: url(:/main/images/background4.png);\n"
"background-color: rgba(0, 255, 127, 0);"));
        a = new QLabel(centralwidget);
        a->setObjectName(QStringLiteral("a"));
        a->setGeometry(QRect(186, 280, 200, 200));
        a->setStyleSheet(QStringLiteral("border-image: url(:/main/images/background4.png);"));
        b = new QLabel(centralwidget);
        b->setObjectName(QStringLiteral("b"));
        b->setGeometry(QRect(476, 270, 200, 200));
        b->setStyleSheet(QStringLiteral("border-image: url(:/main/images/background4.png);"));
        c = new QLabel(centralwidget);
        c->setObjectName(QStringLiteral("c"));
        c->setGeometry(QRect(196, 500, 200, 200));
        c->setStyleSheet(QStringLiteral("border-image: url(:/main/images/background4.png);"));
        d = new QLabel(centralwidget);
        d->setObjectName(QStringLiteral("d"));
        d->setGeometry(QRect(476, 500, 200, 200));
        d->setStyleSheet(QStringLiteral("border-image: url(:/main/images/background4.png);"));
        lunci = new QLabel(centralwidget);
        lunci->setObjectName(QStringLiteral("lunci"));
        lunci->setGeometry(QRect(126, 40, 141, 41));
        lunci->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);\n"
"color: rgb(0, 0, 0);"));
        A = new QLabel(centralwidget);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(146, 350, 31, 31));
        A->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        B = new QLabel(centralwidget);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(426, 350, 31, 31));
        B->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        C = new QLabel(centralwidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(146, 580, 31, 31));
        C->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        D = new QLabel(centralwidget);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(426, 580, 31, 31));
        D->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        A_2 = new QLabel(centralwidget);
        A_2->setObjectName(QStringLiteral("A_2"));
        A_2->setGeometry(QRect(176, 170, 31, 31));
        A_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        B_2 = new QLabel(centralwidget);
        B_2->setObjectName(QStringLiteral("B_2"));
        B_2->setGeometry(QRect(176, 300, 31, 31));
        B_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        C_2 = new QLabel(centralwidget);
        C_2->setObjectName(QStringLiteral("C_2"));
        C_2->setGeometry(QRect(176, 440, 31, 31));
        C_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        D_2 = new QLabel(centralwidget);
        D_2->setObjectName(QStringLiteral("D_2"));
        D_2->setGeometry(QRect(176, 580, 31, 31));
        D_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        a_2 = new QTextEdit(centralwidget);
        a_2->setObjectName(QStringLiteral("a_2"));
        a_2->setGeometry(QRect(216, 166, 501, 111));
        a_2->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/background4.png);\n"
"border:none;\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgba(0, 255, 127, 0);"));
        b_2 = new QTextEdit(centralwidget);
        b_2->setObjectName(QStringLiteral("b_2"));
        b_2->setGeometry(QRect(216, 300, 501, 111));
        b_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);\n"
"background-color: rgba(0, 255, 127, 0);"));
        c_2 = new QTextEdit(centralwidget);
        c_2->setObjectName(QStringLiteral("c_2"));
        c_2->setGeometry(QRect(216, 440, 501, 111));
        c_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);\n"
"background-color: rgba(0, 255, 127, 0);"));
        d_2 = new QTextEdit(centralwidget);
        d_2->setObjectName(QStringLiteral("d_2"));
        d_2->setGeometry(QRect(216, 580, 501, 111));
        d_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);\n"
"background-color: rgba(0, 255, 127, 0);"));
        sentencemp3 = new QPushButton(centralwidget);
        sentencemp3->setObjectName(QStringLiteral("sentencemp3"));
        sentencemp3->setGeometry(QRect(646, 150, 74, 64));
        sentencemp3->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"border-image:url(:main/images/course_sound_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"border:none;\n"
"border-image:url(:main/images/course_sound_pressed_default.png);\n"
"}"));
        wordmp3 = new QPushButton(centralwidget);
        wordmp3->setObjectName(QStringLiteral("wordmp3"));
        wordmp3->setGeometry(QRect(606, 66, 40, 40));
        wordmp3->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"border-image:url(:main/images/tv_small_play_normal_default.png);\n"
"}\n"
"QPushButton:hover{\n"
"border:none;\n"
"border-image:url(:main/images/tv_small_play_pressed_default.png);\n"
"}border:none;"));
        ahead = new QLabel(centralwidget);
        ahead->setObjectName(QStringLiteral("ahead"));
        ahead->setGeometry(QRect(136, 710, 131, 31));
        ahead->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        remain = new QLabel(centralwidget);
        remain->setObjectName(QStringLiteral("remain"));
        remain->setGeometry(QRect(608, 710, 131, 31));
        remain->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-image: url(:/main/images/background4.png);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 40, 67, 61));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"border-image:url(:main/images/business_close_normal.png);\n"
"}\n"
"QPushButton:hover{\n"
"border:none;\n"
"border-image:url(:main/images/business_close_selected.png);\n"
"}"));
        ThirdWindow->setCentralWidget(centralwidget);

        retranslateUi(ThirdWindow);

        QMetaObject::connectSlotsByName(ThirdWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ThirdWindow)
    {
        ThirdWindow->setWindowTitle(QApplication::translate("ThirdWindow", "MainWindow", 0));
        word->setText(QApplication::translate("ThirdWindow", "word", 0));
        a->setText(QString());
        b->setText(QString());
        c->setText(QString());
        d->setText(QString());
        lunci->setText(QApplication::translate("ThirdWindow", "\347\254\254\344\270\200\350\275\256\345\255\246\344\271\240", 0));
        A->setText(QApplication::translate("ThirdWindow", "A", 0));
        B->setText(QApplication::translate("ThirdWindow", "B", 0));
        C->setText(QApplication::translate("ThirdWindow", "C", 0));
        D->setText(QApplication::translate("ThirdWindow", "D", 0));
        A_2->setText(QApplication::translate("ThirdWindow", "A", 0));
        B_2->setText(QApplication::translate("ThirdWindow", "B", 0));
        C_2->setText(QApplication::translate("ThirdWindow", "C", 0));
        D_2->setText(QApplication::translate("ThirdWindow", "D", 0));
        sentencemp3->setText(QString());
        wordmp3->setText(QString());
        ahead->setText(QString());
        remain->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ThirdWindow: public Ui_ThirdWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_H
