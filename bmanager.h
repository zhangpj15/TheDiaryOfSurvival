#ifndef BMANAGER_H
#define BMANAGER_H
#include "barriers.h"
#include <QList>
#include <QPainter>
#include <QTime>
#include <cmath>
#include <QtAlgorithms>

class bmanager
{
public:
    bmanager();

    void initbmanager();

    QVector<barriers> m_barriers; // 所有的敌人
    QVector<barriers>& getbarriersList();

    double m_speed;     // 敌人的移动速度
    double m_timeCount;  // 局部计时器

    QPoint m_rect;  // 活动范围

    void setActiveRect(int x,int y);

    void bornNew(QPointF posi);
    bool updatebarriers(QPointF dist, QPointF size);
    void renderbarriers(QPainter* painter);
};

#endif // BMANAGER_H
