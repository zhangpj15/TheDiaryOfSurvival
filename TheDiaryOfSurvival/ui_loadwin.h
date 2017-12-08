/********************************************************************************
** Form generated from reading UI file 'loadwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADWIN_H
#define UI_LOADWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loadwin
{
public:
    QLabel *pwlabel;
    QPushButton *loadButton;
    QLabel *usernamelabel;
    QLineEdit *pwline;
    QPushButton *exitButton;
    QLineEdit *userline;

    void setupUi(QDialog *loadwin)
    {
        if (loadwin->objectName().isEmpty())
            loadwin->setObjectName(QStringLiteral("loadwin"));
        loadwin->resize(400, 300);
        pwlabel = new QLabel(loadwin);
        pwlabel->setObjectName(QStringLiteral("pwlabel"));
        pwlabel->setGeometry(QRect(50, 135, 93, 21));
        loadButton = new QPushButton(loadwin);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(50, 200, 93, 28));
        usernamelabel = new QLabel(loadwin);
        usernamelabel->setObjectName(QStringLiteral("usernamelabel"));
        usernamelabel->setGeometry(QRect(50, 70, 93, 21));
        pwline = new QLineEdit(loadwin);
        pwline->setObjectName(QStringLiteral("pwline"));
        pwline->setGeometry(QRect(150, 135, 178, 21));
        exitButton = new QPushButton(loadwin);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(235, 200, 93, 28));
        userline = new QLineEdit(loadwin);
        userline->setObjectName(QStringLiteral("userline"));
        userline->setGeometry(QRect(150, 70, 178, 21));

        retranslateUi(loadwin);

        QMetaObject::connectSlotsByName(loadwin);
    } // setupUi

    void retranslateUi(QDialog *loadwin)
    {
        loadwin->setWindowTitle(QApplication::translate("loadwin", "Dialog", 0));
        pwlabel->setText(QApplication::translate("loadwin", "\345\257\206\347\240\201\357\274\232", 0));
        loadButton->setText(QApplication::translate("loadwin", "\347\231\273\351\231\206", 0));
        usernamelabel->setText(QApplication::translate("loadwin", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        exitButton->setText(QApplication::translate("loadwin", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class loadwin: public Ui_loadwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADWIN_H
