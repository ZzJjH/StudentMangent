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
    void delStu(int num);//传入要删除的学生学号
private slots:
    void on_exit_btn_clicked();

    void on_del_btn_clicked();

private:
    Ui::deletenewwindow *ui;
};

#endif // DELETENEWWINDOW_H
