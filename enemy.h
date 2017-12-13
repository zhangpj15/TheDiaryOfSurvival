#ifndef ENEMY_H
#define ENEMY_H
#include <QPainter>
#include <QtCore>
#include <QBitmap>

class Enemy
{
public:
    Enemy();

    QPointF m_posi;   // 敌人坐标
    QColor m_color;  // 敌人颜色
    double m_size;// 敌人尺寸

    bool m_isAlive;
    int m_countDown;
    int m_deathType;   // 敌人消失的样式
    int m_born;   // 敌人生成的样式

    void setPosi(double x,double y);
    void setColor(int x,int y,int z);
    void setIsAlive(bool b);
    void setBorn(int x);

    QColor getColor();
    QPointF getPosi();
    double getSize();
    bool isAlive();
    int getCountDown();

    void render(QPainter* painter); // 渲染
};

#endif // ENEMY_H
