#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QtSql/QSqlQueryModel>
#include<QDebug>
#include<QSqlError>
#include<QTableView>
#include<QMessageBox>
#include"addnewwindow.h"
#include"deletenewwindow.h"
#include"ui_deletenewwindow.h"
#include<ui_modifywindow.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //1、连接SQLites数据库
    db = QSqlDatabase::addDatabase("QSQLITE");//添加一个数据库驱动
    db.setDatabaseName("Student.db");//数据库名称

    //2、打开数据库
    if(!db.open())
    {
        qDebug()<<"打开数据库失败"<<db.lastError();
    }
    else{qDebug()<<"打开数据库成功";}

    //3、创建表（只用创建一次）
    //表名Student：name stuNumber sex class gpa
#if 0
    QSqlQuery query;
    QString sqlCreateTable = QString("create table Student(id integer primary key autoincrement,"
                                     "name varchar(20),"
                                     "stuNumber int,"
                                     "sex varchar(1),"
                                     "class varchar(20),"
                                     "gpa double);");
    if(!query.exec(sqlCreateTable))
    {
        qDebug()<<"创建表失败"<<db.lastError();
    }
    else
    {
        qDebug()<<"创建表成功";
    }
#endif

    //4、在Ui界面的表格显示数据
    //4.1将查询出的结果转化成model对象
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("select name,stuNumber,sex,class,gpa from Student");
    //4.2设置表头信息
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(4,Qt::Horizontal,"绩点");
    //4.3传参并显示
    ui->tableView->setModel(model);


    //用户在add窗口输入待添加学生信息后，将信息提交至数据库并更新主窗口表
    void(addnewwindow::* a)(QString,int,QString,QString,double) = &addnewwindow::addStu;
    void(MainWindow::* b)(QString,int,QString,QString,double) = &MainWindow::AddStu;
    connect(addWindow,a,this,b);

    //用户在del窗口选择要删除的学生学号，槽函数将对应该学生的信息在数据库中删除并更新主窗口表
    void(deletenewwindow::*c)(int) = &deletenewwindow::delStu;
    void(MainWindow::*d)(int) = &MainWindow::DelStu;
    connect(delWindow,c,this,d);

    //用户提供待修改学生学号modi，以及修改后的学生信息，槽函数将信息传输给数据库
    void(modifywindow::*e)(QString name,int stunum,QString sex,QString stuclass,double gpa,QString modi) = &modifywindow::modstu;
    void(MainWindow::*f)(QString name,int stunum,QString sex,QString stuclass,double gpa,QString modi) = &MainWindow::ModStu;
    connect(modWindow,e,this,f);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addbtn_clicked()
{
    addWindow->show();
}

//添加功能的槽函数
/*1插入数据库2显示数据3关闭新窗口4弹出修改成功*/
void MainWindow::AddStu(QString name, int num, QString sex, QString stuclass, double gpa)
{   
   // qDebug()<<"添加成功";//测试

    //1、数据库方式插入
    QSqlQuery query;//接口
    QString sqlInsert = QString("insert into Student(name,stuNumber,sex,class,gpa)"
                                  "values('%1',%2,'%3','%4',%5);").arg(name).
                        arg(num).
                        arg(sex).
                        arg(stuclass).
                        arg(gpa);

    //2、插入数据库数据
    if(!query.exec(sqlInsert))
    {
        qDebug()<<"插入数据失败"<<db.lastError();
    }

    //3、在Ui界面的表格显示数据
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("select name,stuNumber,sex,class,gpa from Student");

    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(3,Qt::Horizontal,"绩点");

    ui->tableView->setModel(model);//相当于将数据联动到UI控件

    //4、提示用户添加成功
    addWindow->close();
    QMessageBox::information(this,"提示","添加成功");




}

//删除功能槽函数
void MainWindow::DelStu(int num)
{
        //1、删除数据库记录
        QSqlQuery query;//接口
        //qDebug()<<"第二"<<"要删除的学生学号是"<<num;
        QString sqlDelete = QString("delete from Student where stuNumber = %1;").arg(num);
            if(!query.exec(sqlDelete))
            {
            qDebug()<<"删除数据失败"<<db.lastError();
            }

        //2、更新表
        QSqlQueryModel * model =new QSqlQueryModel;

        model->setQuery("select name,stuNumber,sex,class,gpa from Student");

        model->setHeaderData(0,Qt::Horizontal,"姓名");
        model->setHeaderData(1,Qt::Horizontal,"学号");
        model->setHeaderData(2,Qt::Horizontal,"性别");
        model->setHeaderData(3,Qt::Horizontal,"班级");
        model->setHeaderData(3,Qt::Horizontal,"绩点");

        ui->tableView->setModel(model);
}

//修改用户数据槽函数
void MainWindow::ModStu(QString name, int stunum, QString sex, QString stuclass, double gpa,QString modi)
{
    //1、修改数据库中数据name,stuNumber,sex,class,gpa
    QSqlQuery query;

    QString sqlUpdate = QString("update Student set name = '%1',stuNumber=%2,sex='%3',class='%4',gpa=%5 where stuNumber =%6;")
                            .arg(name).arg(stunum).arg(sex).arg(stuclass).arg(gpa).arg(modi.toInt());
    if(!query.exec(sqlUpdate))
        {
        qDebug()<<"更新数据失败"<<db.lastError();
        }
    //else{qDebug()<<"修改信息成功";}

    //2、更新表
    QSqlQueryModel * model = new QSqlQueryModel;

    model->setQuery("select name,stuNumber,sex,class,gpa from Student");

    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(4,Qt::Horizontal,"绩点");

    ui->tableView->setModel(model);//相当于将数据联动到UI控件

}


void MainWindow::on_deletebtn_clicked()
{
    //1、更新数据，防止用户修改、添加过数据导致窗口的学生信息不完整
    QSqlDatabase db;
    db.close();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Student.db");

    if(!db.open())
    {
        qDebug()<<"打开数据库失败";
    }
    else{qDebug()<<"打开数据库成功";}

    //2、将学号显示在combobox控件上让用户选择待删除的学生学号
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("select stuNumber from Student");
    delWindow->ui->comboBox->setModel(model);
    //comboBox->setModel(model);//控件从model中获得数据

    delWindow->show();


}

void MainWindow::on_modifybtn_clicked()
{
   modWindow->show();
}

//筛选功能槽函数
/*参数    a:获得筛选信息; b:存储筛选出的信息; temp:获得筛选类目*/
void MainWindow::on_screenlineEdit_textChanged(const QString &arg1)//筛选
{
   QString a;//获得筛选信息
   QString b;//存储筛选出的信息
   QString temp = ui->comboBox->currentText();//获得筛选类目
   QSqlQueryModel * model = new QSqlQueryModel;

   //先判断筛选类目（学号，姓名，性别，班级），再检索筛选信息
   if(temp == "学号")
   {
    a = ui->screenlineEdit->text();
    //qDebug()<<"按照学号筛选";
    b = QString("select name,stuNumber,sex,class,gpa from Student where stuNumber = %1;").arg(a);
    model->setQuery(b);
   }

   else if(temp == "姓名")
   {
    a = ui->screenlineEdit->text();
    //qDebug()<<"按照姓名筛选";
    b = QString("select name,stuNumber,sex,class,gpa from Student where name = '%1';").arg(a);
    model->setQuery(b);
   }

   else if(temp == "性别")
   {
    a = ui->screenlineEdit->text();
   //qDebug()<<"按照性别筛选";
    b = QString("select name,stuNumber,sex,class,gpa from Student where sex = '%1';").arg(a);
    model->setQuery(b);
   }

   else if(temp=="班级")
   {
    a = ui->screenlineEdit->text();
    //qDebug()<<"按照班级筛选";
    b = QString("select name,stuNumber,sex,class,gpa from Student where class = '%1';").arg(a);
    model->setQuery(b);
   }

    //显示筛选出的信息
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(4,Qt::Horizontal,"绩点");
    ui->tableView->setModel(model);//相当于将数据联动到UI控件

}

//显示所有学生信息
void MainWindow::on_showbtn_clicked()
{
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("select name,stuNumber,sex,class,gpa from Student");
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(4,Qt::Horizontal,"绩点");
    ui->tableView->setModel(model);
}

