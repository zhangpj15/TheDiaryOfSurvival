/********************************************************************************
** Form generated from reading UI file 'end.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_END_H
#define UI_END_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_end
{
public:
    QPushButton *btnYes;
    QPushButton *btnNo;
    QLabel *lblPoint;

    void setupUi(QWidget *end)
    {
        if (end->objectName().isEmpty())
            end->setObjectName(QStringLiteral("end"));
        end->resize(400, 300);
        btnYes = new QPushButton(end);
        btnYes->setObjectName(QStringLiteral("btnYes"));
        btnYes->setGeometry(QRect(30, 180, 158, 42));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        btnYes->setFont(font);
        btnYes->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#3A3A3A;\n"
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
        btnNo = new QPushButton(end);
        btnNo->setObjectName(QStringLiteral("btnNo"));
        btnNo->setGeometry(QRect(210, 180, 158, 42));
        btnNo->setFont(font);
        btnNo->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#3A3A3A;\n"
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
        lblPoint = new QLabel(end);
        lblPoint->setObjectName(QStringLiteral("lblPoint"));
        lblPoint->setGeometry(QRect(20, 60, 361, 71));
        QPalette palette;
        QBrush brush(QColor(90, 90, 90, 255));
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
        lblPoint->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font1.setPointSize(34);
        lblPoint->setFont(font1);
        lblPoint->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#5A5A5A;\n"
"border-radius: 7px;\n"
"\n"
"}"));
        lblPoint->setAlignment(Qt::AlignCenter);

        retranslateUi(end);

        QMetaObject::connectSlotsByName(end);
    } // setupUi

    void retranslateUi(QWidget *end)
    {
        end->setWindowTitle(QApplication::translate("end", "Form", Q_NULLPTR));
        btnYes->setText(QApplication::translate("end", "YES", Q_NULLPTR));
        btnNo->setText(QApplication::translate("end", "NO", Q_NULLPTR));
        lblPoint->setText(QApplication::translate("end", "Wanna quit?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class end: public Ui_end {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_H
