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
    QPushButton *btnRank;

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
        Background->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/main1.jpg")));
        Background->setScaledContents(true);
        Background->setWordWrap(false);
        btnEnter = new QPushButton(start);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setGeometry(QRect(540, 300, 172, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        btnEnter->setFont(font1);
        btnEnter->setCursor(QCursor(Qt::ArrowCursor));
        btnEnter->setContextMenuPolicy(Qt::DefaultContextMenu);
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
        btnClose->setGeometry(QRect(540, 480, 151, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setUnderline(true);
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
        btnInfo->setGeometry(QRect(540, 360, 101, 50));
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
        btnLogin->setGeometry(QRect(540, 130, 81, 52));
        btnLogin->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        btnLogin->setFont(font3);
        btnLogin->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 1px;\n"
"color:#5A5A5A;\n"
"border-radius: 5px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 1px;\n"
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
        btnRegis->setGeometry(QRect(540, 210, 131, 52));
        btnRegis->setMinimumSize(QSize(124, 0));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(26);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        btnRegis->setFont(font4);
        btnRegis->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 1px;\n"
"color:#5A5A5A;\n"
"border-radius: 5px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 1px;\n"
"color:#aaaaaa;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#aaaaaa;\n"
"\n"
"}"));
        btnRank = new QPushButton(start);
        btnRank->setObjectName(QStringLiteral("btnRank"));
        btnRank->setGeometry(QRect(540, 420, 131, 50));
        btnRank->setMinimumSize(QSize(0, 0));
        btnRank->setFont(font1);
        btnRank->setStyleSheet(QLatin1String("QPushButton{\n"
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
        btnClose->setText(QApplication::translate("start", "QUIT GAME", Q_NULLPTR));
        btnInfo->setText(QApplication::translate("start", "ABOUT", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("start", "Login", Q_NULLPTR));
        btnRegis->setText(QApplication::translate("start", "Register", Q_NULLPTR));
        btnRank->setText(QApplication::translate("start", "RANKING", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class start: public Ui_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
