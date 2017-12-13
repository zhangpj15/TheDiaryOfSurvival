
#ifndef PMANAGER_H
#define PMANAGER_H
#include "bullet.h"
#include "emanager.h"
#include "gmanager.h"
#include "bmanager.h"
#include <QVector2D>

class Pmanager
{
public:
    Pmanager();

    enum{
        _BULLET,
        _SHOTGUN,
        _FIRE
    };

    short m_curAttackType;   // 当前攻击模式
    bool m_isAttacked;       // 是否正在进行攻击
    int m_counter;           // 攻击计时器

    //火焰设置
    int m_counterFire;       // 火焰的喷射计时
    bool m_isCooling;        // 火焰是否处于冷却状态
    int m_countDown;         // 火焰喷射的倒计时

    QList<Bullet> m_bullets;   // 子弹序列

    int m_killNum;          // 当前击杀的敌人数目
    QRectF m_rect;          // 活动范围

    void initPmanager();

    void setActiveRect(double w,double h);
    void setAttacked(bool b);    // 进行攻击
    bool isAttacked();// 是否被攻击

    void changeAttackMode();
    int getAttackModeId();
    QString getAttackMode();
    int getKillNum();
    bool isCooling();
    int getCountDownNum();// 火焰冷却时间
    int getCountFireNum();// 火焰攻击时间

    QString getgoodsMode(int i);

    QString getgoodsMode(int i);

    // ------------------------------------------------
    double square(const double num);
    double TwoPtDistance(const QPointF& pt1, const QPointF& pt2);
    void checkKnockWithEnemys(QVector<Enemy>& enemys,QPointF posi, double dir);
    int checkKnockWithgoods(QVector<goods>& goods,QPointF posi);

    void updateAttackEffect(QPointF posi,QPointF size,double dir);

    void renderAttackEffect(QPainter* painter, QPointF posi,double size, double dir,QString str);
    void renderBullets(QPainter* painter,QString str);
    void renderFlame(QPainter* painter, QPointF posi,double size, double dir);
};

#endif // PMANAGER_H
