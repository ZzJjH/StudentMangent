#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<addnewwindow.h>
#include"deletenewwindow.h"
#include<modifywindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //创建三个窗口，用户在主界面点击添加、删除、修改后显示
    addnewwindow * addWindow =new addnewwindow;
    deletenewwindow *delWindow =new deletenewwindow;
    modifywindow *modWindow =new modifywindow;

private slots:
    void on_addbtn_clicked();

    void on_deletebtn_clicked();

    void on_modifybtn_clicked();

    //自定义槽，添加学生信息
    void AddStu(QString name,int num,QString sex,QString stuclass,double gpa);

    //自定义槽，按照学号删除学生信息
    void DelStu(int num);

    //自定义槽，修改学生信息，modi用于接受待修改学生的原本学号
    void ModStu(QString name,int stunum,QString sex,QString stuclass,double gpa,QString modi);


    //在主界面配合comboBox筛选学生
    void on_screenlineEdit_textChanged(const QString &arg1);

    //主界面""显示所有学生"按钮
    void on_showbtn_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
