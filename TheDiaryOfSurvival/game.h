#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QTimer>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPropertyAnimation>

#include "player.h"
#include "emanager.h"
#include "pmanager.h"
#include "gmanager.h"
#include "bmanager.h"
#include "bomanager.h"
#include "death.h"
#include "end.h"

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    QTimer m_timer;
    int m_time;    // 与 Timer 捆绑的一个时间值
    int sectime;
    int zone=0;
    int bornrate_enermy;
    int bornrate_boss;
    int bornrate_goods;
    int bornrate_barriers;
    int tiprate;
    int zonerate;
    int dayrate;

    int m_price_skill1;
    int m_price_skill2;
    int m_price_skill3;

    Emanager m_emanager;
    Bomanager m_bomanager;
    Pmanager m_pmanager;
    gmanager m_gmanager;
    bmanager m_bmanager;

    death* m_death;// 失败窗口
    end* m_end;// quit窗口
    int space;

    Player m_player;

    void startGameLoop();   // 开始游戏

    explicit game(QWidget *parent = 0);
    ~game();

protected:
    bool bA,bD;// 标识方向按键
    void keyPressEvent(QKeyEvent* event);// 键盘按键按压
    void keyReleaseEvent(QKeyEvent* event);// 标识方向释放

    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

    void paintEvent(QPaintEvent* event);
    void renderBorder(QPainter *painter, int rate);
    void resizeEvent(QResizeEvent* event);

private slots:
    void slot_timeLoop();   // 游戏循环
    void slot_btnShowTab();  // 显示说明框
    void slot_attack();  // 显示说明框

    void slot_gameOver();   // 游戏结束
    void slot_quitgame(); // 退出游戏
    void slot_restart(); // 重启游戏

    void slot_no(); // 退出游戏后返回游戏
    void slot_yes(); // 退出游戏后返回至主界面

    void slot_learnSkill1();   // 游戏循环
    void slot_learnSkill2();  // 显示说明框
    void slot_learnSkill3();  // 显示说明框

signals:
    void sig_closeGame();
    void sig_death();
    void sig_quitgame();
    void sig_borngoods();

private:
    Ui::game *ui;
};

#endif // GAME_H
