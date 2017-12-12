#ifndef GMANAGER_H
#define GMANAGER_H
#include "goods.h"
#include <QList>
#include <QPainter>
#include <QTime>
#include <cmath>
#include <QtAlgorithms>

class gmanager
{
public:
    gmanager();

    void initgmanager();

    QVector<goods> m_goods; // 所有的敌人
    QVector<goods>& getgoodsList();

    double m_speed;     // 敌人的移动速度
    double m_timeCount;  // 局部计时器

    QPoint m_rect;  // 活动范围

    void setActiveRect(int x,int y);

    void bornNew(QPointF posi);
    bool updategoods(QPointF dist, QPointF size);
    void rendergoods(QPainter* painter);
};


#endif // GMANAGER_H
