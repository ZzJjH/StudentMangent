/********************************************************************************
** Form generated from reading UI file 'deletenewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETENEWWINDOW_H
#define UI_DELETENEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletenewwindow
{
public:
    QWidget *centralwidget;
    QPushButton *del_btn;
    QPushButton *exit_btn;
    QLabel *label;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *deletenewwindow)
    {
        if (deletenewwindow->objectName().isEmpty())
            deletenewwindow->setObjectName(QString::fromUtf8("deletenewwindow"));
        deletenewwindow->resize(800, 600);
        centralwidget = new QWidget(deletenewwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        del_btn = new QPushButton(centralwidget);
        del_btn->setObjectName(QString::fromUtf8("del_btn"));
        del_btn->setGeometry(QRect(160, 250, 75, 23));
        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setGeometry(QRect(280, 250, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 200, 131, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 200, 81, 22));
        deletenewwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(deletenewwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        deletenewwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(deletenewwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        deletenewwindow->setStatusBar(statusbar);

        retranslateUi(deletenewwindow);

        QMetaObject::connectSlotsByName(deletenewwindow);
    } // setupUi

    void retranslateUi(QMainWindow *deletenewwindow)
    {
        deletenewwindow->setWindowTitle(QCoreApplication::translate("deletenewwindow", "MainWindow", nullptr));
        del_btn->setText(QCoreApplication::translate("deletenewwindow", "\347\241\256\345\256\232\345\210\240\351\231\244", nullptr));
        exit_btn->setText(QCoreApplication::translate("deletenewwindow", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("deletenewwindow", "\350\257\267\351\200\211\346\213\251\350\246\201\345\210\240\351\231\244\347\232\204\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletenewwindow: public Ui_deletenewwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETENEWWINDOW_H
