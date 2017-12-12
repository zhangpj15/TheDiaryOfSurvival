#ifndef BARRIERS_H
#define BARRIERS_H

#include <QPainter>
#include <QtCore>
#include <QBitmap>

class barriers
{
public:
    barriers();

    QPointF m_posi;   // 道具坐标
    double m_size;// 道具尺寸

    int m_born;   // 道具消失的样式

    void setPosi(double x,double y);
    void setBorn(int x);

    QPointF getPosi();
    double getSize();

    void render(QPainter* painter); // 渲染
};


#endif // BARRIERS_H
