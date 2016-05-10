/********************************************************************************
** Form generated from reading UI file 'fourthdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHDIALOG_H
#define UI_FOURTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FourthDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *flash;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *FourthDialog)
    {
        if (FourthDialog->objectName().isEmpty())
            FourthDialog->setObjectName(QStringLiteral("FourthDialog"));
        FourthDialog->resize(300, 111);
        FourthDialog->setStyleSheet(QLatin1String("border-image: url(:/main/images/biankuang_5.png);\n"
"background-color: rgb(170, 170, 127);"));
        pushButton = new QPushButton(FourthDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 70, 101, 28));
        pushButton->setStyleSheet(QStringLiteral(""));
        label = new QLabel(FourthDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 51, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-image: url(:/main/images/back_normal_def1ault.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        comboBox = new QComboBox(FourthDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 30, 101, 31));
        comboBox->setStyleSheet(QStringLiteral("border-image: url(:/main/images/back_normal_defaul11t.png);"));
        flash = new QLabel(FourthDialog);
        flash->setObjectName(QStringLiteral("flash"));
        flash->setGeometry(QRect(220, 26, 60, 60));
        flash->setStyleSheet(QStringLiteral("border-image: url(:/main/images/backgr1ound3.png);"));
        label_3 = new QLabel(FourthDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(61, 20, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-image: url(:/main/images/back_normal_def1ault.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4 = new QLabel(FourthDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(61, 60, 141, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-image: url(:/main/images/back_normal_def1ault.png);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(FourthDialog);

        QMetaObject::connectSlotsByName(FourthDialog);
    } // setupUi

    void retranslateUi(QDialog *FourthDialog)
    {
        FourthDialog->setWindowTitle(QApplication::translate("FourthDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("FourthDialog", "\345\217\221\350\265\267\346\214\221\346\210\230", 0));
        label->setText(QApplication::translate("FourthDialog", "\350\257\276\347\250\213", 0));
        flash->setText(QString());
        label_3->setText(QApplication::translate("FourthDialog", "\350\257\267\346\261\202\345\267\262\347\273\217\345\217\221\351\200\201", 0));
        label_4->setText(QApplication::translate("FourthDialog", "\347\255\211\345\276\205\345\257\271\346\226\271\345\220\214\346\204\217", 0));
    } // retranslateUi

};

namespace Ui {
    class FourthDialog: public Ui_FourthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHDIALOG_H
