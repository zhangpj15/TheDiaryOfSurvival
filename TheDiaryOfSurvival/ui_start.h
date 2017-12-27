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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_start
{
public:
    QLabel *Background;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnLogin;
    QPushButton *btnRegis;
    QPushButton *btnInfo;
    QPushButton *btnRank;
    QPushButton *btnClose;
    QPushButton *btnEnter;
    QLabel *label;

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
        Background->setPixmap(QPixmap(QString::fromUtf8("../../../test/TheDiaryOfSurvival/res/img/background/bg11.jpg")));
        Background->setScaledContents(true);
        Background->setWordWrap(false);
        verticalLayoutWidget = new QWidget(start);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 210, 261, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnLogin = new QPushButton(verticalLayoutWidget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setMinimumSize(QSize(124, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        btnLogin->setFont(font1);
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

        verticalLayout->addWidget(btnLogin);

        btnRegis = new QPushButton(verticalLayoutWidget);
        btnRegis->setObjectName(QStringLiteral("btnRegis"));
        btnRegis->setMinimumSize(QSize(124, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        btnRegis->setFont(font2);
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

        verticalLayout->addWidget(btnRegis);

        btnInfo = new QPushButton(verticalLayoutWidget);
        btnInfo->setObjectName(QStringLiteral("btnInfo"));
        btnInfo->setFont(font1);
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

        verticalLayout->addWidget(btnInfo);

        btnRank = new QPushButton(verticalLayoutWidget);
        btnRank->setObjectName(QStringLiteral("btnRank"));
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

        verticalLayout->addWidget(btnRank);

        btnClose = new QPushButton(verticalLayoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setFont(font1);
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

        verticalLayout->addWidget(btnClose);

        btnEnter = new QPushButton(start);
        btnEnter->setObjectName(QStringLiteral("btnEnter"));
        btnEnter->setGeometry(QRect(490, 470, 251, 71));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        btnEnter->setFont(font3);
        btnEnter->setCursor(QCursor(Qt::CrossCursor));
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
        label = new QLabel(start);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 561, 71));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        label->setPalette(palette);
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(42);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setMouseTracking(true);
        label->setAcceptDrops(false);
        label->setToolTipDuration(-1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"border: 1px;\n"
"color:rgb(255, 255, 255);\n"
"border-radius: 14px;\n"
"\n"
"\n"
"}"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(start);

        QMetaObject::connectSlotsByName(start);
    } // setupUi

    void retranslateUi(QWidget *start)
    {
        start->setWindowTitle(QApplication::translate("start", "Form", 0));
        Background->setText(QString());
        btnLogin->setText(QApplication::translate("start", "Login     ", 0));
        btnRegis->setText(QApplication::translate("start", "Register", 0));
        btnInfo->setText(QApplication::translate("start", "About  ", 0));
        btnRank->setText(QApplication::translate("start", "Rank     ", 0));
        btnClose->setText(QApplication::translate("start", "Quit       ", 0));
        btnEnter->setText(QApplication::translate("start", "START GAME", 0));
        label->setText(QApplication::translate("start", "The Diary of Survival", 0));
    } // retranslateUi

};

namespace Ui {
    class start: public Ui_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
