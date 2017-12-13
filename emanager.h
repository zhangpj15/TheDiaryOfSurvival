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

    void initEmanager();// 初始化敌人管理器

    QVector<Enemy> m_enemys; // 所有的敌人
    QVector<Enemy>& getEnemysList();

    double m_speed;     // 敌人的移动速度
    double m_timeCount;  // 局部计时器

    QPoint m_rect;  // 活动范围

    void setActiveRect(int x,int y);// 设置活动区域


    double square(const double num);// 求平方
    double TwoPtDistance(const QPointF& pt1, const QPointF& pt2);// 求两点间距

    void bornNew(QPointF posi);// 生成新敌人
    bool updateEnemys(QPointF dist, QPointF size);// 更新敌人
    void renderEnemys(QPainter* painter);// 渲染敌人

};

#endif // EMANAGER_H
