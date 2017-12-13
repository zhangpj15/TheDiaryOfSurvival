#ifndef BARRIERS_H
#define BARRIERS_H

#include <QPainter>
#include <QtCore>
#include <QBitmap>

class barriers
{
public:
    barriers();

    QPointF m_posi;   // 障碍物坐标
    double m_size;// 障碍物尺寸

    int m_born;   // 障碍物生成的样式

    void setPosi(double x,double y); // 设置障碍物位置
    void setBorn(int x); // 设置障碍物生成的样式

    QPointF getPosi();
    double getSize();

    void render(QPainter* painter); // 渲染
};


#endif // BARRIERS_H
