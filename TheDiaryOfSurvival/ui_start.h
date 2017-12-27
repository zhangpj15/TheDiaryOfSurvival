/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_start
{
public:
    QLabel *Background;
    QPushButton *btnEnter;
    QPushButton *btnClose;
    QPushButton *btnInfo;
    QPushButton *btnLogin;
    QPushButton *btnRegis;

    void setupUi(QWidget *start)
    {
        if (start->objectName().isEmpty())
            start->setObjectName(QStringLiteral("start"));
        start->resize(800, 600);
        Background = new QLabel(start);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setEnabled(true);
        Background->setGeometry(QRect(0, 0, 800, 600));
        Background->setMaximumSize(QSize(1924, 1084));
        QFont font;
        font.setFamily(QStringLiteral("Academy Engraved LET"));
        font.setItalic(true);
        Background->setFont(font);
        Background->setStyleSheet(QStringLiteral("background-image: url(:/res/img/background/bg1.jpg);"));
        Background->setFrameShadow(QFrame::Sunken);
        Background->setTextFormat(Qt::AutoText);
        Background->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/main8.jpg")));
        Background->setScaledContents(true);
        Background->setWordWrap(false);
        btnEnter = new QPushButton(start);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setGeometry(QRect(270, 310, 251, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        btnEnter->setFont(font1);
        btnEnter->setCursor(QCursor(Qt::ArrowCursor));
        btnEnter->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 14px;\n"
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
        btnClose = new QPushButton(start);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(660, 10, 131, 49));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        btnClose->setFont(font2);
        btnClose->setStyleSheet(QLatin1String("QPushButton{\n"
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
        btnInfo = new QPushButton(start);
        btnInfo->setObjectName(QStringLiteral("btnInfo"));
        btnInfo->setGeometry(QRect(680, 530, 101, 52));
        btnInfo->setFont(font2);
        btnInfo->setStyleSheet(QLatin1String("QPushButton{\n"
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
        btnLogin = new QPushButton(start);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(260, 400, 124, 52));
        btnLogin->setMinimumSize(QSize(124, 0));
        btnLogin->setFont(font2);
        btnLogin->setStyleSheet(QLatin1String("QPushButton{\n"
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
        btnRegis = new QPushButton(start);
        btnRegis->setObjectName(QStringLiteral("btnRegis"));
        btnRegis->setGeometry(QRect(400, 400, 131, 52));
        btnRegis->setMinimumSize(QSize(124, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        btnRegis->setFont(font3);
        btnRegis->setStyleSheet(QLatin1String("QPushButton{\n"
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

        retranslateUi(start);

        QMetaObject::connectSlotsByName(start);
    } // setupUi

    void retranslateUi(QWidget *start)
    {
        start->setWindowTitle(QApplication::translate("start", "Form", Q_NULLPTR));
        Background->setText(QString());
        btnEnter->setText(QApplication::translate("start", "START GAME", Q_NULLPTR));
        btnClose->setText(QApplication::translate("start", "Quit", Q_NULLPTR));
        btnInfo->setText(QApplication::translate("start", "About", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("start", "Login", Q_NULLPTR));
        btnRegis->setText(QApplication::translate("start", "Register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class start: public Ui_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
