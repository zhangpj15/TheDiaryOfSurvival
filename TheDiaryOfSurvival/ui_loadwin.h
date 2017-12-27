/********************************************************************************
** Form generated from reading UI file 'loadwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADWIN_H
#define UI_LOADWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loadwin
{
public:
    QLabel *label;
    QLabel *pwlabel;
    QLabel *usernamelabel;
    QLineEdit *userline;
    QLineEdit *pwline;
    QPushButton *loadButton;
    QPushButton *exitButton;
    QLabel *label_2;

    void setupUi(QWidget *loadwin)
    {
        if (loadwin->objectName().isEmpty())
            loadwin->setObjectName(QStringLiteral("loadwin"));
        loadwin->resize(800, 600);
        label = new QLabel(loadwin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 35, 451, 61));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
""));
        pwlabel = new QLabel(loadwin);
        pwlabel->setObjectName(QStringLiteral("pwlabel"));
        pwlabel->setGeometry(QRect(190, 260, 71, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        pwlabel->setFont(font1);
        pwlabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
""));
        usernamelabel = new QLabel(loadwin);
        usernamelabel->setObjectName(QStringLiteral("usernamelabel"));
        usernamelabel->setGeometry(QRect(190, 180, 121, 51));
        usernamelabel->setFont(font1);
        usernamelabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
""));
        userline = new QLineEdit(loadwin);
        userline->setObjectName(QStringLiteral("userline"));
        userline->setGeometry(QRect(330, 185, 239, 42));
        userline->setFont(font1);
        pwline = new QLineEdit(loadwin);
        pwline->setObjectName(QStringLiteral("pwline"));
        pwline->setGeometry(QRect(330, 265, 239, 42));
        pwline->setFont(font1);
        loadButton = new QPushButton(loadwin);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(210, 395, 121, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setItalic(true);
        font2.setUnderline(true);
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
        exitButton = new QPushButton(loadwin);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(440, 395, 101, 51));
        exitButton->setFont(font2);
        exitButton->setStyleSheet(QLatin1String("QPushButton{\n"
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
        label_2 = new QLabel(loadwin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 800, 600));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/bg11.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
        label->raise();
        pwlabel->raise();
        usernamelabel->raise();
        userline->raise();
        pwline->raise();
        loadButton->raise();
        exitButton->raise();

        retranslateUi(loadwin);

        QMetaObject::connectSlotsByName(loadwin);
    } // setupUi

    void retranslateUi(QWidget *loadwin)
    {
        loadwin->setWindowTitle(QApplication::translate("loadwin", "Form", 0));
        label->setText(QApplication::translate("loadwin", "The Diary of Survival", 0));
        pwlabel->setText(QApplication::translate("loadwin", "CODE", 0));
        usernamelabel->setText(QApplication::translate("loadwin", "USERNAME", 0));
        loadButton->setText(QApplication::translate("loadwin", "LOGIN", 0));
        exitButton->setText(QApplication::translate("loadwin", "QUIT", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loadwin: public Ui_loadwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADWIN_H
