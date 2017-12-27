/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QLabel *lblTime;
    QProgressBar *pbarEnergy;
    QLabel *lblAttackMode;
    QLabel *label;
    QGroupBox *groupGoods;

    QPushButton *btnShowTab;
    QLabel *prop;
    QLabel *proptext;
    QLabel *prop_2;
    QLabel *proptext_2;
    QLabel *prop_3;
    QLabel *proptext_3;
    QLabel *prop_4;
    QLabel *proptext_4;
    QLabel *prop_5;
    QLabel *proptext_5;
    QLabel *prop_6;
    QLabel *proptext_6;
    QLabel *prop_7;
    QLabel *proptext_7;
    QLabel *label_2;
    QFrame *line1_8;
    QFrame *line1_9;
    QFrame *line1_10;
    QFrame *line1_11;
    QFrame *line1_12;
    QFrame *line1_13;
    QFrame *line1_14;
    QFrame *line1_15;
    QFrame *line1_16;
    QLabel *lblGoods;
    QLabel *propseffect;
    QGroupBox *groupSkill;
    QLabel *skill1;
    QLabel *skill2;
    QLabel *skill3;
    QLabel *skill1num;
    QLabel *skill2num;
    QLabel *skill3num;
    QLabel *textskill;
    QFrame *line1;
    QFrame *line1_2;
    QFrame *line1_3;
    QLabel *textskill_2;
    QLabel *textskill_3;
    QLabel *textskill_4;
    QLabel *lblSpeed;
    QLabel *lblVolume;
    QLabel *lblLife;
    QFrame *line1_4;
    QFrame *line1_5;
    QFrame *line1_6;
    QLabel *lblPoint;
    QLabel *textskill_5;
    QLabel *playerpic;
    QFrame *line1_7;
    QProgressBar *pbarLife;

    QLabel *skill1num_2;
    QLabel *skill2num_2;
    QLabel *skill3num_2;
    QLabel *groupBoss;
    QFrame *lblback;


    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(800, 600);
        game->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"url(:/res/img/background/bg11.jpg)\n"
"}"));
        lblTime = new QLabel(game);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setGeometry(QRect(300, 0, 200, 60));
        QFont font;
        font.setFamily(QStringLiteral("Calisto MT"));
        font.setPointSize(36);
        lblTime->setFont(font);
        lblTime->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#b53436;\n"
"}"));
        lblTime->setAlignment(Qt::AlignCenter);
        pbarEnergy = new QProgressBar(game);
        pbarEnergy->setObjectName(QStringLiteral("pbarEnergy"));

        pbarEnergy->setGeometry(QRect(270, 15, 70, 20));

        pbarEnergy->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-image: url(:/type/res/config/ico/firebar.png);\n"
"}"));
        pbarEnergy->setMaximum(200);
        pbarEnergy->setValue(200);
        pbarEnergy->setTextVisible(false);
        lblAttackMode = new QLabel(game);
        lblAttackMode->setObjectName(QStringLiteral("lblAttackMode"));

        lblAttackMode->setGeometry(QRect(140, 10, 140, 30));

        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        lblAttackMode->setFont(font1);
        lblAttackMode->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2a2a2a;\n"
"}"));
        label = new QLabel(game);
        label->setObjectName(QStringLiteral("label"));

        label->setGeometry(QRect(10, 10, 120, 30));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(16);
        label->setFont(font2);

        label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5a5a5a;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        groupGoods = new QGroupBox(game);
        groupGoods->setObjectName(QStringLiteral("groupGoods"));

        groupGoods->setGeometry(QRect(640, 140, 160, 340));
        btnShowTab = new QPushButton(groupGoods);
        btnShowTab->setObjectName(QStringLiteral("btnShowTab"));
        btnShowTab->setGeometry(QRect(0, 140, 20, 50));

        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);

        btnShowTab->setFont(font3);

        btnShowTab->setFocusPolicy(Qt::NoFocus);
        btnShowTab->setStyleSheet(QLatin1String("QPushButton{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"background-color: rgb(50, 112, 169);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"border: 0px;\n"
"color:#FFFFFF;\n"
"background-color:rgb(77, 176, 251);\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"border:1px solid rgb(77, 176, 251);\n"
"color:#FFFFFF;\n"
"background-color:rgb(80, 189, 255);\n"
"}"));

        prop = new QLabel(groupGoods);
        prop->setObjectName(QStringLiteral("prop"));
        prop->setGeometry(QRect(20, 50, 35, 30));
        prop->setPixmap(QPixmap(QString::fromUtf8(":/res/img/goods/goods (1).png")));
        prop->setScaledContents(true);
        proptext = new QLabel(groupGoods);
        proptext->setObjectName(QStringLiteral("proptext"));
        proptext->setGeometry(QRect(60, 50, 72, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(12);
        proptext->setFont(font4);
        proptext->setStyleSheet(QLatin1String("QLabel\n"

"{\n"
"color:#2A2A2A;\n"
"}"));
        prop_2 = new QLabel(groupGoods);
        prop_2->setObjectName(QStringLiteral("prop_2"));
        prop_2->setGeometry(QRect(20, 90, 35, 35));
        prop_2->setPixmap(QPixmap(QString::fromUtf8(":/res/img/goods/goods (3).png")));
        prop_2->setScaledContents(true);
        proptext_2 = new QLabel(groupGoods);
        proptext_2->setObjectName(QStringLiteral("proptext_2"));
        proptext_2->setGeometry(QRect(60, 90, 81, 30));
        proptext_2->setFont(font4);
        proptext_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        prop_3 = new QLabel(groupGoods);
        prop_3->setObjectName(QStringLiteral("prop_3"));
        prop_3->setGeometry(QRect(20, 130, 35, 35));
        prop_3->setPixmap(QPixmap(QString::fromUtf8(":/res/img/goods/goods (2).png")));
        prop_3->setScaledContents(true);
        proptext_3 = new QLabel(groupGoods);
        proptext_3->setObjectName(QStringLiteral("proptext_3"));
        proptext_3->setGeometry(QRect(60, 130, 81, 30));
        proptext_3->setFont(font4);
        proptext_3->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        prop_4 = new QLabel(groupGoods);
        prop_4->setObjectName(QStringLiteral("prop_4"));
        prop_4->setGeometry(QRect(20, 170, 35, 35));
        prop_4->setPixmap(QPixmap(QString::fromUtf8(":/res/img/goods/goods (2).png")));
        prop_4->setScaledContents(true);
        proptext_4 = new QLabel(groupGoods);
        proptext_4->setObjectName(QStringLiteral("proptext_4"));
        proptext_4->setGeometry(QRect(60, 170, 81, 30));
        proptext_4->setFont(font4);
        proptext_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        prop_5 = new QLabel(groupGoods);
        prop_5->setObjectName(QStringLiteral("prop_5"));
        prop_5->setGeometry(QRect(20, 210, 35, 35));
        prop_5->setPixmap(QPixmap(QString::fromUtf8(":/res/img/goods/goods (5).png")));
        prop_5->setScaledContents(true);
        proptext_5 = new QLabel(groupGoods);
        proptext_5->setObjectName(QStringLiteral("proptext_5"));
        proptext_5->setGeometry(QRect(60, 210, 81, 30));
        proptext_5->setFont(font4);
        proptext_5->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        prop_6 = new QLabel(groupGoods);
        prop_6->setObjectName(QStringLiteral("prop_6"));
        prop_6->setGeometry(QRect(20, 290, 35, 35));
        prop_6->setPixmap(QPixmap(QString::fromUtf8(":/res/img/goods/goods (2).png")));
        prop_6->setScaledContents(true);
        proptext_6 = new QLabel(groupGoods);
        proptext_6->setObjectName(QStringLiteral("proptext_6"));
        proptext_6->setGeometry(QRect(60, 290, 81, 30));
        proptext_6->setFont(font4);
        proptext_6->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        prop_7 = new QLabel(groupGoods);
        prop_7->setObjectName(QStringLiteral("prop_7"));
        prop_7->setGeometry(QRect(20, 250, 35, 35));
        prop_7->setPixmap(QPixmap(QString::fromUtf8(":/res/img/goods/goods (2).png")));
        prop_7->setScaledContents(true);
        proptext_7 = new QLabel(groupGoods);
        proptext_7->setObjectName(QStringLiteral("proptext_7"));
        proptext_7->setGeometry(QRect(60, 250, 81, 30));
        proptext_7->setFont(font4);
        proptext_7->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        label_2 = new QLabel(groupGoods);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 10, 100, 30));
        label_2->setFont(font2);
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5a5a5a;\n"
"}"));
        line1_8 = new QFrame(groupGoods);
        line1_8->setObjectName(QStringLiteral("line1_8"));
        line1_8->setGeometry(QRect(20, 40, 120, 10));
        line1_8->setFrameShape(QFrame::HLine);
        line1_8->setFrameShadow(QFrame::Raised);
        line1_9 = new QFrame(groupGoods);
        line1_9->setObjectName(QStringLiteral("line1_9"));
        line1_9->setGeometry(QRect(30, 80, 50, 10));
        line1_9->setFrameShape(QFrame::HLine);
        line1_9->setFrameShadow(QFrame::Raised);
        line1_10 = new QFrame(groupGoods);
        line1_10->setObjectName(QStringLiteral("line1_10"));
        line1_10->setGeometry(QRect(30, 120, 50, 10));
        line1_10->setFrameShape(QFrame::HLine);
        line1_10->setFrameShadow(QFrame::Raised);
        line1_11 = new QFrame(groupGoods);
        line1_11->setObjectName(QStringLiteral("line1_11"));
        line1_11->setGeometry(QRect(30, 160, 50, 10));
        line1_11->setFrameShape(QFrame::HLine);
        line1_11->setFrameShadow(QFrame::Raised);
        line1_12 = new QFrame(groupGoods);
        line1_12->setObjectName(QStringLiteral("line1_12"));
        line1_12->setGeometry(QRect(30, 200, 50, 10));
        line1_12->setFrameShape(QFrame::HLine);
        line1_12->setFrameShadow(QFrame::Raised);
        line1_13 = new QFrame(groupGoods);
        line1_13->setObjectName(QStringLiteral("line1_13"));
        line1_13->setGeometry(QRect(30, 240, 50, 10));
        line1_13->setFrameShape(QFrame::HLine);
        line1_13->setFrameShadow(QFrame::Raised);
        line1_14 = new QFrame(groupGoods);
        line1_14->setObjectName(QStringLiteral("line1_14"));
        line1_14->setGeometry(QRect(30, 280, 50, 10));
        line1_14->setFrameShape(QFrame::HLine);
        line1_14->setFrameShadow(QFrame::Raised);
        line1_15 = new QFrame(groupGoods);
        line1_15->setObjectName(QStringLiteral("line1_15"));
        line1_15->setGeometry(QRect(20, 320, 120, 10));
        line1_15->setFrameShape(QFrame::HLine);
        line1_15->setFrameShadow(QFrame::Raised);
        line1_16 = new QFrame(groupGoods);
        line1_16->setObjectName(QStringLiteral("line1_16"));
        line1_16->setGeometry(QRect(50, 70, 8, 231));
        line1_16->setFrameShape(QFrame::VLine);
        line1_16->setFrameShadow(QFrame::Raised);
        lblGoods = new QLabel(game);
        lblGoods->setObjectName(QStringLiteral("lblGoods"));
        lblGoods->setGeometry(QRect(550, 10, 111, 31));
        lblGoods->setFont(font1);
        lblGoods->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        lblGoods->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        propseffect = new QLabel(game);
        propseffect->setObjectName(QStringLiteral("propseffect"));
        propseffect->setGeometry(QRect(660, 10, 131, 31));
        propseffect->setFont(font2);
        propseffect->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5A5A5A;\n"
"}"));
        propseffect->setAlignment(Qt::AlignCenter);
        groupSkill = new QGroupBox(game);
        groupSkill->setObjectName(QStringLiteral("groupSkill"));
        groupSkill->setGeometry(QRect(0, 530, 800, 70));
        skill1 = new QLabel(groupSkill);
        skill1->setObjectName(QStringLiteral("skill1"));
        skill1->setGeometry(QRect(530, 14, 51, 41));
        skill1->setPixmap(QPixmap(QString::fromUtf8(":/res/img/skill/p1.png")));
        skill1->setScaledContents(true);
        skill2 = new QLabel(groupSkill);
        skill2->setObjectName(QStringLiteral("skill2"));
        skill2->setGeometry(QRect(600, 14, 51, 41));
        skill2->setPixmap(QPixmap(QString::fromUtf8(":/res/img/skill/p2.png")));
        skill2->setScaledContents(true);
        skill3 = new QLabel(groupSkill);
        skill3->setObjectName(QStringLiteral("skill3"));
        skill3->setGeometry(QRect(680, 14, 41, 41));
        skill3->setPixmap(QPixmap(QString::fromUtf8(":/res/img/skill/p3.png")));
        skill3->setScaledContents(true);
        skill1num = new QLabel(groupSkill);
        skill1num->setObjectName(QStringLiteral("skill1num"));
        skill1num->setGeometry(QRect(515, 10, 21, 20));
        skill1num->setStyleSheet(QLatin1String("QLabel{\n"
"border :1px white;\n"
"background-color: rgba(0,0,0,0);\n"
"color:#5a5a5a;\n"
"}"));
        skill1num->setTextFormat(Qt::AutoText);
        skill1num->setScaledContents(false);
        skill1num->setWordWrap(false);
        skill1num->setMargin(0);
        skill1num->setOpenExternalLinks(false);
        skill1num->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        skill2num = new QLabel(groupSkill);
        skill2num->setObjectName(QStringLiteral("skill2num"));
        skill2num->setGeometry(QRect(590, 10, 21, 20));
        skill2num->setStyleSheet(QLatin1String("QLabel{\n"
"border :1px white;\n"
"background-color: rgba(0,0,0,0);\n"
"color:#5a5a5a;\n"
"}"));
        skill2num->setTextFormat(Qt::AutoText);
        skill2num->setScaledContents(false);
        skill2num->setOpenExternalLinks(false);
        skill3num = new QLabel(groupSkill);
        skill3num->setObjectName(QStringLiteral("skill3num"));
        skill3num->setGeometry(QRect(660, 10, 20, 20));
        skill3num->setStyleSheet(QLatin1String("QLabel{\n"
"border :1px white;\n"
"background-color: rgba(0,0,0,0);\n"
"color:#5a5a5a;\n"
"}"));
        skill3num->setTextFormat(Qt::AutoText);
        skill3num->setScaledContents(false);
        skill3num->setOpenExternalLinks(false);
        textskill = new QLabel(groupSkill);
        textskill->setObjectName(QStringLiteral("textskill"));
        textskill->setGeometry(QRect(740, 20, 51, 31));
        textskill->setFont(font2);
        textskill->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5a5a5a;\n"
"}"));
        line1 = new QFrame(groupSkill);
        line1->setObjectName(QStringLiteral("line1"));
        line1->setGeometry(QRect(575, 10, 16, 50));
        line1->setFrameShape(QFrame::VLine);
        line1->setFrameShadow(QFrame::Raised);
        line1_2 = new QFrame(groupSkill);
        line1_2->setObjectName(QStringLiteral("line1_2"));
        line1_2->setGeometry(QRect(645, 10, 16, 50));
        line1_2->setFrameShape(QFrame::VLine);
        line1_2->setFrameShadow(QFrame::Raised);
        line1_3 = new QFrame(groupSkill);
        line1_3->setObjectName(QStringLiteral("line1_3"));
        line1_3->setGeometry(QRect(715, 10, 16, 50));
        line1_3->setFrameShape(QFrame::VLine);
        line1_3->setFrameShadow(QFrame::Raised);
        textskill_2 = new QLabel(groupSkill);
        textskill_2->setObjectName(QStringLiteral("textskill_2"));
        textskill_2->setGeometry(QRect(90, 20, 60, 30));
        textskill_2->setFont(font2);
        textskill_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5a5a5a;\n"
"}"));
        textskill_3 = new QLabel(groupSkill);
        textskill_3->setObjectName(QStringLiteral("textskill_3"));
        textskill_3->setGeometry(QRect(200, 20, 40, 30));
        textskill_3->setFont(font2);
        textskill_3->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5a5a5a;\n"
"}"));
        textskill_4 = new QLabel(groupSkill);
        textskill_4->setObjectName(QStringLiteral("textskill_4"));
        textskill_4->setGeometry(QRect(300, 20, 40, 30));
        textskill_4->setFont(font2);
        textskill_4->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5a5a5a;\n"
"}"));
        lblSpeed = new QLabel(groupSkill);
        lblSpeed->setObjectName(QStringLiteral("lblSpeed"));
        lblSpeed->setGeometry(QRect(160, 20, 30, 30));
        QPalette palette;
        QBrush brush(QColor(42, 42, 42, 255));
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
        lblSpeed->setPalette(palette);
        QFont font5;
        font5.setFamily(QStringLiteral("Agency FB"));
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        lblSpeed->setFont(font5);
        lblSpeed->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        lblVolume = new QLabel(groupSkill);
        lblVolume->setObjectName(QStringLiteral("lblVolume"));
        lblVolume->setGeometry(QRect(250, 20, 40, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        lblVolume->setPalette(palette1);
        lblVolume->setFont(font5);
        lblVolume->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        lblLife = new QLabel(groupSkill);
        lblLife->setObjectName(QStringLiteral("lblLife"));
        lblLife->setGeometry(QRect(350, 20, 40, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        lblLife->setPalette(palette2);
        lblLife->setFont(font5);
        lblLife->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        line1_4 = new QFrame(groupSkill);
        line1_4->setObjectName(QStringLiteral("line1_4"));
        line1_4->setGeometry(QRect(180, 10, 16, 50));
        line1_4->setFrameShape(QFrame::VLine);
        line1_4->setFrameShadow(QFrame::Raised);
        line1_5 = new QFrame(groupSkill);
        line1_5->setObjectName(QStringLiteral("line1_5"));
        line1_5->setGeometry(QRect(280, 10, 16, 50));
        line1_5->setFrameShape(QFrame::VLine);
        line1_5->setFrameShadow(QFrame::Raised);
        line1_6 = new QFrame(groupSkill);
        line1_6->setObjectName(QStringLiteral("line1_6"));
        line1_6->setGeometry(QRect(380, 10, 16, 50));
        line1_6->setFrameShape(QFrame::VLine);
        line1_6->setFrameShadow(QFrame::Raised);
        lblPoint = new QLabel(groupSkill);
        lblPoint->setObjectName(QStringLiteral("lblPoint"));
        lblPoint->setGeometry(QRect(460, 20, 50, 30));
        QFont font6;
        font6.setFamily(QStringLiteral("Agency FB"));
        font6.setPointSize(18);
        font6.setBold(false);
        font6.setWeight(50);
        lblPoint->setFont(font6);
        lblPoint->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        textskill_5 = new QLabel(groupSkill);
        textskill_5->setObjectName(QStringLiteral("textskill_5"));
        textskill_5->setGeometry(QRect(410, 20, 40, 30));
        textskill_5->setFont(font2);
        textskill_5->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#5a5a5a;\n"
"}"));
        playerpic = new QLabel(groupSkill);
        playerpic->setObjectName(QStringLiteral("playerpic"));
        playerpic->setGeometry(QRect(20, 10, 50, 50));
        playerpic->setPixmap(QPixmap(QString::fromUtf8(":/res/img/plane/figure (11).png")));
        playerpic->setScaledContents(true);
        line1_7 = new QFrame(groupSkill);
        line1_7->setObjectName(QStringLiteral("line1_7"));
        line1_7->setGeometry(QRect(500, 10, 16, 50));
        line1_7->setFrameShape(QFrame::VLine);
        line1_7->setFrameShadow(QFrame::Raised);
        pbarLife = new QProgressBar(groupSkill);
        pbarLife->setObjectName(QStringLiteral("pbarLife"));
        pbarLife->setGeometry(QRect(0, 0, 12, 70));
        pbarLife->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 0px solid grey;\n"
"    border-radius: 5px;\n"
"    background-color: rgba(0,0,0,0);\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-image: url(:/type/res/config/ico/firebar.png);\n"
"}\n"
""));
        pbarLife->setMaximum(200);
        pbarLife->setValue(200);
        pbarLife->setTextVisible(false);

        pbarLife->setOrientation(Qt::Vertical);
        skill1num_2 = new QLabel(groupSkill);
        skill1num_2->setObjectName(QStringLiteral("skill1num_2"));
        skill1num_2->setGeometry(QRect(520, 40, 21, 20));
        skill1num_2->setStyleSheet(QLatin1String("QLabel{\n"
"border :1px white;\n"
"background-color: rgba(0,0,0,0);\n"
"color:#5a5a5a;\n"
"}"));
        skill1num_2->setTextFormat(Qt::AutoText);
        skill1num_2->setScaledContents(false);
        skill1num_2->setWordWrap(false);
        skill1num_2->setMargin(0);
        skill1num_2->setOpenExternalLinks(false);
        skill1num_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        skill2num_2 = new QLabel(groupSkill);
        skill2num_2->setObjectName(QStringLiteral("skill2num_2"));
        skill2num_2->setGeometry(QRect(595, 40, 21, 20));
        skill2num_2->setStyleSheet(QLatin1String("QLabel{\n"
"border :1px white;\n"
"background-color: rgba(0,0,0,0);\n"
"color:#5a5a5a;\n"
"}"));
        skill2num_2->setTextFormat(Qt::AutoText);
        skill2num_2->setScaledContents(false);
        skill2num_2->setOpenExternalLinks(false);
        skill3num_2 = new QLabel(groupSkill);
        skill3num_2->setObjectName(QStringLiteral("skill3num_2"));
        skill3num_2->setGeometry(QRect(665, 40, 20, 20));
        skill3num_2->setStyleSheet(QLatin1String("QLabel{\n"
"border :1px white;\n"
"background-color: rgba(0,0,0,0);\n"
"color:#5a5a5a;\n"
"}"));
        skill3num_2->setTextFormat(Qt::AutoText);
        skill3num_2->setScaledContents(false);
        skill3num_2->setOpenExternalLinks(false);
        groupBoss = new QLabel(game);
        groupBoss->setObjectName(QStringLiteral("groupBoss"));
        groupBoss->setGeometry(QRect(360, 170, 151, 51));
        QPalette palette3;
        QBrush brush1(QColor(190, 38, 40, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        groupBoss->setPalette(palette3);
        groupBoss->setFont(font6);
        groupBoss->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#be2628;\n"
"}"));
        lblback = new QFrame(game);
        lblback->setObjectName(QStringLiteral("lblback"));
        lblback->setGeometry(QRect(0, 0, 51, 61));
        lblback->setFrameShape(QFrame::StyledPanel);
        lblback->setFrameShadow(QFrame::Raised);

     

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {

        game->setWindowTitle(QApplication::translate("game", "Form", Q_NULLPTR));
        lblTime->setText(QApplication::translate("game", "0", Q_NULLPTR));
        lblAttackMode->setText(QApplication::translate("game", "Normal Bullet", Q_NULLPTR));
        label->setText(QApplication::translate("game", "ATTACK MODE", Q_NULLPTR));
        groupGoods->setTitle(QString());
        btnShowTab->setText(QString());
        prop->setText(QString());
        proptext->setText(QApplication::translate("game", "SPEED UP", Q_NULLPTR));
        prop_2->setText(QString());
        proptext_2->setText(QApplication::translate("game", "SPEED LOW", Q_NULLPTR));
        prop_3->setText(QString());
        proptext_3->setText(QApplication::translate("game", "SIZE LARGER", Q_NULLPTR));
        prop_4->setText(QString());
        proptext_4->setText(QApplication::translate("game", "SIZE SMALLER", Q_NULLPTR));
        prop_5->setText(QString());
        proptext_5->setText(QApplication::translate("game", "BLOOD BAG", Q_NULLPTR));
        prop_6->setText(QString());
        proptext_6->setText(QApplication::translate("game", "BLOOD BAG", Q_NULLPTR));
        prop_7->setText(QString());
        proptext_7->setText(QApplication::translate("game", "BLOOD BAG", Q_NULLPTR));
        label_2->setText(QApplication::translate("game", "PROPS INFO", Q_NULLPTR));
        lblGoods->setText(QApplication::translate("game", "None", Q_NULLPTR));
        propseffect->setText(QApplication::translate("game", "PROPS EFFECT", Q_NULLPTR));
        groupSkill->setTitle(QString());
        skill1->setText(QString());
        skill2->setText(QString());
        skill3->setText(QString());
        skill1num->setText(QApplication::translate("game", "15", Q_NULLPTR));
        skill2num->setText(QApplication::translate("game", "15", Q_NULLPTR));
        skill3num->setText(QApplication::translate("game", "15", Q_NULLPTR));
        textskill->setText(QApplication::translate("game", "SKILL", Q_NULLPTR));
        textskill_2->setText(QApplication::translate("game", "SPEED", Q_NULLPTR));
        textskill_3->setText(QApplication::translate("game", "SIZE", Q_NULLPTR));
        textskill_4->setText(QApplication::translate("game", "LIFE", Q_NULLPTR));
        lblSpeed->setText(QApplication::translate("game", "3", Q_NULLPTR));
        lblVolume->setText(QApplication::translate("game", "50", Q_NULLPTR));
        lblLife->setText(QApplication::translate("game", "100", Q_NULLPTR));
        lblPoint->setText(QApplication::translate("game", "0", Q_NULLPTR));
        textskill_5->setText(QApplication::translate("game", "KILL", Q_NULLPTR));
        playerpic->setText(QString());
        skill1num_2->setText(QApplication::translate("game", "U", Q_NULLPTR));
        skill2num_2->setText(QApplication::translate("game", "I", Q_NULLPTR));
        skill3num_2->setText(QApplication::translate("game", "O", Q_NULLPTR));
        groupBoss->setText(QApplication::translate("game", "BOSS IS COMING!", Q_NULLPTR));

    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
