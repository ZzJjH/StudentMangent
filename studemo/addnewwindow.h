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
    //自定义添加信号，传入一个学生所有信息
    void addStu(QString name,int num,QString sex,QString stuclass,double gpa);

private slots:
    void on_NotOkbtn_clicked();

    void on_Okbtn_clicked();

private:
    Ui::addnewwindow *ui;

};

#endif // ADDNEWWINDOW_H
