#ifndef PLAYER_H
#define PLAYER_H

#include <QLabel>
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>
#include <cmath>
#include <QTime>

class Player
{
public:

    QString m_type;    // 飞机样式对应的文件
    QString m_type_bullets;    // 子弹对应的文件
    QPointF m_posi;      // 飞机当前的位置
    double m_vel;    // 飞机的速度
    double m_dir;         // 飞机的当前方向 [0,360]
    double m_big;         // 飞机的当前大小

    QPointF m_size;     // 飞机的尺寸
    QRect m_rect;     // 飞机的活动范围

    // 飞机运动状态
    enum STATE
    {
        _STA,      // 停止
        _MOVE,       // 直行
        _BACK,       // 后退
        _LEFT,      // 静止左转
        _RIGHT,     // 静止右转
        _RUN_LEFT,  // 运动左转
        _RUN_RIGHT,  // 运动右转
        _BACK_LEFT,  // 后退左转
        _BACK_RIGHT  // 后退右转
    };


    short m_curState;  // 飞机当前运行状态
    int m_curgoods;  // 飞机当前道具状态

    Player();

    void initPlayer();

    void setCurrentState(short state);
    void setCurrentgoods(int goods);

    void setCurrentPosi(int x,int y);
    void setActiveRect(int x,int y,int w,int h);
    void setCurrentSpeed(int x);
    void setCurrentVolume(int x);

    QPointF getCurrentPosi();
    QString getTypeBullet();
    short getCurrentState();
    int getCurrentgoods();
    double getDir();

    QPointF getSize();

    // 行为
    void moveFront();
    void moveBack();
    void turnLeft();
    void turnRight();

    // 道具
    void speedup();
    void large();
    void speedlow();
    void small();

    void updateStates();  // 状态更新
    void updategoods();  // 道具更新

    void render(QPainter* painter);
};

#endif // PLAYER_H
