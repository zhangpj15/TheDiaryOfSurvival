/********************************************************************************
** Form generated from reading UI file 'end.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_end
{
public:
    QPushButton *btnYes;
    QPushButton *btnNo;

    void setupUi(QWidget *end)
    {
        if (end->objectName().isEmpty())
            end->setObjectName(QStringLiteral("end"));
        end->resize(363, 260);
        btnYes = new QPushButton(end);
        btnYes->setObjectName(QStringLiteral("btnYes"));
        btnYes->setGeometry(QRect(30, 150, 75, 23));
        btnNo = new QPushButton(end);
        btnNo->setObjectName(QStringLiteral("btnNo"));
        btnNo->setGeometry(QRect(210, 160, 75, 23));

        retranslateUi(end);

        QMetaObject::connectSlotsByName(end);
    } // setupUi

    void retranslateUi(QWidget *end)
    {
        end->setWindowTitle(QApplication::translate("end", "Form", 0));
        btnYes->setText(QApplication::translate("end", "Yes", 0));
        btnNo->setText(QApplication::translate("end", "No", 0));
    } // retranslateUi

};

namespace Ui {
    class end: public Ui_end {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_H
