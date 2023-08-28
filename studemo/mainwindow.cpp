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

    //1、需要在头文件中包含#include<QtSql/QSqlDatabase>，并且创建db对象
    db =QSqlDatabase::addDatabase("QSQLITE");//添加一个数据库驱动
    db.setDatabaseName("Student.db");//数据库名称

    //2、打开数据库
    if(!db.open())
    {
        qDebug()<<"打开数据库失败"<<db.lastError();
    }
    else{qDebug()<<"打开数据库成功";}

    //3、创建表
#if 0
    QSqlQuery query;
            //Student:姓名，学号，性别，班级，绩点
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
    QSqlQueryModel * model =new QSqlQueryModel;
    //执行sql语句//将查询出的结果转化成model对象
    model->setQuery("select name,stuNumber,sex,class,gpa from Student");
    //根据需求设置表头信息
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(4,Qt::Horizontal,"绩点");
    //给ui控件设置一个模型
    ui->tableView->setModel(model);//相当于将数据联动到UI控件


    //运行不了connect(addWindow,&addnewwindow::addStu,this,&MainWindow::AddStu);
    //含参的信号和槽函数连接
    void(addnewwindow::* a)(QString,int,QString,QString,double) =&addnewwindow::addStu;
    void(MainWindow::* b)(QString,int,QString,QString,double) =&MainWindow::AddStu;
    connect(addWindow,a,this,b);

    void(deletenewwindow::*c)(int)=&deletenewwindow::delStu;
    void(MainWindow::*d)(int)=&MainWindow::DelStu;
    connect(delWindow,c,this,d);

    void(modifywindow::*e)(QString name,int stunum,QString sex,QString stuclass,double gpa,QString modi)=&modifywindow::modstu;
    void(MainWindow::*f)(QString name,int stunum,QString sex,QString stuclass,double gpa,QString modi)=&MainWindow::ModStu;
    connect(modWindow,e,this,f);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addbtn_clicked()
{
    //打开一个新窗口用来输入要添加的学生数据

    addWindow->show();

//        //1、获取UI控件内容
//        QString name =ui->NamelineEdit->text();
//        QString address=ui->AddresslineEdit->text();
//        QString salary =ui->SalarylineEdit->text();
//        QString age =ui->AgelineEdit->text();
//        //2、数据库方式插入
//        QSqlQuery query;//接口
//        QString sqlInsert = QString("insert into staff(name,age,address,salary)"
//                                      "values('%1',%2,'%3',%4);").arg(name).
//                            arg(age.toInt()).
//                            arg(address).
//                            arg(salary.toInt());
//        //1查询数据库数据
//        if(!query.exec(sqlInsert))
//        {
//            qDebug()<<"插入数据"<<db.lastError();
    //        }
}

void MainWindow::AddStu(QString name, int num, QString sex, QString stuclass, double gpa)
{
    /*1插入数据库2显示数据3关闭新窗口4弹出修改成功*/
   // qDebug()<<"添加成功";//测试

    //数据库方式插入
    QSqlQuery query;//接口
    QString sqlInsert = QString("insert into Student(name,stuNumber,sex,class,gpa)"
                                  "values('%1',%2,'%3','%4',%5);").arg(name).
                        arg(num).
                        arg(sex).
                        arg(stuclass).
                        arg(gpa);
    //插入数据库数据
    if(!query.exec(sqlInsert))
    {
        qDebug()<<"插入数据失败"<<db.lastError();
    }


    //在Ui界面的表格显示数据
    QSqlQueryModel * model =new QSqlQueryModel;
    //执行sql语句//将查询出的结果转化成model对象
    model->setQuery("select name,stuNumber,sex,class,gpa from Student");
    //根据需求设置表头信息
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(3,Qt::Horizontal,"绩点");
    //给ui控件设置一个模型
    ui->tableView->setModel(model);//相当于将数据联动到UI控件

    addWindow->close();
    QMessageBox::information(this,"提示","添加成功");




}

void MainWindow::DelStu(int num)
{
        //1、删除数据库记录
        QSqlQuery query;//接口
    qDebug()<<"第二"<<"要删除的学生学号是"<<num;
        QString sqlDelete = QString("delete from Student where stuNumber = %1;").arg(num);
            if(!query.exec(sqlDelete))
        {
        qDebug()<<"删除数据失败"<<db.lastError();
        }

        //2、显示UI控件内容
        QSqlQueryModel * model =new QSqlQueryModel;
        //执行sql语句//将查询出的结果转化成model对象
        model->setQuery("select name,stuNumber,sex,class,gpa from Student");
        //根据需求设置表头信息
        model->setHeaderData(0,Qt::Horizontal,"姓名");
        model->setHeaderData(1,Qt::Horizontal,"学号");
        model->setHeaderData(2,Qt::Horizontal,"性别");
        model->setHeaderData(3,Qt::Horizontal,"班级");
        model->setHeaderData(3,Qt::Horizontal,"绩点");
        //给ui控件设置一个模型
        ui->tableView->setModel(model);//相当于将数据联动到UI控件
}

void MainWindow::ModStu(QString name, int stunum, QString sex, QString stuclass, double gpa,QString modi)
{

    QSqlQuery query;//接口
   //name,stuNumber,sex,class,gpa
    QString sqlUpdate = QString("update Student set name = '%1',stuNumber=%2,sex='%3',class='%4',gpa=%5 where stuNumber =%6;")
                            .arg(name).arg(stunum).arg(sex).arg(stuclass).arg(gpa).arg(modi.toInt());
    if(!query.exec(sqlUpdate))
    {
    qDebug()<<"更新数据失败"<<db.lastError();
    }else{qDebug()<<"修改信息成功";}

    QSqlQueryModel * model =new QSqlQueryModel;
    //执行sql语句//将查询出的结果转化成model对象
    model->setQuery("select name,stuNumber,sex,class,gpa from Student");
    //根据需求设置表头信息
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(4,Qt::Horizontal,"绩点");
    //给ui控件设置一个模型
    ui->tableView->setModel(model);//相当于将数据联动到UI控件

}


void MainWindow::on_deletebtn_clicked()
{
    //1、更新数据
            //1、打开数据库
            QSqlDatabase db;
            db.close();
            db =QSqlDatabase::addDatabase("QSQLITE");//添加一个数据库驱动
            db.setDatabaseName("Student.db");//数据库名称


            if(!db.open())
            {
                qDebug()<<"打开数据库失败";
            }
            else{qDebug()<<"打开数据库成功";}
            //2、将学号显示在combobox控件上
            QSqlQueryModel * model =new QSqlQueryModel;
            //    //执行sql语句//将查询出的结果转化成model对象
            model->setQuery("select stuNumber from Student");   //选出学号
            delWindow->ui->comboBox->setModel(model);
          //  comboBox->setModel(model);//控件从model中获得数据
    //2、显示新窗口
    delWindow->show();


}


void MainWindow::on_modifybtn_clicked()
{
   modWindow->show();

//   QString a = modWindow->ui->StuNumlineEdit->text();

//        qDebug()<<"进入筛选";
//   while(!a.isEmpty())
//    {
//        modWindow->ui->label_2->clear();
//       QSqlQuery query;
//       QString sqlSelect =QString("select * from Student where stuNumber=%1;").arg(a);


//               if(!query.exec(sqlSelect))
//               {
//                   qDebug()<<"查询数据失败"<<db.lastError();
//               }
//       while(query.next())
//           {
//                   QString temp="姓名：";
//                 QString name =query.value("name").toString();
//                   temp.append(name).append("  学号：");
//                   //qDebug()<<"name = "<<name;stuNumber,sex,class,gpa
//                 QString stuNumber =query.value("stuNumber").toString();
//                   temp.append(stuNumber).append("  性别：");
//                 QString sex =query.value("sex").toString();
//                   temp.append(sex).append("  班级：");
//                QString stuclass =query.value("class").toString();
//                   temp.append(stuclass).append("  绩点：");
//                 QString gpa =query.value("gpa").toString();
//                   temp.append(gpa);
//                modWindow->ui->label_2->setText(temp);

//           }
//   }





}


void MainWindow::on_screenlineEdit_textChanged(const QString &arg1)//筛选
{
   QString a;//获得筛选信息
   QString b;//存储筛选出的信息
   QSqlQueryModel * model =new QSqlQueryModel;
   QString temp =ui->comboBox->currentText();//获得筛选类目

   if(temp=="学号")
   {
    a=ui->screenlineEdit->text();//获得筛选信息
    qDebug()<<"按照学号筛选";
    b =QString("select name,stuNumber,sex,class,gpa from Student where stuNumber = %1;").arg(a);
    model->setQuery(b);
   }else if(temp=="姓名")
   {
    a=ui->screenlineEdit->text();//获得筛选信息
    qDebug()<<"按照姓名筛选";
    b =QString("select name,stuNumber,sex,class,gpa from Student where name = '%1';").arg(a);
    model->setQuery(b);
   }else if(temp=="性别")
   {
    a=ui->screenlineEdit->text();//获得筛选信息
    qDebug()<<"按照性别筛选";
    b =QString("select name,stuNumber,sex,class,gpa from Student where sex = '%1';").arg(a);
    model->setQuery(b);
   }else if(temp=="班级")
   {
    a=ui->screenlineEdit->text();//获得筛选信息
    qDebug()<<"按照班级筛选";
    b =QString("select name,stuNumber,sex,class,gpa from Student where class = '%1';").arg(a);
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


void MainWindow::on_showbtn_clicked()
{
    QSqlQueryModel * model =new QSqlQueryModel;
    model->setQuery("select name,stuNumber,sex,class,gpa from Student");
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"学号");
    model->setHeaderData(2,Qt::Horizontal,"性别");
    model->setHeaderData(3,Qt::Horizontal,"班级");
    model->setHeaderData(4,Qt::Horizontal,"绩点");
    ui->tableView->setModel(model);
}

