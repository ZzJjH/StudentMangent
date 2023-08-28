#ifndef MODIFYWINDOW_H
#define MODIFYWINDOW_H

#include <QMainWindow>

namespace Ui {
class modifywindow;
}

class modifywindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit modifywindow(QWidget *parent = nullptr);
    ~modifywindow();


    Ui::modifywindow *ui;

signals:
    void modstu(QString name,int stunum,QString sex,QString stuclass,double gpa,QString modi);
private slots:
    void on_StuNumlineEdit_textChanged(const QString &arg1);
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
};

#endif // MODIFYWINDOW_H
