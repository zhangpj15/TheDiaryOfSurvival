/********************************************************************************
** Form generated from reading UI file 'loadwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
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
        pwlabel = new QLabel(loadwin);
        pwlabel->setObjectName(QStringLiteral("pwlabel"));
        pwlabel->setGeometry(QRect(200, 365, 71, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        pwlabel->setFont(font);
        pwlabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
""));
        usernamelabel = new QLabel(loadwin);
        usernamelabel->setObjectName(QStringLiteral("usernamelabel"));
        usernamelabel->setGeometry(QRect(200, 305, 121, 51));
        usernamelabel->setFont(font);
        usernamelabel->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}\n"
""));
        userline = new QLineEdit(loadwin);
        userline->setObjectName(QStringLiteral("userline"));
        userline->setGeometry(QRect(340, 310, 239, 42));
        userline->setFont(font);
        pwline = new QLineEdit(loadwin);
        pwline->setObjectName(QStringLiteral("pwline"));
        pwline->setGeometry(QRect(340, 370, 239, 42));
        pwline->setFont(font);
        loadButton = new QPushButton(loadwin);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(330, 450, 121, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        loadButton->setFont(font1);
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
        exitButton->setGeometry(QRect(470, 450, 101, 51));
        exitButton->setFont(font1);
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
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/main8.jpg")));
        label_2->setScaledContents(true);
        label_2->raise();
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
        loadwin->setWindowTitle(QApplication::translate("loadwin", "Form", Q_NULLPTR));
        pwlabel->setText(QApplication::translate("loadwin", "CODE", Q_NULLPTR));
        usernamelabel->setText(QApplication::translate("loadwin", "USERNAME", Q_NULLPTR));
        loadButton->setText(QApplication::translate("loadwin", "LOGIN", Q_NULLPTR));
        exitButton->setText(QApplication::translate("loadwin", "QUIT", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loadwin: public Ui_loadwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADWIN_H
