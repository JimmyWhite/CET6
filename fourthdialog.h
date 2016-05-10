<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#ifndef FOURTHDIALOG_H
#define FOURTHDIALOG_H

#include <QDialog>

namespace Ui {
class FourthDialog;
}

class FourthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FourthDialog(QWidget *parent = 0);
    ~FourthDialog();

signals:
    void selectCourse(QString courseID);

private slots:
    void on_pushButton_clicked();

private:
    Ui::FourthDialog *ui;
};

#endif // FOURTHDIALOG_H
=======
#ifndef FOURTHDIALOG_H
#define FOURTHDIALOG_H

#include <QDialog>

namespace Ui {
class FourthDialog;
}

class FourthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FourthDialog(QWidget *parent = 0);
    ~FourthDialog();

signals:
    void selectCourse(QString courseID);

private slots:
    void on_pushButton_clicked();
    void closeTo();

private:
    Ui::FourthDialog *ui;
};

#endif // FOURTHDIALOG_H
>>>>>>> final version
