/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *showbtn;
    QPushButton *deletebtn;
    QPushButton *addbtn;
    QPushButton *modifybtn;
    QTableView *tableView;
    QComboBox *comboBox;
    QLineEdit *screenlineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        showbtn = new QPushButton(centralwidget);
        showbtn->setObjectName(QString::fromUtf8("showbtn"));
        showbtn->setGeometry(QRect(540, 60, 121, 23));
        deletebtn = new QPushButton(centralwidget);
        deletebtn->setObjectName(QString::fromUtf8("deletebtn"));
        deletebtn->setGeometry(QRect(540, 110, 121, 23));
        addbtn = new QPushButton(centralwidget);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));
        addbtn->setGeometry(QRect(540, 160, 121, 23));
        modifybtn = new QPushButton(centralwidget);
        modifybtn->setObjectName(QString::fromUtf8("modifybtn"));
        modifybtn->setGeometry(QRect(540, 210, 121, 23));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 20, 511, 251));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 290, 69, 22));
        screenlineEdit = new QLineEdit(centralwidget);
        screenlineEdit->setObjectName(QString::fromUtf8("screenlineEdit"));
        screenlineEdit->setGeometry(QRect(210, 290, 113, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        showbtn->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\211\200\346\234\211\345\255\246\347\224\237\346\225\260\346\215\256", nullptr));
        deletebtn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        addbtn->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        modifybtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
