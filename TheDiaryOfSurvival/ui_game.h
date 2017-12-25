/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QLabel *lblPoint;
    QLabel *label;
    QGroupBox *groupBox;
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
    QLabel *label_2;
    QLabel *label_15;
    QLabel *lblSpeed;
    QLabel *label_7;
    QLabel *lblVolume;
    QLabel *lblLife;
    QLabel *label_16;
    QLabel *label_17;
    QProgressBar *pbarLife;

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
        lblTime->setGeometry(QRect(280, 10, 201, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font.setPointSize(35);
        lblTime->setFont(font);
        lblTime->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        lblTime->setAlignment(Qt::AlignCenter);
        pbarEnergy = new QProgressBar(game);
        pbarEnergy->setObjectName(QStringLiteral("pbarEnergy"));
        pbarEnergy->setGeometry(QRect(110, 30, 141, 21));
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
        lblAttackMode->setGeometry(QRect(110, 0, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        lblAttackMode->setFont(font1);
        lblAttackMode->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        lblPoint = new QLabel(game);
        lblPoint->setObjectName(QStringLiteral("lblPoint"));
        lblPoint->setGeometry(QRect(690, 30, 54, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        lblPoint->setFont(font2);
        lblPoint->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label = new QLabel(game);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 81, 31));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(game);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 180, 150, 250));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 80, 91, 21));
        label_10->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 80, 31, 21));
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
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 105, 31, 21));
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
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 105, 81, 21));
        label_12->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 55, 31, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette2);
        label_6->setFont(font4);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 55, 51, 21));
        label_8->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        btnShowTab = new QPushButton(groupBox);
        btnShowTab->setObjectName(QStringLiteral("btnShowTab"));
        btnShowTab->setGeometry(QRect(135, 100, 16, 50));
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
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(80, 130, 31, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_13->setPalette(palette3);
        label_13->setFont(font4);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 130, 71, 21));
        label_14->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        lblGoods = new QLabel(game);
        lblGoods->setObjectName(QStringLiteral("lblGoods"));
        lblGoods->setGeometry(QRect(530, 10, 101, 31));
        lblGoods->setFont(font1);
        lblGoods->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_2 = new QLabel(game);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 10, 81, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(game);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(650, 30, 31, 31));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/res/config/ico/death.jpg")));
        label_15->setScaledContents(true);
        lblSpeed = new QLabel(game);
        lblSpeed->setObjectName(QStringLiteral("lblSpeed"));
        lblSpeed->setGeometry(QRect(530, 40, 51, 16));
        QPalette palette4;
        QBrush brush2(QColor(255, 255, 255, 255));
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
        lblSpeed->setFont(font4);
        lblSpeed->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_7 = new QLabel(game);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 40, 51, 16));
        label_7->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        lblVolume = new QLabel(game);
        lblVolume->setObjectName(QStringLiteral("lblVolume"));
        lblVolume->setGeometry(QRect(530, 60, 51, 16));
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
        lblVolume->setFont(font4);
        lblVolume->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        lblLife = new QLabel(game);
        lblLife->setObjectName(QStringLiteral("lblLife"));
        lblLife->setGeometry(QRect(530, 80, 51, 16));
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
        lblLife->setFont(font4);
        lblLife->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_16 = new QLabel(game);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(430, 60, 51, 16));
        label_16->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        label_17 = new QLabel(game);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(430, 80, 51, 16));
        label_17->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"color:#FFFFFF;\n"
"}"));
        pbarLife = new QProgressBar(game);
        pbarLife->setObjectName(QStringLiteral("pbarLife"));
        pbarLife->setGeometry(QRect(600, 80, 141, 21));
        pbarLife->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-image: url(:/type/res/config/ico/firebar.png);\n"
"}"));
        pbarLife->setMaximum(200);
        pbarLife->setValue(200);
        pbarLife->setTextVisible(false);

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Form", 0));
        lblTime->setText(QApplication::translate("game", "0", 0));
        lblAttackMode->setText(QApplication::translate("game", "Normal Bullet", 0));
        lblPoint->setText(QApplication::translate("game", "0", 0));
        label->setText(QApplication::translate("game", "\346\224\273\345\207\273\346\250\241\345\274\217", 0));
        groupBox->setTitle(QString());
        label_10->setText(QApplication::translate("game", "\345\210\207\346\215\242\346\224\273\345\207\273\346\250\241\345\274\217\357\274\232", 0));
        label_9->setText(QApplication::translate("game", "K", 0));
        label_11->setText(QApplication::translate("game", "Q", 0));
        label_12->setText(QApplication::translate("game", "\351\200\200\345\207\272\346\270\270\346\210\217\357\274\232", 0));
        label_6->setText(QApplication::translate("game", "J", 0));
        label_8->setText(QApplication::translate("game", "\346\224\273\345\207\273\357\274\232", 0));
        btnShowTab->setText(QApplication::translate("game", "<", 0));
        label_13->setText(QApplication::translate("game", "\347\251\272\346\240\274", 0));
        label_14->setText(QApplication::translate("game", "\346\232\202\345\201\234/\347\273\247\347\273\255\357\274\232", 0));
        lblGoods->setText(QApplication::translate("game", "None", 0));
        label_2->setText(QApplication::translate("game", "\351\201\223\345\205\267\346\225\210\346\236\234", 0));
        label_15->setText(QString());
        lblSpeed->setText(QApplication::translate("game", "3", 0));
        label_7->setText(QApplication::translate("game", "\351\200\237\345\272\246\357\274\232", 0));
        lblVolume->setText(QApplication::translate("game", "50", 0));
        lblLife->setText(QApplication::translate("game", "100", 0));
        label_16->setText(QApplication::translate("game", "\345\260\272\345\257\270\357\274\232", 0));
        label_17->setText(QApplication::translate("game", "\347\224\237\345\221\275\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
