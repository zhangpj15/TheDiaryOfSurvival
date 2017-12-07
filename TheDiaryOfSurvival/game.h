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

    Emanager m_emanager;
    Pmanager m_pmanager;

    death* m_death;
    end* m_end;

    Player m_player;

    void startGameLoop();   // 开始游戏

    explicit game(QWidget *parent = 0);
    ~game();

protected:
    bool bA,bD;
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);

    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

    void paintEvent(QPaintEvent* event);
    void resizeEvent(QResizeEvent* event);

private slots:
    void slot_timeLoop();   // 游戏循环
    void slot_btnShowTab();  // 显示说明框
//    void slot_attack();  // 显示说明框

    void slot_gameOver();   // 游戏结束
    void slot_quitgame();
    void slot_restart();

    void slot_no();
    void slot_yes();

signals:
    void sig_closeGame();
    void sig_death();
    void sig_quitgame();

private:
    Ui::game *ui;
};

#endif // GAME_H
