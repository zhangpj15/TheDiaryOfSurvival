#ifndef BOMANAGER_H
#define BOMANAGER_H

#include "boss.h"
#include <QList>
#include <QPainter>
#include <QTime>
#include <cmath>
#include <QtAlgorithms>
#include "bullet.h"

class Bomanager
{
public:
    Bomanager();

    void initBomanager();// 初始化敌人管理器

    QVector<Boss> m_boss; // 所有的敌人
    QVector<Boss>& getBossList();

    double m_speed;     // 敌人的移动速度
    double m_timeCount;  // 局部计时器
    int space=60;

    QRectF m_rect;  // 活动范围

    void setActiveRect(int x,int y);// 设置活动区域

    double square(const double num);// 求平方
    double TwoPtDistance(const QPointF& pt1, const QPointF& pt2);// 求两点间距

    void bornNew(QPointF posi,int num);// 生成新敌人
    bool updateBoss(QPointF dist, double size);// 更新敌人
    void renderBoss(QPainter* painter);// 渲染敌人
};


#endif // BOMANAGER_H
