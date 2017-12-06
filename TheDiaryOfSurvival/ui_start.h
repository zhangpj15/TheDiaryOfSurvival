/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
    QPushButton *btnEnter;
    QPushButton *btnInfo;
    QLabel *label_3;
    QPushButton *btnClose;
    QLabel *label;
    QPushButton *btnRegis;
    QLabel *Background;

    void setupUi(QWidget *start)
    {
        if (start->objectName().isEmpty())
            start->setObjectName(QStringLiteral("start"));
        start->resize(751, 475);
        btnEnter = new QPushButton(start);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setGeometry(QRect(50, 130, 241, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        btnEnter->setFont(font);
        btnEnter->setCursor(QCursor(Qt::CrossCursor));
        btnEnter->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 14px;\n"
"background-color: rgb(50, 112, 169);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"background-color: rgb(70, 132, 189);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#FFFFFF;\n"
"background-color:rgb(60, 129, 175);\n"
"}"));
        btnInfo = new QPushButton(start);
        btnInfo->setObjectName(QStringLiteral("btnInfo"));
        btnInfo->setGeometry(QRect(100, 240, 131, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        btnInfo->setFont(font1);
        btnInfo->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"background-color: rgb(75, 204, 46);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"background-color: rgb(95, 224, 66);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#FFFFFF;\n"
"background-color:rgb(85, 214, 56);\n"
"}"));
        label_3 = new QLabel(start);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 5, 361, 41));
        label_3->setStyleSheet(QStringLiteral("background-image: url(:/type/res/config/ico/titleIcon.png);"));
        btnClose = new QPushButton(start);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(100, 390, 131, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        btnClose->setFont(font2);
        btnClose->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"background-color: rgb(243, 45, 24);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"background-color: rgb(255, 65, 44);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#FFFFFF;\n"
"background-color:rgb(243, 55, 34);\n"
"}"));
        label = new QLabel(start);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 451, 71));
        QFont font3;
        font3.setFamily(QStringLiteral("Perpetua"));
        font3.setPointSize(42);
        label->setFont(font3);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 14px;\n"
"background-color: rgb(0, 0, 0);\n"
"}"));
        label->setScaledContents(false);
        btnRegis = new QPushButton(start);
        btnRegis->setObjectName(QStringLiteral("btnRegis"));
        btnRegis->setGeometry(QRect(100, 310, 131, 41));
        btnRegis->setFont(font2);
        btnRegis->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"background-color: rgb(243, 45, 24);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"background-color: rgb(255, 65, 44);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#FFFFFF;\n"
"background-color:rgb(243, 55, 34);\n"
"}"));
        Background = new QLabel(start);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(0, 0, 781, 551));
        Background->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background-color:rgb(250,250,250);\n"
"border: 2px solid #0F0F0F;\n"
"border-radius: 9px;\n"
"}"));
        Background->setFrameShadow(QFrame::Sunken);
        Background->setPixmap(QPixmap(QString::fromUtf8(":/res/config/ico/background.jpg")));
        Background->setScaledContents(true);
        Background->raise();
        btnEnter->raise();
        btnInfo->raise();
        label_3->raise();
        btnClose->raise();
        label->raise();
        btnRegis->raise();

        retranslateUi(start);

        QMetaObject::connectSlotsByName(start);
    } // setupUi

    void retranslateUi(QWidget *start)
    {
        start->setWindowTitle(QApplication::translate("start", "Form", 0));
        btnEnter->setText(QApplication::translate("start", "START GAME", 0));
        btnInfo->setText(QApplication::translate("start", "\345\205\263\344\272\216", 0));
        label_3->setText(QString());
        btnClose->setText(QApplication::translate("start", "\351\200\200 \345\207\272", 0));
        label->setText(QApplication::translate("start", "The Diary of Survival", 0));
        btnRegis->setText(QApplication::translate("start", "\346\263\250\345\206\214", 0));
        Background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class start: public Ui_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
