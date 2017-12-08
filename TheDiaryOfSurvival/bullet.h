#ifndef BULLET_H
#define BULLET_H
#include <QtCore>
#include <QPainter>

class Bullet
{
public: 
    double m_size;       // 子弹尺寸
    double m_speed;   // 子弹射速
    QPointF m_posi;    // 子弹坐标
    double m_dir;    // 子弹方向
    bool m_isLive;   // 是否生存

    Bullet();

    void setPosi(double x,double y);
    void setDir(double d);
    bool isAlive();
    double getSpeed();
    QPointF getPosi();
    double getDir();

    void updateBullet();
    void renderBullet(QPainter* painter);

};

#endif // BULLET_H
