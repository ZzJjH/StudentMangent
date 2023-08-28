/********************************************************************************
** Form generated from reading UI file 'addnewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWWINDOW_H
#define UI_ADDNEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addnewwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *nametextEdit;
    QTextEdit *stunumbertextEdit;
    QLabel *label_2;
    QTextEdit *sextextEdit;
    QLabel *label_3;
    QTextEdit *classtextEdit;
    QLabel *label_4;
    QTextEdit *gpatextEdit;
    QLabel *label_5;
    QPushButton *Okbtn;
    QPushButton *NotOkbtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addnewwindow)
    {
        if (addnewwindow->objectName().isEmpty())
            addnewwindow->setObjectName(QString::fromUtf8("addnewwindow"));
        addnewwindow->resize(777, 151);
        centralwidget = new QWidget(addnewwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 41, 16));
        nametextEdit = new QTextEdit(centralwidget);
        nametextEdit->setObjectName(QString::fromUtf8("nametextEdit"));
        nametextEdit->setGeometry(QRect(40, 20, 104, 31));
        stunumbertextEdit = new QTextEdit(centralwidget);
        stunumbertextEdit->setObjectName(QString::fromUtf8("stunumbertextEdit"));
        stunumbertextEdit->setGeometry(QRect(200, 20, 104, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 30, 41, 16));
        sextextEdit = new QTextEdit(centralwidget);
        sextextEdit->setObjectName(QString::fromUtf8("sextextEdit"));
        sextextEdit->setGeometry(QRect(370, 20, 104, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 30, 41, 16));
        classtextEdit = new QTextEdit(centralwidget);
        classtextEdit->setObjectName(QString::fromUtf8("classtextEdit"));
        classtextEdit->setGeometry(QRect(530, 20, 104, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 30, 41, 16));
        gpatextEdit = new QTextEdit(centralwidget);
        gpatextEdit->setObjectName(QString::fromUtf8("gpatextEdit"));
        gpatextEdit->setGeometry(QRect(670, 20, 104, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(640, 30, 41, 16));
        Okbtn = new QPushButton(centralwidget);
        Okbtn->setObjectName(QString::fromUtf8("Okbtn"));
        Okbtn->setGeometry(QRect(250, 80, 75, 23));
        NotOkbtn = new QPushButton(centralwidget);
        NotOkbtn->setObjectName(QString::fromUtf8("NotOkbtn"));
        NotOkbtn->setGeometry(QRect(380, 80, 75, 23));
        addnewwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addnewwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 777, 21));
        addnewwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(addnewwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        addnewwindow->setStatusBar(statusbar);

        retranslateUi(addnewwindow);

        QMetaObject::connectSlotsByName(addnewwindow);
    } // setupUi

    void retranslateUi(QMainWindow *addnewwindow)
    {
        addnewwindow->setWindowTitle(QCoreApplication::translate("addnewwindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("addnewwindow", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("addnewwindow", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("addnewwindow", "\346\200\247\345\210\253", nullptr));
        label_4->setText(QCoreApplication::translate("addnewwindow", "\347\217\255\347\272\247", nullptr));
        label_5->setText(QCoreApplication::translate("addnewwindow", "\347\273\251\347\202\271", nullptr));
        Okbtn->setText(QCoreApplication::translate("addnewwindow", "\347\241\256\345\256\232", nullptr));
        NotOkbtn->setText(QCoreApplication::translate("addnewwindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addnewwindow: public Ui_addnewwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWWINDOW_H
