/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SecondDialog
{
public:
    QLabel *title;
    QLabel *word;
    QLabel *photo;
    QTextEdit *sentence;
    QTextEdit *chinese;
    QPushButton *next;

    void setupUi(QDialog *SecondDialog)
    {
        if (SecondDialog->objectName().isEmpty())
            SecondDialog->setObjectName(QStringLiteral("SecondDialog"));
        SecondDialog->resize(587, 488);
        SecondDialog->setStyleSheet(QStringLiteral("border-image: url(:/main/images/background3.png);"));
        title = new QLabel(SecondDialog);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(90, -5, 411, 41));
        title->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/background23.png);\n"
"font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);\n"
""));
        word = new QLabel(SecondDialog);
        word->setObjectName(QStringLiteral("word"));
        word->setGeometry(QRect(83, 70, 421, 51));
        word->setStyleSheet(QString::fromUtf8("background-image: url(:/main/images/fm_ormal_bg.png);\n"
"font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);\n"
"image: url(:/main/images/background4.png);\n"
"border-image: url(:/main/images/background23.png);\n"
""));
        photo = new QLabel(SecondDialog);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setGeometry(QRect(90, 250, 200, 200));
        photo->setStyleSheet(QLatin1String("background-image: url(:/main/images/fm_ormal_bg.png);\n"
"image: url(:/main/images/background4.png);\n"
"border-image: url(:/main/images/background23.png);\n"
""));
        sentence = new QTextEdit(SecondDialog);
        sentence->setObjectName(QStringLiteral("sentence"));
        sentence->setGeometry(QRect(83, 140, 461, 101));
        sentence->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: italic 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: rgba(0, 255, 127, 0);\n"
"border-image: url(:/main/images/background23.png);\n"
"\n"
""));
        chinese = new QTextEdit(SecondDialog);
        chinese->setObjectName(QStringLiteral("chinese"));
        chinese->setGeometry(QRect(310, 250, 231, 151));
        chinese->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/background23.png);\n"
"background-image: url(:/main/images/fm_ormal_bg.png);\n"
"background-color: rgba(0, 255, 127, 50);\n"
"border:none;\n"
"color: rgb(0, 0, 0);\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        next = new QPushButton(SecondDialog);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(329, 415, 232, 51));
        next->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-image: url(:/main/images/fm_ormal_bg.png);\n"
"border-image: url(:/main/images/background23.png);\n"
"    border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 10px;\n"
"	background-color: rgb(220, 220, 220);\n"
"    border-color: beige;\n"
"    min-width: 10em;\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        retranslateUi(SecondDialog);

        QMetaObject::connectSlotsByName(SecondDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondDialog)
    {
        SecondDialog->setWindowTitle(QApplication::translate("SecondDialog", "Dialog", 0));
        title->setText(QString());
        word->setText(QString());
        photo->setText(QString());
        sentence->setHtml(QApplication::translate("SecondDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:400; font-style:italic;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        chinese->setHtml(QApplication::translate("SecondDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-style:italic;\"><br /></p></body></html>", 0));
        next->setText(QApplication::translate("SecondDialog", "\344\270\213\344\270\200\351\242\230", 0));
    } // retranslateUi

};

namespace Ui {
    class SecondDialog: public Ui_SecondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
