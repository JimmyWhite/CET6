<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QString pkName, QString courseId,QWidget *parent = 0);
    ~ThirdDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ThirdDialog *ui;
};

#endif // THIRDDIALOG_H
=======
#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QString pkName, QString courseId,QWidget *parent = 0);
    ~ThirdDialog();
    QString name;
    QString id;

signals:
    void agreePK(QString pkName, QString courseID);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ThirdDialog *ui;
};

#endif // THIRDDIALOG_H
>>>>>>> final version
