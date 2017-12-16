/********************************************************************************
** Form generated from reading UI file 'death.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEATH_H
#define UI_DEATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_death
{
public:
    QLabel *lblPoint;
    QPushButton *btnRestart;

    void setupUi(QWidget *death)
    {
        if (death->objectName().isEmpty())
            death->setObjectName(QStringLiteral("death"));
        death->resize(400, 300);
        lblPoint = new QLabel(death);
        lblPoint->setObjectName(QStringLiteral("lblPoint"));
        lblPoint->setGeometry(QRect(30, 70, 321, 71));
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
        lblPoint->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font.setPointSize(34);
        lblPoint->setFont(font);
        lblPoint->setStyleSheet(QLatin1String("QLabel{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"border-radius: 7px;\n"
"\n"
"}"));
        lblPoint->setAlignment(Qt::AlignCenter);
        btnRestart = new QPushButton(death);
        btnRestart->setObjectName(QStringLiteral("btnRestart"));
        btnRestart->setGeometry(QRect(110, 160, 158, 42));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        btnRestart->setFont(font1);
        btnRestart->setStyleSheet(QLatin1String("QPushButton{\n"
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

        retranslateUi(death);

        QMetaObject::connectSlotsByName(death);
    } // setupUi

    void retranslateUi(QWidget *death)
    {
        death->setWindowTitle(QApplication::translate("death", "Form", 0));
        lblPoint->setText(QApplication::translate("death", "Game over", 0));
        btnRestart->setText(QApplication::translate("death", "RESTART", 0));
    } // retranslateUi

};

namespace Ui {
    class death: public Ui_death {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEATH_H
