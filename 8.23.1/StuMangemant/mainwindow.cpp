#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->hide();
    m_dlgLogin.show();
    auto a =[=](){
        this->show();
        m_dlgLogin.hide();
    };
    connect(&m_dlgLogin,&Page_Login::sendLoginSuccess,this,a);

}

MainWindow::~MainWindow()
{
    delete ui;
}

