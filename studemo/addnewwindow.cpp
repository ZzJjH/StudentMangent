#include "addnewwindow.h"
#include "ui_addnewwindow.h"
#include<QDebug>
#include <mainwindow.h>
addnewwindow::addnewwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addnewwindow)
{
    ui->setupUi(this);
}

addnewwindow::~addnewwindow()
{
    delete ui;
}

void addnewwindow::on_NotOkbtn_clicked()
{
    this->close();

}


void addnewwindow::on_Okbtn_clicked()
{
    //qDebug()<<"点击OK";
    //获取添加学生信息
    QString name = ui->nametextEdit->toPlainText();
    int number = ui->stunumbertextEdit->toPlainText().toInt();
    QString sex = ui->sextextEdit->toPlainText();
    QString stuclass = ui->classtextEdit->toPlainText();
    double gpa = ui->gpatextEdit->toPlainText().toDouble();

    //清空用户输入信息，避免用户下一次添加显示之前的信息
    ui->nametextEdit->clear();
    ui->stunumbertextEdit->clear();
    ui->sextextEdit->clear();
    ui->classtextEdit->clear();
    ui->gpatextEdit->clear();

    emit addnewwindow::addStu(name,number,sex,stuclass,gpa);
    //qDebug()<<name<<number<<sex<<stuclass<<gpa;
}

