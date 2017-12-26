/********************************************************************************
** Form generated from reading UI file 'regis.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIS_H
#define UI_REGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
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
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *username;
    QLabel *mailboxlabel;
    QLabel *tellabel;
    QLabel *rPasswordlabel;
    QLabel *passwordlabel_2;
    QLabel *passwordlabel;
    QFrame *verticalFrame_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *usernameline;
    QLineEdit *mailboxline;
    QLineEdit *telline;
    QLineEdit *passwordline;
    QLineEdit *rPasswordline;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *manradioButton;
    QRadioButton *womanradioButton;
    QPushButton *returnButton;
    QPushButton *loginButton;
    QPushButton *loadButton;

    void setupUi(QWidget *regis)
    {
        if (regis->objectName().isEmpty())
            regis->setObjectName(QStringLiteral("regis"));
        regis->resize(800, 600);
        label = new QLabel(regis);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 801, 601));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/main5.jpg")));
        label->setScaledContents(true);
        checkButton = new QPushButton(regis);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(570, 120, 111, 51));
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
        verticalFrame = new QFrame(regis);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setGeometry(QRect(100, 120, 201, 291));
        verticalLayout_2 = new QVBoxLayout(verticalFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        username = new QLabel(verticalFrame);
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

        mailboxlabel = new QLabel(verticalFrame);
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

        tellabel = new QLabel(verticalFrame);
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

        rPasswordlabel = new QLabel(verticalFrame);
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

        passwordlabel_2 = new QLabel(verticalFrame);
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

        passwordlabel = new QLabel(verticalFrame);
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

        verticalFrame_2 = new QFrame(regis);
        verticalFrame_2->setObjectName(QStringLiteral("verticalFrame_2"));
        verticalFrame_2->setGeometry(QRect(330, 120, 241, 241));
        verticalLayout_3 = new QVBoxLayout(verticalFrame_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        usernameline = new QLineEdit(verticalFrame_2);
        usernameline->setObjectName(QStringLiteral("usernameline"));
        usernameline->setFont(font);

        verticalLayout_3->addWidget(usernameline);

        mailboxline = new QLineEdit(verticalFrame_2);
        mailboxline->setObjectName(QStringLiteral("mailboxline"));
        mailboxline->setFont(font);

        verticalLayout_3->addWidget(mailboxline);

        telline = new QLineEdit(verticalFrame_2);
        telline->setObjectName(QStringLiteral("telline"));
        telline->setFont(font);

        verticalLayout_3->addWidget(telline);

        passwordline = new QLineEdit(verticalFrame_2);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        passwordline->setFont(font);

        verticalLayout_3->addWidget(passwordline);

        rPasswordline = new QLineEdit(verticalFrame_2);
        rPasswordline->setObjectName(QStringLiteral("rPasswordline"));
        rPasswordline->setFont(font);

        verticalLayout_3->addWidget(rPasswordline);

        horizontalFrame = new QFrame(regis);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(330, 360, 239, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(-1, 1, -1, -1);
        manradioButton = new QRadioButton(horizontalFrame);
        manradioButton->setObjectName(QStringLiteral("manradioButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        manradioButton->setFont(font1);

        horizontalLayout_2->addWidget(manradioButton);

        womanradioButton = new QRadioButton(horizontalFrame);
        womanradioButton->setObjectName(QStringLiteral("womanradioButton"));
        womanradioButton->setFont(font1);
        womanradioButton->setCheckable(true);
        womanradioButton->setChecked(false);
        womanradioButton->setAutoRepeat(false);

        horizontalLayout_2->addWidget(womanradioButton);

        returnButton = new QPushButton(regis);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(10, 20, 184, 52));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
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
        loginButton = new QPushButton(regis);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(70, 470, 184, 52));
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
        loadButton = new QPushButton(regis);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(270, 470, 184, 52));
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

        retranslateUi(regis);

        QMetaObject::connectSlotsByName(regis);
    } // setupUi

    void retranslateUi(QWidget *regis)
    {
        regis->setWindowTitle(QApplication::translate("regis", "Form", Q_NULLPTR));
        label->setText(QString());
        checkButton->setText(QApplication::translate("regis", "CHECK", Q_NULLPTR));
        username->setText(QApplication::translate("regis", "USER NAME", Q_NULLPTR));
        mailboxlabel->setText(QApplication::translate("regis", "E-MAIL", Q_NULLPTR));
        tellabel->setText(QApplication::translate("regis", "PHONE", Q_NULLPTR));
        rPasswordlabel->setText(QApplication::translate("regis", "CODE", Q_NULLPTR));
        passwordlabel_2->setText(QApplication::translate("regis", "REPEAT CODE", Q_NULLPTR));
        passwordlabel->setText(QApplication::translate("regis", "SEX", Q_NULLPTR));
        manradioButton->setText(QApplication::translate("regis", "MALE", Q_NULLPTR));
        womanradioButton->setText(QApplication::translate("regis", "FEMALE", Q_NULLPTR));
        returnButton->setText(QApplication::translate("regis", "RETURN", Q_NULLPTR));
        loginButton->setText(QApplication::translate("regis", "REGISTER", Q_NULLPTR));
        loadButton->setText(QApplication::translate("regis", "LOGIN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class regis: public Ui_regis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIS_H
