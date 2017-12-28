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
    QString m_pic;// 子弹样式

    Bullet();

    void setPosi(double x,double y);// 设置位置
    void setDir(double d);// 设置方向
    void changepic(QString str);// 变换样式
    bool isAlive();// 是否生存
    double getSpeed();
    QPointF getPosi();
    double getDir();

    void updateBullet();// 子弹更新

    void renderBullet(QPainter* painter);// 渲染子弹

};

#endif // BULLET_H
