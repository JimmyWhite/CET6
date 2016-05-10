#ifndef FIFTHDIALOG_H
#define FIFTHDIALOG_H

#include <QDialog>

namespace Ui {
class FifthDialog;
}

class FifthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FifthDialog(QString name,QString money,QString pkname="",int flag=0,QWidget *parent = 0);
    ~FifthDialog();
    QString mymoney;
    QString myname;
private:
    Ui::FifthDialog *ui;
public slots:
    void showResult(QString name,int flag);
private slots:
    void on_pushButton_clicked();
};

#endif // FIFTHDIALOG_H
