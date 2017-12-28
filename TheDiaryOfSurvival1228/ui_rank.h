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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Rank)
    {
        if (Rank->objectName().isEmpty())
            Rank->setObjectName(QStringLiteral("Rank"));
        Rank->resize(800, 600);
        timeTable = new QTableWidget(Rank);
        if (timeTable->columnCount() < 2)
            timeTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        timeTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        timeTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (timeTable->rowCount() < 10)
            timeTable->setRowCount(10);
        QBrush brush(QColor(250, 250, 220, 127));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(brush);
        timeTable->setItem(0, 0, __qtablewidgetitem2);
        timeTable->setObjectName(QStringLiteral("timeTable"));
        timeTable->setGeometry(QRect(50, 60, 310, 406));
        timeTable->setStyleSheet(QLatin1String("font: 12pt \"Agency FB\";\n"
"color: rgb(90, 90, 90);\n"
"background-color: rgba(250, 250, 220, 50%);\n"
"gridline-color: rgba(255,255,225,40%);\n"
"selection-color: #2a2a2a;"));
        timeTable->setShowGrid(true);
        timeTable->setGridStyle(Qt::SolidLine);
        timeTable->setSortingEnabled(true);
        timeTable->setWordWrap(true);
        timeTable->setRowCount(10);
        timeTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        timeTable->horizontalHeader()->setStretchLastSection(true);
        killTable = new QTableWidget(Rank);
        if (killTable->columnCount() < 2)
            killTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        killTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        killTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        if (killTable->rowCount() < 10)
            killTable->setRowCount(10);
        QBrush brush1(QColor(250, 250, 220, 127));
        brush1.setStyle(Qt::NoBrush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        __qtablewidgetitem5->setBackground(brush2);
        __qtablewidgetitem5->setForeground(brush1);
        killTable->setItem(0, 0, __qtablewidgetitem5);
        killTable->setObjectName(QStringLiteral("killTable"));
        killTable->setGeometry(QRect(420, 60, 310, 406));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        killTable->setFont(font1);
        killTable->setStyleSheet(QLatin1String("font: 12pt \"Agency FB\";\n"
"gridline-color: rgba(255,255,225,40%);\n"
"color: rgb(90, 90, 90);\n"
"background-color: rgba(250, 250, 220, 50%);\n"
"selection-color: #2a2a2a;"));
        killTable->setGridStyle(Qt::SolidLine);
        killTable->setRowCount(10);
        killTable->horizontalHeader()->setStretchLastSection(true);
        exitBtn = new QPushButton(Rank);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(310, 510, 151, 43));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        exitBtn->setFont(font2);
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
        label = new QLabel(Rank);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 150, 40));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label_2 = new QLabel(Rank);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(500, 10, 150, 40));
        label_2->setFont(font3);

        retranslateUi(Rank);

        QMetaObject::connectSlotsByName(Rank);
    } // setupUi

    void retranslateUi(QWidget *Rank)
    {
        Rank->setWindowTitle(QApplication::translate("Rank", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = timeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Rank", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = timeTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Rank", "Score", 0));

        const bool __sortingEnabled = timeTable->isSortingEnabled();
        timeTable->setSortingEnabled(false);
        timeTable->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem2 = killTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Rank", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem3 = killTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Rank", "Score", 0));

        const bool __sortingEnabled1 = killTable->isSortingEnabled();
        killTable->setSortingEnabled(false);
        killTable->setSortingEnabled(__sortingEnabled1);

        exitBtn->setText(QApplication::translate("Rank", "RETURN", 0));
        label->setText(QApplication::translate("Rank", "Survival Time", 0));
        label_2->setText(QApplication::translate("Rank", "Killing Number", 0));
    } // retranslateUi

};

namespace Ui {
    class Rank: public Ui_Rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANK_H
