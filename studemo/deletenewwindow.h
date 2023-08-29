#ifndef DELETENEWWINDOW_H
#define DELETENEWWINDOW_H

#include <QMainWindow>

namespace Ui {
class deletenewwindow;
}

class deletenewwindow : public QMainWindow
{
    Q_OBJECT
    friend class MainWindow;

public:
    explicit deletenewwindow(QWidget *parent = nullptr);
    ~deletenewwindow();

signals:
    //自定义删除信号，传入要删除的学生学号
    void delStu(int num);
private slots:
    void on_exit_btn_clicked();
    void on_del_btn_clicked();

private:
    Ui::deletenewwindow *ui;
};

#endif // DELETENEWWINDOW_H
