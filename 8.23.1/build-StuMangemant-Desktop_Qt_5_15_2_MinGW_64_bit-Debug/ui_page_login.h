/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Login
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *le_passerword;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_user;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_Login;
    QPushButton *btn_Exit;

    void setupUi(QWidget *Page_Login)
    {
        if (Page_Login->objectName().isEmpty())
            Page_Login->setObjectName(QString::fromUtf8("Page_Login"));
        Page_Login->resize(400, 240);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Login->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(Page_Login);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(Page_Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 60));
        label->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        widget_2 = new QWidget(Page_Login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 2);

        le_passerword = new QLineEdit(widget_2);
        le_passerword->setObjectName(QString::fromUtf8("le_passerword"));
        le_passerword->setMaxLength(8);
        le_passerword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(le_passerword, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        le_user = new QLineEdit(widget_2);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setMaxLength(8);

        gridLayout_2->addWidget(le_user, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 0, 2, 0);
        btn_Login = new QPushButton(widget);
        btn_Login->setObjectName(QString::fromUtf8("btn_Login"));
        btn_Login->setMinimumSize(QSize(0, 35));
        QFont font2;
        font2.setPointSize(12);
        btn_Login->setFont(font2);

        gridLayout->addWidget(btn_Login, 0, 0, 1, 1);

        btn_Exit = new QPushButton(widget);
        btn_Exit->setObjectName(QString::fromUtf8("btn_Exit"));
        btn_Exit->setMinimumSize(QSize(0, 35));
        btn_Exit->setFont(font2);

        gridLayout->addWidget(btn_Exit, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(Page_Login);

        QMetaObject::connectSlotsByName(Page_Login);
    } // setupUi

    void retranslateUi(QWidget *Page_Login)
    {
        Page_Login->setWindowTitle(QCoreApplication::translate("Page_Login", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_Login->setToolTip(QCoreApplication::translate("Page_Login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Page_Login", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_3->setText(QCoreApplication::translate("Page_Login", "\345\257\206\347\240\201", nullptr));
        le_passerword->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        le_user->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Page_Login", "\347\224\250\346\210\267", nullptr));
        btn_Login->setText(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        btn_Exit->setText(QCoreApplication::translate("Page_Login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Login: public Ui_Page_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
