/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widgetBack;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"url(:/res/img/background/bg2.jpg)\n"
"}"));
        widgetBack = new QWidget(centralWidget);
        widgetBack->setObjectName(QStringLiteral("widgetBack"));
        widgetBack->setGeometry(QRect(0, 0, 800, 600));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetBack->sizePolicy().hasHeightForWidth());
        widgetBack->setSizePolicy(sizePolicy);
        widgetBack->setAutoFillBackground(true);
        widgetBack->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"url(:/res/img/background/bg2.jpg)\n"
"}"));
        label = new QLabel(widgetBack);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 800, 600));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/playbg3.jpg")));
        label->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
