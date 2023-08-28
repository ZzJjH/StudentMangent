/********************************************************************************
** Form generated from reading UI file 'modifywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYWINDOW_H
#define UI_MODIFYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifywindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *StuNumlineEdit;
    QLabel *modStulabel;
    QPushButton *pushButton_3;
    QWidget *showmodwidget;
    QGridLayout *gridLayout;
    QLineEdit *classlineEdit;
    QLineEdit *stunumlineEdit;
    QLabel *label_8;
    QLineEdit *sexlineEdit;
    QLineEdit *gpalineEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *namelineEdit;
    QLabel *label_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *modifywindow)
    {
        if (modifywindow->objectName().isEmpty())
            modifywindow->setObjectName(QString::fromUtf8("modifywindow"));
        modifywindow->resize(880, 317);
        centralwidget = new QWidget(modifywindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 181, 16));
        StuNumlineEdit = new QLineEdit(centralwidget);
        StuNumlineEdit->setObjectName(QString::fromUtf8("StuNumlineEdit"));
        StuNumlineEdit->setGeometry(QRect(220, 40, 113, 21));
        modStulabel = new QLabel(centralwidget);
        modStulabel->setObjectName(QString::fromUtf8("modStulabel"));
        modStulabel->setGeometry(QRect(60, 90, 771, 51));
        modStulabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(680, 20, 75, 23));
        showmodwidget = new QWidget(centralwidget);
        showmodwidget->setObjectName(QString::fromUtf8("showmodwidget"));
        showmodwidget->setGeometry(QRect(20, 150, 857, 89));
        gridLayout = new QGridLayout(showmodwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        classlineEdit = new QLineEdit(showmodwidget);
        classlineEdit->setObjectName(QString::fromUtf8("classlineEdit"));

        gridLayout->addWidget(classlineEdit, 1, 7, 1, 1);

        stunumlineEdit = new QLineEdit(showmodwidget);
        stunumlineEdit->setObjectName(QString::fromUtf8("stunumlineEdit"));

        gridLayout->addWidget(stunumlineEdit, 1, 3, 1, 1);

        label_8 = new QLabel(showmodwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 8, 1, 1);

        sexlineEdit = new QLineEdit(showmodwidget);
        sexlineEdit->setObjectName(QString::fromUtf8("sexlineEdit"));

        gridLayout->addWidget(sexlineEdit, 1, 5, 1, 1);

        gpalineEdit = new QLineEdit(showmodwidget);
        gpalineEdit->setObjectName(QString::fromUtf8("gpalineEdit"));

        gridLayout->addWidget(gpalineEdit, 1, 9, 1, 1);

        label_5 = new QLabel(showmodwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        label_6 = new QLabel(showmodwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 4, 1, 1);

        label_7 = new QLabel(showmodwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 6, 1, 1);

        label_4 = new QLabel(showmodwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        namelineEdit = new QLineEdit(showmodwidget);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        gridLayout->addWidget(namelineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(showmodwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 3);

        pushButton = new QPushButton(showmodwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 3);

        modifywindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(modifywindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 880, 21));
        modifywindow->setMenuBar(menubar);
        statusbar = new QStatusBar(modifywindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        modifywindow->setStatusBar(statusbar);

        retranslateUi(modifywindow);

        QMetaObject::connectSlotsByName(modifywindow);
    } // setupUi

    void retranslateUi(QMainWindow *modifywindow)
    {
        modifywindow->setWindowTitle(QCoreApplication::translate("modifywindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("modifywindow", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        StuNumlineEdit->setText(QString());
        modStulabel->setText(QCoreApplication::translate("modifywindow", "\345\276\205\346\230\276\347\244\272\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("modifywindow", "\351\200\200\345\207\272", nullptr));
        label_8->setText(QCoreApplication::translate("modifywindow", "\347\273\251\347\202\271", nullptr));
        label_5->setText(QCoreApplication::translate("modifywindow", "\345\255\246\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("modifywindow", "\346\200\247\345\210\253", nullptr));
        label_7->setText(QCoreApplication::translate("modifywindow", "\347\217\255\347\272\247", nullptr));
        label_4->setText(QCoreApplication::translate("modifywindow", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("modifywindow", "\350\257\267\350\276\223\345\205\245\350\257\245\345\255\246\347\224\237\344\277\256\346\224\271\345\220\216\347\232\204\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("modifywindow", "\347\241\256\345\256\232\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
class modifywindow: public Ui_modifywindow {private slots:
    void on_pushButton_clicked();
};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYWINDOW_H
