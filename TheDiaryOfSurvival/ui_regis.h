/********************************************************************************
** Form generated from reading UI file 'regis.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIS_H
#define UI_REGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regis
{
public:
    QLineEdit *mailboxline;
    QLineEdit *rPasswordline;
    QLabel *username;
    QPushButton *checkButton;
    QLabel *label;
    QPushButton *loginButton;
    QLabel *tellabel;
    QLineEdit *telline;
    QRadioButton *womanradioButton;
    QPushButton *loadButton;
    QLineEdit *passwordline;
    QLineEdit *usernameline;
    QRadioButton *manradioButton;
    QLabel *passwordlabel;
    QLabel *mailboxlabel;
    QLabel *rPasswordlabel;

    void setupUi(QWidget *regis)
    {
        if (regis->objectName().isEmpty())
            regis->setObjectName(QStringLiteral("regis"));
        regis->resize(400, 300);
        regis->setAutoFillBackground(true);
        mailboxline = new QLineEdit(regis);
        mailboxline->setObjectName(QStringLiteral("mailboxline"));
        mailboxline->setGeometry(QRect(140, 143, 142, 21));
        rPasswordline = new QLineEdit(regis);
        rPasswordline->setObjectName(QStringLiteral("rPasswordline"));
        rPasswordline->setGeometry(QRect(140, 110, 142, 21));
        username = new QLabel(regis);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(40, 37, 45, 28));
        checkButton = new QPushButton(regis);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(289, 37, 93, 28));
        label = new QLabel(regis);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 209, 45, 20));
        loginButton = new QPushButton(regis);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(40, 241, 93, 28));
        tellabel = new QLabel(regis);
        tellabel->setObjectName(QStringLiteral("tellabel"));
        tellabel->setGeometry(QRect(40, 176, 45, 21));
        telline = new QLineEdit(regis);
        telline->setObjectName(QStringLiteral("telline"));
        telline->setGeometry(QRect(140, 176, 142, 21));
        womanradioButton = new QRadioButton(regis);
        womanradioButton->setObjectName(QStringLiteral("womanradioButton"));
        womanradioButton->setGeometry(QRect(189, 209, 93, 19));
        loadButton = new QPushButton(regis);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(189, 241, 93, 28));
        passwordline = new QLineEdit(regis);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        passwordline->setGeometry(QRect(140, 77, 142, 21));
        usernameline = new QLineEdit(regis);
        usernameline->setObjectName(QStringLiteral("usernameline"));
        usernameline->setGeometry(QRect(140, 40, 142, 21));
        manradioButton = new QRadioButton(regis);
        manradioButton->setObjectName(QStringLiteral("manradioButton"));
        manradioButton->setGeometry(QRect(140, 209, 42, 19));
        passwordlabel = new QLabel(regis);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));
        passwordlabel->setGeometry(QRect(40, 77, 45, 21));
        mailboxlabel = new QLabel(regis);
        mailboxlabel->setObjectName(QStringLiteral("mailboxlabel"));
        mailboxlabel->setGeometry(QRect(40, 143, 45, 21));
        rPasswordlabel = new QLabel(regis);
        rPasswordlabel->setObjectName(QStringLiteral("rPasswordlabel"));
        rPasswordlabel->setGeometry(QRect(40, 110, 93, 21));

        retranslateUi(regis);

        QMetaObject::connectSlotsByName(regis);
    } // setupUi

    void retranslateUi(QWidget *regis)
    {
        regis->setWindowTitle(QApplication::translate("regis", "Form", 0));
        username->setText(QApplication::translate("regis", "\347\224\250\346\210\267\345\220\215", 0));
        checkButton->setText(QApplication::translate("regis", "\346\243\200\346\237\245\347\224\250\346\210\267\345\220\215", 0));
        label->setText(QApplication::translate("regis", "\346\200\247\345\210\253", 0));
        loginButton->setText(QApplication::translate("regis", "\345\220\214\346\204\217\346\263\250\345\206\214", 0));
        tellabel->setText(QApplication::translate("regis", "\346\211\213\346\234\272", 0));
        womanradioButton->setText(QApplication::translate("regis", "\345\245\263", 0));
        loadButton->setText(QApplication::translate("regis", "\347\233\264\346\216\245\347\231\273\351\231\206", 0));
        manradioButton->setText(QApplication::translate("regis", "\347\224\267", 0));
        passwordlabel->setText(QApplication::translate("regis", "\345\257\206\347\240\201", 0));
        mailboxlabel->setText(QApplication::translate("regis", "\351\202\256\347\256\261", 0));
        rPasswordlabel->setText(QApplication::translate("regis", "\351\207\215\345\244\215\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class regis: public Ui_regis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIS_H
