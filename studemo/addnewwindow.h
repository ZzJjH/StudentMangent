#ifndef ADDNEWWINDOW_H
#define ADDNEWWINDOW_H

#include <QMainWindow>

namespace Ui {
class addnewwindow;
}

class addnewwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit addnewwindow(QWidget *parent = nullptr);
    ~addnewwindow();

    QString name;
    int num;
    QString sex;
    QString stuclass;
    double gpa;

signals:
    void addStu(QString name,int num,QString sex,QString stuclass,double gpa);//自定义信号

private slots:
    void on_NotOkbtn_clicked();

    void on_Okbtn_clicked();

private:
    Ui::addnewwindow *ui;

};

#endif // ADDNEWWINDOW_H
