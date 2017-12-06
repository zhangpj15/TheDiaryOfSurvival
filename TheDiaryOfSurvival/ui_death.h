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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_death
{
public:

    void setupUi(QWidget *death)
    {
        if (death->objectName().isEmpty())
            death->setObjectName(QStringLiteral("death"));
        death->resize(400, 300);

        retranslateUi(death);

        QMetaObject::connectSlotsByName(death);
    } // setupUi

    void retranslateUi(QWidget *death)
    {
        death->setWindowTitle(QApplication::translate("death", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class death: public Ui_death {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEATH_H
