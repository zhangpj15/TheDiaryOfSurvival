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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loadwin
{
public:
    QGridLayout *gridLayout;
    QLabel *usernamelabel;
    QLineEdit *userline;
    QLabel *pwlabel;
    QLineEdit *pwline;
    QPushButton *loadButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;

    void setupUi(QWidget *loadwin)
    {
        if (loadwin->objectName().isEmpty())
            loadwin->setObjectName(QStringLiteral("loadwin"));
        loadwin->resize(300, 254);
        gridLayout = new QGridLayout(loadwin);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        usernamelabel = new QLabel(loadwin);
        usernamelabel->setObjectName(QStringLiteral("usernamelabel"));

        gridLayout->addWidget(usernamelabel, 0, 0, 1, 1);

        userline = new QLineEdit(loadwin);
        userline->setObjectName(QStringLiteral("userline"));

        gridLayout->addWidget(userline, 0, 1, 1, 2);

        pwlabel = new QLabel(loadwin);
        pwlabel->setObjectName(QStringLiteral("pwlabel"));

        gridLayout->addWidget(pwlabel, 1, 0, 1, 1);

        pwline = new QLineEdit(loadwin);
        pwline->setObjectName(QStringLiteral("pwline"));

        gridLayout->addWidget(pwline, 1, 1, 1, 2);

        loadButton = new QPushButton(loadwin);
        loadButton->setObjectName(QStringLiteral("loadButton"));

        gridLayout->addWidget(loadButton, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        exitButton = new QPushButton(loadwin);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        gridLayout->addWidget(exitButton, 2, 2, 1, 1);


        retranslateUi(loadwin);
        QObject::connect(exitButton, SIGNAL(clicked()), loadwin, SLOT(close()));

        QMetaObject::connectSlotsByName(loadwin);
    } // setupUi

    void retranslateUi(QWidget *loadwin)
    {
        loadwin->setWindowTitle(QApplication::translate("loadwin", "Form", 0));
        usernamelabel->setText(QApplication::translate("loadwin", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        pwlabel->setText(QApplication::translate("loadwin", "\345\257\206\347\240\201\357\274\232", 0));
        loadButton->setText(QApplication::translate("loadwin", "\347\231\273\351\231\206", 0));
        exitButton->setText(QApplication::translate("loadwin", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class loadwin: public Ui_loadwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADWIN_H
