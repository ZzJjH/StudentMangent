#include "page_login.h"
#include "ui_page_login.h"

Page_Login::Page_Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_Login)
{
    ui->setupUi(this);
    this->setFixedSize(400,240);//将登录界面大小固定
}

Page_Login::~Page_Login()
{
    delete ui;
}




void Page_Login::on_btn_Login_clicked()
{
    emit sendLoginSuccess();//信号


}


void Page_Login::on_btn_Exit_clicked()
{
    exit(0);//退出
}

