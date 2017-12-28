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

    QVector<goods> m_goods; // 所有的道具
    QVector<goods>& getgoodsList();

    double m_speed;     // 道具的移动速度
    double m_timeCount;  // 局部计时器

    QRectF m_rect;  // 活动范围
    int space=60;

    void setActiveRect(int x,int y);

    void bornNew(QPointF posi);
    bool updategoods(QPointF dist, double size);
    void rendergoods(QPainter* painter);
};


#endif // GMANAGER_H
