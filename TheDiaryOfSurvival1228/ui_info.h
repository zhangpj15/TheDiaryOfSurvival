/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *infoBackground;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *infoClose;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QWidget *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QStringLiteral("info"));
        info->resize(500, 360);
        label_7 = new QLabel(info);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 110, 80, 40));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"color:#5a5a5a;\n"
"}"));
        label_6 = new QLabel(info);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 160, 31, 41));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette);
        label_6->setFont(font);
        label_5 = new QLabel(info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 110, 81, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_5->setPalette(palette1);
        label_5->setFont(font);
        label_3 = new QLabel(info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 30, 331, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"color:#6a6a6a;\n"
"}"));
        label_9 = new QLabel(info);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 110, 91, 40));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_9->setPalette(palette2);
        label_9->setFont(font);
        infoBackground = new QLabel(info);
        infoBackground->setObjectName(QStringLiteral("infoBackground"));
        infoBackground->setGeometry(QRect(0, 0, 500, 360));
        infoBackground->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background-color:rgba(250,250,220,70%);\n"
"border:2px #2a2a2a;\n"
"border-radius: 10px;\n"
"\n"
"}"));
        infoBackground->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(info);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 110, 91, 40));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"color:#5a5a5a;\n"
"}"));
        label_8 = new QLabel(info);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 160, 151, 41));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"color:#5a5a5a;\n"
"}"));
        infoClose = new QPushButton(info);
        infoClose->setObjectName(QStringLiteral("infoClose"));
        infoClose->setGeometry(QRect(180, 280, 131, 42));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        infoClose->setFont(font2);
        infoClose->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:rgb(0, 0, 0);\n"
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
"border:0px solid rgb(77, 176, 251);\n"
"color:#aaaaaa;\n"
"\n"
"}"));
        label_11 = new QLabel(info);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(260, 160, 91, 40));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"color:#5a5a5a;\n"
"}"));
        label_12 = new QLabel(info);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(330, 160, 91, 40));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_12->setPalette(palette3);
        label_12->setFont(font);
        label_13 = new QLabel(info);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(60, 210, 91, 40));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"color:#5a5a5a;\n"
"}"));
        label_14 = new QLabel(info);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(160, 210, 41, 40));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_14->setPalette(palette4);
        label_14->setFont(font);
        label_15 = new QLabel(info);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(260, 210, 111, 40));
        label_15->setFont(font);
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"color:#5a5a5a;\n"
"}"));
        label_16 = new QLabel(info);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(380, 210, 101, 40));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_16->setPalette(palette5);
        label_16->setFont(font);
        infoBackground->raise();
        label_7->raise();
        label_6->raise();
        label_5->raise();
        label_3->raise();
        label_9->raise();
        label_10->raise();
        label_8->raise();
        infoClose->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();

        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QWidget *info)
    {
        info->setWindowTitle(QApplication::translate("info", "Form", 0));
        label_7->setText(QApplication::translate("info", "Moving:", 0));
        label_6->setText(QApplication::translate("info", "J", 0));
        label_5->setText(QApplication::translate("info", "W-S-A-D", 0));
        label_3->setText(QApplication::translate("info", "BRIEF GUIDE", 0));
        label_9->setText(QApplication::translate("info", "U-I-O", 0));
        infoBackground->setText(QString());
        label_10->setText(QApplication::translate("info", "Skill Mode:", 0));
        label_8->setText(QApplication::translate("info", "Normal Attack\357\274\232", 0));
        infoClose->setText(QApplication::translate("info", "CLOSE", 0));
        label_11->setText(QApplication::translate("info", "Pause:", 0));
        label_12->setText(QApplication::translate("info", "space", 0));
        label_13->setText(QApplication::translate("info", "Quit Game:", 0));
        label_14->setText(QApplication::translate("info", "Q", 0));
        label_15->setText(QApplication::translate("info", "Aquire Skill:", 0));
        label_16->setText(QApplication::translate("info", "click button", 0));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
