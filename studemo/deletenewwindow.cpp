#include "deletenewwindow.h"
#include "ui_deletenewwindow.h"
#include<QSqlDatabase>
#include<QSqlQueryModel>
#include <QSqlRecord>
#include<QDebug>
#include<mainwindow.h>
#include<QTableView>
deletenewwindow::deletenewwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::deletenewwindow)
{
    ui->setupUi(this);
//    //1、打开数据库
//    QSqlDatabase db;
//    db.close();
//    db =QSqlDatabase::addDatabase("QSQLITE");//添加一个数据库驱动
//    db.setDatabaseName("Student.db");//数据库名称


//    if(!db.open())
//    {
//        qDebug()<<"打开数据库失败";
//    }
//    else{qDebug()<<"打开数据库成功";}
//    //2、将学号显示在combobox控件上
//    QSqlQueryModel * model =new QSqlQueryModel;
//    //    //执行sql语句//将查询出的结果转化成model对象
//    model->setQuery("select stuNumber from Student");   //选出学号
//    ui->comboBox->setModel(model);//控件从model中获得数据

    /*测试
    QTableView * tableview =new QTableView;
    tableview->setFixedSize(QSize(this->width(),this->height()));
    tableview->setModel(model);//相当于将数据联动到UI控件
    tableview->show();*/

}

deletenewwindow::~deletenewwindow()
{
    delete ui;
}

void deletenewwindow::on_exit_btn_clicked()
{
    this->close();
}


void deletenewwindow::on_del_btn_clicked()
{
    //1、获得用户选择要删除的学生学号
    int num = ui->comboBox->currentText().toInt();
    //int num = ui->comboBox->currentData().toInt();
    qDebug()<<"要删除的学生学号是"<<num;
    //2、发出信号让数据库删除并显示在主窗口ui
    emit delStu(num);
}

