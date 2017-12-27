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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regis
{
public:
    QLabel *label;
    QPushButton *checkButton;
    QLabel *title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *username;
    QLabel *mailboxlabel;
    QLabel *tellabel;
    QLabel *rPasswordlabel;
    QLabel *passwordlabel_2;
    QLabel *passwordlabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *usernameline;
    QLineEdit *mailboxline;
    QLineEdit *telline;
    QLineEdit *passwordline;
    QLineEdit *rPasswordline;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *loginButton;
    QPushButton *loadButton;
    QPushButton *returnButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *womanradioButton;
    QRadioButton *manradioButton;

    void setupUi(QWidget *regis)
    {
        if (regis->objectName().isEmpty())
            regis->setObjectName(QStringLiteral("regis"));
        regis->resize(800, 600);
        label = new QLabel(regis);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 801, 601));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/bg11.jpg")));
        label->setScaledContents(true);
        checkButton = new QPushButton(regis);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(620, 140, 111, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        checkButton->setFont(font);
        checkButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#aaaaaa;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#aaaaaa;\n"
"\n"
"}"));
        title = new QLabel(regis);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(230, 20, 491, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        title->setFont(font1);
        title->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
""));
        verticalLayoutWidget = new QWidget(regis);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 130, 201, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(verticalLayoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setFont(font);
        username->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_2->addWidget(username);

        mailboxlabel = new QLabel(verticalLayoutWidget);
        mailboxlabel->setObjectName(QStringLiteral("mailboxlabel"));
        mailboxlabel->setFont(font);
        mailboxlabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_2->addWidget(mailboxlabel);

        tellabel = new QLabel(verticalLayoutWidget);
        tellabel->setObjectName(QStringLiteral("tellabel"));
        tellabel->setFont(font);
        tellabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
""));
        tellabel->setScaledContents(false);

        verticalLayout_2->addWidget(tellabel);

        rPasswordlabel = new QLabel(verticalLayoutWidget);
        rPasswordlabel->setObjectName(QStringLiteral("rPasswordlabel"));
        rPasswordlabel->setFont(font);
        rPasswordlabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_2->addWidget(rPasswordlabel);

        passwordlabel_2 = new QLabel(verticalLayoutWidget);
        passwordlabel_2->setObjectName(QStringLiteral("passwordlabel_2"));
        passwordlabel_2->setFont(font);
        passwordlabel_2->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_2->addWidget(passwordlabel_2);

        passwordlabel = new QLabel(verticalLayoutWidget);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));
        passwordlabel->setFont(font);
        passwordlabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout_2->addWidget(passwordlabel);

        verticalLayoutWidget_2 = new QWidget(regis);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(330, 120, 241, 341));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        usernameline = new QLineEdit(verticalLayoutWidget_2);
        usernameline->setObjectName(QStringLiteral("usernameline"));
        usernameline->setFont(font);

        verticalLayout_3->addWidget(usernameline);

        mailboxline = new QLineEdit(verticalLayoutWidget_2);
        mailboxline->setObjectName(QStringLiteral("mailboxline"));
        mailboxline->setFont(font);

        verticalLayout_3->addWidget(mailboxline);

        telline = new QLineEdit(verticalLayoutWidget_2);
        telline->setObjectName(QStringLiteral("telline"));
        telline->setFont(font);

        verticalLayout_3->addWidget(telline);

        passwordline = new QLineEdit(verticalLayoutWidget_2);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        passwordline->setFont(font);

        verticalLayout_3->addWidget(passwordline);

        rPasswordline = new QLineEdit(verticalLayoutWidget_2);
        rPasswordline->setObjectName(QStringLiteral("rPasswordline"));
        rPasswordline->setFont(font);

        verticalLayout_3->addWidget(rPasswordline);

        verticalLayoutWidget_3 = new QWidget(regis);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(630, 450, 186, 145));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(verticalLayoutWidget_3);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        loginButton->setFont(font2);
        loginButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#aaaaaa;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#aaaaaa;\n"
"\n"
"}"));

        verticalLayout->addWidget(loginButton);

        loadButton = new QPushButton(verticalLayoutWidget_3);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setFont(font2);
        loadButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#aaaaaa;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#aaaaaa;\n"
"\n"
"}"));

        verticalLayout->addWidget(loadButton);

        returnButton = new QPushButton(verticalLayoutWidget_3);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setFont(font2);
        returnButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#aaaaaa;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#aaaaaa;\n"
"\n"
"}"));

        verticalLayout->addWidget(returnButton);

        horizontalLayoutWidget = new QWidget(regis);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(330, 460, 239, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        womanradioButton = new QRadioButton(horizontalLayoutWidget);
        womanradioButton->setObjectName(QStringLiteral("womanradioButton"));
        womanradioButton->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(womanradioButton);

        manradioButton = new QRadioButton(horizontalLayoutWidget);
        manradioButton->setObjectName(QStringLiteral("manradioButton"));
        manradioButton->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(manradioButton);

        label->raise();
        checkButton->raise();
        title->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget_2->raise();
        verticalLayoutWidget_3->raise();
        horizontalLayoutWidget->raise();
        loadButton->raise();

        retranslateUi(regis);

        QMetaObject::connectSlotsByName(regis);
    } // setupUi

    void retranslateUi(QWidget *regis)
    {
        regis->setWindowTitle(QApplication::translate("regis", "Form", 0));
        label->setText(QString());
        checkButton->setText(QApplication::translate("regis", "CHECK", 0));
        title->setText(QApplication::translate("regis", "The Diary of Survival", 0));
        username->setText(QApplication::translate("regis", "USER NAME", 0));
        mailboxlabel->setText(QApplication::translate("regis", "E-MAIL", 0));
        tellabel->setText(QApplication::translate("regis", "PHONE", 0));
        rPasswordlabel->setText(QApplication::translate("regis", "CODE", 0));
        passwordlabel_2->setText(QApplication::translate("regis", "REPEAT CODE", 0));
        passwordlabel->setText(QApplication::translate("regis", "SEX", 0));
        loginButton->setText(QApplication::translate("regis", "REGISTER", 0));
        loadButton->setText(QApplication::translate("regis", "LOGIN", 0));
        returnButton->setText(QApplication::translate("regis", "RETURN", 0));
        manradioButton->setText(QApplication::translate("regis", "MALE", 0));
        womanradioButton->setText(QApplication::translate("regis", "FEMALE", 0));
    } // retranslateUi

};

namespace Ui {
    class regis: public Ui_regis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIS_H
