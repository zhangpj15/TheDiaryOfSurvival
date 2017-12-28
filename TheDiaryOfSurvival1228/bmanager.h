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

    void initbmanager();// 初始化障碍物管理

    QVector<barriers> m_barriers; // 所有的障碍物
    QVector<barriers>& getbarriersList();

    double m_speed;     // 障碍物的移动速度
    double m_timeCount;  // 局部计时器
    int space=60;

    QRectF m_rect;  // 活动范围
    double square(const double num);// 计算平方
    double TwoPtDistance(const QPointF& pt1, const QPointF& pt2);// 计算两点距离
    void setActiveRect(int x,int y);// 设置活动区域

    void bornNew(QPointF posi);// 生成新障碍物
    bool updatebarriers(QPointF dist, double size);// 更新障碍物
    void renderbarriers(QPainter* painter);// 渲染
};

#endif // BMANAGER_H
