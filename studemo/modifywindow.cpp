#include "modifywindow.h"
#include "ui_modifywindow.h"
#include"QDebug"
#include"QSqlQuery"
#include"QSqlError"
#include"QSqlDatabase"
#include<mainwindow.h>
#include<QMessageBox>
modifywindow::modifywindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::modifywindow)
{
    ui->setupUi(this);
    ui->showmodwidget->hide();//
}

modifywindow::~modifywindow()
{
    delete ui;
}

void modifywindow::on_StuNumlineEdit_textChanged(const QString &arg1)//?
{
      QString a = ui->StuNumlineEdit->text();//获取要修改的学生学号

            qDebug()<<"进入筛选";
           ui->modStulabel->clear();//初始化
           QSqlQuery query;
           QString sqlSelect =QString("select * from Student where stuNumber=%1;").arg(a);


                   if(!query.exec(sqlSelect))
                   {
                       qDebug()<<"查询数据失败";
                   }
           while(query.next())
               {
                       QString temp="姓名：";
                     QString name =query.value("name").toString();
                       temp.append(name).append("  学号：");
                       //qDebug()<<"name = "<<name;stuNumber,sex,class,gpa
                     QString stuNumber =query.value("stuNumber").toString();
                       temp.append(stuNumber).append("  性别：");
                     QString sex =query.value("sex").toString();
                       temp.append(sex).append("  班级：");
                    QString stuclass =query.value("class").toString();
                       temp.append(stuclass).append("  绩点：");
                     QString gpa =query.value("gpa").toString();
                       temp.append(gpa);
                    ui->modStulabel->setText(temp);

               }
           if(!(ui->modStulabel->text().isEmpty()))
               {
                    ui->showmodwidget->show();
               }
       }


void modifywindow::on_pushButton_3_clicked()
{
               close();
}


void modifywindow::on_pushButton_clicked()
{
   QString name =ui->namelineEdit->text();
   int stunum =ui->stunumlineEdit->text().toInt();
   QString sex =ui->sexlineEdit->text();
   QString stuclass=ui->classlineEdit->text();
   double gpa =ui->gpalineEdit->text().toDouble();
   QString modi=ui->StuNumlineEdit->text();
   emit modstu(name,stunum,sex,stuclass,gpa,modi);
   this->close();
   QMessageBox::information(this,"提示","修改成功");
}

