#ifndef EMANAGER_H
#define EMANAGER_H
#include "enemy.h"
#include <QList>
#include <QPainter>
#include <QTime>
#include <cmath>
#include <QtAlgorithms>

class Emanager
{
public:
    Emanager();

    void initEmanager();

    QVector<Enemy> m_enemys; // 所有的敌人
    QVector<Enemy>& getEnemysList();

    double m_speed;     // 敌人的移动速度
    double m_timeCount;  // 局部计时器

    QPoint m_rect;  // 活动范围

    void setActiveRect(int x,int y);

    double square(const double num);
    double TwoPtDistance(const QPointF& pt1, const QPointF& pt2);

    void bornNew(QPointF posi);
    bool updateEnemys(QPointF dist, QPointF size);
    void renderEnemys(QPainter* painter);
};

#endif // EMANAGER_H
