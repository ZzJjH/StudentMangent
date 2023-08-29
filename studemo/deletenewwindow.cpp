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
    //qDebug()<<"要删除的学生学号是"<<num;
    //2、发出信号让数据库删除并显示在主窗口ui
    emit delStu(num);
}

