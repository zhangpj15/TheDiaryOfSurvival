#ifndef BOSS_H
#define BOSS_H

#include <QPainter>
#include <QtCore>
#include <QBitmap>
#include "bullet.h"

class Boss
{
public:
    Boss();

    enum{
        _SHOTGUN,
        _BULLET,
        _MESS
    };
    short m_curAttackType;   // 当前攻击模式
    int m_counter;           // 攻击计时器,计算按键按下时间
    QList<Bullet> m_bullets;   // 子弹序列

    QPointF m_posi;   // 敌人坐标
    QColor m_color;  // 敌人颜色
    double m_size;// 敌人尺寸

    bool m_isAlive;
    int m_life;
    int m_countDown;
    int m_deathType;   // 敌人消失的样式
    int m_born;   // 敌人生成的样式



    void setPosi(double x,double y);
    void setColor(int x,int y,int z);
    void setIsAlive(bool b);
    void setBorn(int x);
    void setCurrentLife();
    void updateAttackEffect(QPointF posi, double size, double dir);

    QColor getColor();
    QPointF getPosi();
    double getSize();
    int getLife();
    bool isAlive();
    int getCountDown();

    void render(QPainter* painter); // 渲染
};


#endif // BOSS_H
