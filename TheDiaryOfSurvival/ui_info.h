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
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *infoBackground;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *infoClose;

    void setupUi(QWidget *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QStringLiteral("info"));
        info->resize(400, 300);
        label_13 = new QLabel(info);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 140, 31, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_13->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_13->setFont(font);
        label_7 = new QLabel(info);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 97, 51, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_7->setFont(font1);
        label_6 = new QLabel(info);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 97, 31, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette1);
        label_6->setFont(font);
        label_5 = new QLabel(info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 97, 51, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_5->setPalette(palette2);
        label_5->setFont(font);
        label_12 = new QLabel(info);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 118, 81, 21));
        label_12->setFont(font1);
        label_3 = new QLabel(info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 24, 231, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_9 = new QLabel(info);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 118, 31, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_9->setPalette(palette3);
        label_9->setFont(font);
        label_11 = new QLabel(info);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(290, 118, 31, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_11->setPalette(palette4);
        label_11->setFont(font);
        infoBackground = new QLabel(info);
        infoBackground->setObjectName(QStringLiteral("infoBackground"));
        infoBackground->setGeometry(QRect(0, 0, 400, 300));
        infoBackground->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"background-color:rgb(250,250,250);\n"
"border: 2px solid #0F0F0F;\n"
"border-radius: 9px;\n"
"}"));
        infoBackground->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(info);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 140, 71, 21));
        label_14->setFont(font1);
        label_10 = new QLabel(info);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 118, 91, 21));
        label_10->setFont(font1);
        label_8 = new QLabel(info);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 97, 51, 21));
        label_8->setFont(font1);
        infoClose = new QPushButton(info);
        infoClose->setObjectName(QStringLiteral("infoClose"));
        infoClose->setGeometry(QRect(160, 240, 281, 42));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        infoClose->setFont(font3);
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
"border:1px solid rgb(77, 176, 251);\n"
"color:#aaaaaa;\n"
"\n"
"}"));
        infoBackground->raise();
        label_13->raise();
        label_7->raise();
        label_6->raise();
        label_5->raise();
        label_12->raise();
        label_3->raise();
        label_9->raise();
        label_11->raise();
        label_14->raise();
        label_10->raise();
        label_8->raise();
        infoClose->raise();

        retranslateUi(info);

        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QWidget *info)
    {
        info->setWindowTitle(QApplication::translate("info", "Form", 0));
        label_13->setText(QApplication::translate("info", "\347\251\272\346\240\274", 0));
        label_7->setText(QApplication::translate("info", "\347\247\273\345\212\250\357\274\232", 0));
        label_6->setText(QApplication::translate("info", "J", 0));
        label_5->setText(QApplication::translate("info", "WADS", 0));
        label_12->setText(QApplication::translate("info", "\351\200\200\345\207\272\346\270\270\346\210\217\357\274\232", 0));
        label_3->setText(QApplication::translate("info", "A Group", 0));
        label_9->setText(QApplication::translate("info", "K", 0));
        label_11->setText(QApplication::translate("info", "Q", 0));
        infoBackground->setText(QString());
        label_14->setText(QApplication::translate("info", "\346\232\202\345\201\234/\347\273\247\347\273\255\357\274\232", 0));
        label_10->setText(QApplication::translate("info", "\345\210\207\346\215\242\346\224\273\345\207\273\346\250\241\345\274\217\357\274\232", 0));
        label_8->setText(QApplication::translate("info", "\346\224\273\345\207\273\357\274\232", 0));
        infoClose->setText(QApplication::translate("info", "CLOSE", 0));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
