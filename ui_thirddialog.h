/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName(QStringLiteral("ThirdDialog"));
        ThirdDialog->resize(300, 111);
        ThirdDialog->setStyleSheet(QLatin1String("border-image: url(:/main/images/biankuang_5.png);\n"
"background-color: rgb(170, 170, 127);"));
        label = new QLabel(ThirdDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 19, 241, 21));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/biankuang_07.png);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(ThirdDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 70, 101, 28));
        pushButton->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(ThirdDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 47, 91, 21));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/main/images/biankuang_07.png);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QApplication::translate("ThirdDialog", "Dialog", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("ThirdDialog", "\345\220\214\346\204\217", 0));
        label_2->setText(QApplication::translate("ThirdDialog", "\347\254\254100\350\257\276", 0));
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
