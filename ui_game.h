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
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_6;
    QLabel *label_8;
    QPushButton *btnShowTab;
    QLabel *label_13;
    QLabel *label_14;
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
        groupGoods->setGeometry(QRect(660, 270, 140, 250));
        label_10 = new QLabel(groupGoods);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 155, 91, 21));
        label_10->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_9 = new QLabel(groupGoods);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 155, 31, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_9->setPalette(palette);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        label_11 = new QLabel(groupGoods);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(90, 180, 31, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_11->setPalette(palette1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        label_11->setFont(font4);
        label_12 = new QLabel(groupGoods);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 180, 81, 21));
        label_12->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_6 = new QLabel(groupGoods);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 130, 31, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette2);
        label_6->setFont(font4);
        label_8 = new QLabel(groupGoods);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 130, 51, 21));
        label_8->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        btnShowTab = new QPushButton(groupGoods);
        btnShowTab->setObjectName(QStringLiteral("btnShowTab"));
        btnShowTab->setGeometry(QRect(0, 100, 20, 50));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        btnShowTab->setFont(font5);
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
        label_13 = new QLabel(groupGoods);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 205, 31, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_13->setPalette(palette3);
        label_13->setFont(font4);
        label_14 = new QLabel(groupGoods);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 205, 71, 21));
        label_14->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        lblGoods = new QLabel(game);
        lblGoods->setObjectName(QStringLiteral("lblGoods"));
        lblGoods->setGeometry(QRect(550, 10, 111, 31));
        lblGoods->setFont(font1);
        lblGoods->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
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
        skill2num->setTextFormat(Qt::AutoText);
        skill2num->setScaledContents(false);
        skill2num->setOpenExternalLinks(false);
        skill3num = new QLabel(groupSkill);
        skill3num->setObjectName(QStringLiteral("skill3num"));
        skill3num->setGeometry(QRect(660, 10, 20, 20));
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
        QPalette palette4;
        QBrush brush2(QColor(42, 42, 42, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        lblSpeed->setPalette(palette4);
        QFont font6;
        font6.setFamily(QStringLiteral("Agency FB"));
        font6.setPointSize(16);
        font6.setBold(false);
        font6.setWeight(50);
        lblSpeed->setFont(font6);
        lblSpeed->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        lblVolume = new QLabel(groupSkill);
        lblVolume->setObjectName(QStringLiteral("lblVolume"));
        lblVolume->setGeometry(QRect(250, 20, 40, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        lblVolume->setPalette(palette5);
        lblVolume->setFont(font6);
        lblVolume->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#2A2A2A;\n"
"}"));
        lblLife = new QLabel(groupSkill);
        lblLife->setObjectName(QStringLiteral("lblLife"));
        lblLife->setGeometry(QRect(350, 20, 40, 30));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        lblLife->setPalette(palette6);
        lblLife->setFont(font6);
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
        QFont font7;
        font7.setFamily(QStringLiteral("Agency FB"));
        font7.setPointSize(18);
        font7.setBold(false);
        font7.setWeight(50);
        lblPoint->setFont(font7);
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
        groupBoss = new QLabel(game);
        groupBoss->setObjectName(QStringLiteral("groupBoss"));
        groupBoss->setGeometry(QRect(360, 170, 151, 51));
        QPalette palette7;
        QBrush brush3(QColor(190, 38, 40, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        groupBoss->setPalette(palette7);
        groupBoss->setFont(font7);
        groupBoss->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#be2628;\n"
"}"));
        lblback = new QFrame(game);
        lblback->setObjectName(QStringLiteral("lblback"));
        lblback->setGeometry(QRect(0, 0, 800, 351));
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
        label_10->setText(QApplication::translate("game", "\345\210\207\346\215\242\346\224\273\345\207\273\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("game", "K", Q_NULLPTR));
        label_11->setText(QApplication::translate("game", "Q", Q_NULLPTR));
        label_12->setText(QApplication::translate("game", "\351\200\200\345\207\272\346\270\270\346\210\217\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("game", "J", Q_NULLPTR));
        label_8->setText(QApplication::translate("game", "\346\224\273\345\207\273\357\274\232", Q_NULLPTR));
        btnShowTab->setText(QApplication::translate("game", ">", Q_NULLPTR));
        label_13->setText(QApplication::translate("game", "\347\251\272\346\240\274", Q_NULLPTR));
        label_14->setText(QApplication::translate("game", "\346\232\202\345\201\234/\347\273\247\347\273\255\357\274\232", Q_NULLPTR));
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
        groupBoss->setText(QApplication::translate("game", "BOSS IS COMING!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
