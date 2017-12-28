/********************************************************************************
** Form generated from reading UI file 'rank.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
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
    QLabel *timetext;
    QLabel *killtext;
    QLabel *bg;

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
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        __qtablewidgetitem2->setBackground(brush);
        __qtablewidgetitem2->setFlags(Qt::ItemIsUserCheckable);
        timeTable->setItem(0, 0, __qtablewidgetitem2);
        timeTable->setObjectName(QStringLiteral("timeTable"));
        timeTable->setGeometry(QRect(60, 90, 310, 406));
        timeTable->setStyleSheet(QLatin1String("font: 12pt \"Agency FB\";\n"
"border-top-color: rgb(72, 72, 72);\n"
"gridline-color: rgba(28,28,28,40%);\n"
"color: rgb(90, 90, 90);\n"
"background-color: rgba(25, 25, 25, 50%);\n"
"selection-color: #2a2a2a;"));
        timeTable->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        timeTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        timeTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        timeTable->setTabKeyNavigation(false);
        timeTable->setProperty("showDropIndicator", QVariant(false));
        timeTable->setDragDropOverwriteMode(false);
        timeTable->setSelectionMode(QAbstractItemView::SingleSelection);
        timeTable->setTextElideMode(Qt::ElideMiddle);
        timeTable->setShowGrid(false);
        timeTable->setGridStyle(Qt::NoPen);
        timeTable->setSortingEnabled(false);
        timeTable->setWordWrap(false);
        timeTable->setCornerButtonEnabled(false);
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
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        __qtablewidgetitem5->setBackground(brush2);
        __qtablewidgetitem5->setForeground(brush1);
        __qtablewidgetitem5->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        killTable->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        killTable->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        killTable->setItem(1, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        killTable->setItem(1, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        killTable->setItem(2, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        killTable->setItem(3, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        killTable->setItem(3, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        killTable->setItem(4, 0, __qtablewidgetitem12);
        killTable->setObjectName(QStringLiteral("killTable"));
        killTable->setGeometry(QRect(420, 90, 310, 406));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        killTable->setFont(font2);
        killTable->setStyleSheet(QLatin1String("font: 12pt \"Agency FB\";\n"
"gridline-color: rgba(28,28,28,40%);\n"
"color: rgb(90, 90, 90);\n"
"background-color: rgba(25, 25, 25, 50%);\n"
"selection-color: #2a2a2a;"));
        killTable->setLineWidth(0);
        killTable->setAutoScroll(false);
        killTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        killTable->setTabKeyNavigation(false);
        killTable->setProperty("showDropIndicator", QVariant(false));
        killTable->setDragEnabled(false);
        killTable->setDragDropOverwriteMode(false);
        killTable->setSelectionMode(QAbstractItemView::SingleSelection);
        killTable->setTextElideMode(Qt::ElideMiddle);
        killTable->setShowGrid(false);
        killTable->setGridStyle(Qt::NoPen);
        killTable->setWordWrap(false);
        killTable->setCornerButtonEnabled(false);
        killTable->setRowCount(10);
        killTable->horizontalHeader()->setVisible(true);
        killTable->horizontalHeader()->setDefaultSectionSize(125);
        killTable->horizontalHeader()->setHighlightSections(true);
        killTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        killTable->horizontalHeader()->setStretchLastSection(true);
        killTable->verticalHeader()->setVisible(true);
        killTable->verticalHeader()->setCascadingSectionResizes(false);
        killTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        killTable->verticalHeader()->setStretchLastSection(false);
        exitBtn = new QPushButton(Rank);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(320, 520, 151, 43));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        exitBtn->setFont(font3);
        exitBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#5a5a5a;\n"
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
        timetext = new QLabel(Rank);
        timetext->setObjectName(QStringLiteral("timetext"));
        timetext->setGeometry(QRect(120, 30, 191, 40));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setWeight(75);
        timetext->setFont(font4);
        timetext->setStyleSheet(QStringLiteral("color:#5a5a5a;"));
        killtext = new QLabel(Rank);
        killtext->setObjectName(QStringLiteral("killtext"));
        killtext->setGeometry(QRect(490, 30, 181, 40));
        killtext->setFont(font4);
        killtext->setStyleSheet(QStringLiteral("color:#5a5a5a;"));
        bg = new QLabel(Rank);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 800, 600));
        bg->setAutoFillBackground(false);
        bg->setStyleSheet(QLatin1String("QLabel{\n"
"background-color: rgba(255, 255, 255,10%);\n"
"}"));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/res/img/background/main1.jpg")));
        bg->raise();
        timeTable->raise();
        killTable->raise();
        exitBtn->raise();
        timetext->raise();
        killtext->raise();

        retranslateUi(Rank);

        QMetaObject::connectSlotsByName(Rank);
    } // setupUi

    void retranslateUi(QWidget *Rank)
    {
        Rank->setWindowTitle(QApplication::translate("Rank", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = timeTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Rank", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = timeTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Rank", "Score", Q_NULLPTR));

        const bool __sortingEnabled = timeTable->isSortingEnabled();
        timeTable->setSortingEnabled(false);
        timeTable->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem2 = killTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Rank", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = killTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Rank", "Score", Q_NULLPTR));

        const bool __sortingEnabled1 = killTable->isSortingEnabled();
        killTable->setSortingEnabled(false);
        killTable->setSortingEnabled(__sortingEnabled1);

        exitBtn->setText(QApplication::translate("Rank", "RETURN", Q_NULLPTR));
        timetext->setText(QApplication::translate("Rank", "Survival Time", Q_NULLPTR));
        killtext->setText(QApplication::translate("Rank", "Killing Number", Q_NULLPTR));
        bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Rank: public Ui_Rank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANK_H
