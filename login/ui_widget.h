/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QRadioButton *womanradioButton;
    QLineEdit *passwordline;
    QLabel *username;
    QLineEdit *usernameline;
    QLabel *passwordlabel;
    QPushButton *checkButton;
    QLineEdit *mailboxline;
    QLabel *mailboxlabel;
    QLineEdit *rPasswordline;
    QLabel *tellabel;
    QLabel *rPasswordlabel;
    QLabel *label;
    QLineEdit *telline;
    QSpacerItem *horizontalSpacer;
    QPushButton *loadButton;
    QPushButton *loginButton;
    QRadioButton *manradioButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(364, 268);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        womanradioButton = new QRadioButton(Widget);
        womanradioButton->setObjectName(QStringLiteral("womanradioButton"));

        gridLayout->addWidget(womanradioButton, 5, 3, 1, 1);

        passwordline = new QLineEdit(Widget);
        passwordline->setObjectName(QStringLiteral("passwordline"));

        gridLayout->addWidget(passwordline, 1, 2, 1, 2);

        username = new QLabel(Widget);
        username->setObjectName(QStringLiteral("username"));

        gridLayout->addWidget(username, 0, 0, 1, 1);

        usernameline = new QLineEdit(Widget);
        usernameline->setObjectName(QStringLiteral("usernameline"));

        gridLayout->addWidget(usernameline, 0, 2, 1, 2);

        passwordlabel = new QLabel(Widget);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));

        gridLayout->addWidget(passwordlabel, 1, 0, 1, 1);

        checkButton = new QPushButton(Widget);
        checkButton->setObjectName(QStringLiteral("checkButton"));

        gridLayout->addWidget(checkButton, 0, 4, 1, 1);

        mailboxline = new QLineEdit(Widget);
        mailboxline->setObjectName(QStringLiteral("mailboxline"));

        gridLayout->addWidget(mailboxline, 3, 2, 1, 2);

        mailboxlabel = new QLabel(Widget);
        mailboxlabel->setObjectName(QStringLiteral("mailboxlabel"));

        gridLayout->addWidget(mailboxlabel, 3, 0, 1, 1);

        rPasswordline = new QLineEdit(Widget);
        rPasswordline->setObjectName(QStringLiteral("rPasswordline"));

        gridLayout->addWidget(rPasswordline, 2, 2, 1, 2);

        tellabel = new QLabel(Widget);
        tellabel->setObjectName(QStringLiteral("tellabel"));

        gridLayout->addWidget(tellabel, 4, 0, 1, 1);

        rPasswordlabel = new QLabel(Widget);
        rPasswordlabel->setObjectName(QStringLiteral("rPasswordlabel"));

        gridLayout->addWidget(rPasswordlabel, 2, 0, 1, 2);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        telline = new QLineEdit(Widget);
        telline->setObjectName(QStringLiteral("telline"));

        gridLayout->addWidget(telline, 4, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 1, 1, 1);

        loadButton = new QPushButton(Widget);
        loadButton->setObjectName(QStringLiteral("loadButton"));

        gridLayout->addWidget(loadButton, 7, 3, 1, 1);

        loginButton = new QPushButton(Widget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        gridLayout->addWidget(loginButton, 7, 0, 1, 2);

        manradioButton = new QRadioButton(Widget);
        manradioButton->setObjectName(QStringLiteral("manradioButton"));

        gridLayout->addWidget(manradioButton, 5, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        womanradioButton->setText(QApplication::translate("Widget", "\345\245\263", 0));
        username->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", 0));
        passwordlabel->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", 0));
        checkButton->setText(QApplication::translate("Widget", "\346\243\200\346\237\245\347\224\250\346\210\267\345\220\215", 0));
        mailboxlabel->setText(QApplication::translate("Widget", "\351\202\256\347\256\261", 0));
        tellabel->setText(QApplication::translate("Widget", "\346\211\213\346\234\272", 0));
        rPasswordlabel->setText(QApplication::translate("Widget", "\351\207\215\345\244\215\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("Widget", "\346\200\247\345\210\253", 0));
        loadButton->setText(QApplication::translate("Widget", "\347\233\264\346\216\245\347\231\273\351\231\206", 0));
        loginButton->setText(QApplication::translate("Widget", "\345\220\214\346\204\217\346\263\250\345\206\214", 0));
        manradioButton->setText(QApplication::translate("Widget", "\347\224\267", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
