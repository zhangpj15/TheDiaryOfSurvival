#ifndef GOODS_H
#define GOODS_H

#include <QPainter>
#include <QtCore>
#include <QBitmap>

class goods
{
public:
    goods();

    QPointF m_posi;   // 道具坐标
    QColor m_color;  // 道具颜色
    double m_size;// 道具尺寸

    bool m_isAlive;
    int m_countDown;
    int m_deathType;   // 道具消失的样式
    int m_born;   // 道具消失的样式

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


#endif // GOODS_H
