/********************************************************************************
** Form generated from reading UI file 'rank.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANK_H
#define UI_RANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rank
{
public:
    QTableWidget *timeTable;
    QTableWidget *killTable;
    QPushButton *exitBtn;

    void setupUi(QWidget *Rank)
    {
        if (Rank->objectName().isEmpty())
            Rank->setObjectName(QStringLiteral("Rank"));
        Rank->resize(489, 531);
        timeTable = new QTableWidget(Rank);
        if (timeTable->columnCount() < 2)
            timeTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        timeTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        timeTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (timeTable->rowCount() < 5)
            timeTable->setRowCount(5);
        timeTable->setObjectName(QStringLiteral("timeTable"));
        timeTable->setGeometry(QRect(50, 10, 391, 221));
        timeTable->setStyleSheet(QLatin1String("font: 9pt \"Adobe Devanagari\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        timeTable->setRowCount(5);
        timeTable->horizontalHeader()->setStretchLastSection(true);
        killTable = new QTableWidget(Rank);
        if (killTable->columnCount() < 2)
            killTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        killTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        killTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        if (killTable->rowCount() < 5)
            killTable->setRowCount(5);
        killTable->setObjectName(QStringLiteral("killTable"));
        killTable->setGeometry(QRect(50, 250, 391, 221));
        killTable->setStyleSheet(QLatin1String("font: 9pt \"Adobe Devanagari\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        killTable->setRowCount(5);
        killTable->horizontalHeader()->setStretchLastSection(true);
        exitBtn = new QPushButton(Rank);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(280, 480, 184, 43));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        exitBtn->setFont(font);
        exitBtn->setStyleSheet(QLatin1String("QPushButton{\n"
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

        retranslateUi(Rank);

        QMetaObject::connectSlotsByName(Rank);
    } // setupUi

    void retranslateUi(QWidget *Rank)
    {
        Rank->setWindowTitle(QApplication::translate("Rank", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = timeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Rank", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = timeTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Rank", "Longest Survival Time", 0));
        QTableWidgetItem *___qtablewidgetitem2 = killTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Rank", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem3 = killTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Rank", "Largest Kill Number", 0));
        exitBtn->setText(QApplication::translate("Rank", "RETURN", 0));
    } // retranslateUi

};

namespace Ui {
    class Rank: public Ui_Rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANK_H
