#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql/QSqlDatabase>//
#include<QtSql/QSqlQuery>//
#include<addnewwindow.h>//
#include"deletenewwindow.h"//
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

    addnewwindow * addWindow =new addnewwindow;
    deletenewwindow *delWindow =new deletenewwindow;
    modifywindow *modWindow =new modifywindow;

private slots:
    void on_addbtn_clicked();
    void AddStu(QString name,int num,QString sex,QString stuclass,double gpa);//自定义槽
    void DelStu(int num);//自定义槽
    void ModStu(QString name,int stunum,QString sex,QString stuclass,double gpa,QString modi);

    void on_deletebtn_clicked();

    void on_modifybtn_clicked();

    void on_screenlineEdit_textChanged(const QString &arg1);

    void on_showbtn_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
