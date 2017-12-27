
#ifndef PMANAGER_H
#define PMANAGER_H
#include "bullet.h"
#include "emanager.h"
#include "gmanager.h"
#include "bmanager.h"
#include "bomanager.h"
#include <QVector2D>

class Pmanager
{
public:
    Pmanager();

    enum{
        _BULLET,
        _SHOTGUN,
        _FIRE,
        _MESS
    };

    short m_curAttackType;   // 当前攻击模式
    bool m_isAttacked;       // 是否正在进行攻击
    int m_counter;           // 攻击计时器,计算按键按下时间

    //火焰设置
    int m_counterFire;       // 火焰的喷射计时
    bool m_isCooling;        // 火焰是否处于冷却状态
    int m_countDown;         // 火焰喷射的倒计时

    QList<Bullet> m_bullets;   // 子弹序列

    int m_killNum;          // 当前击杀的敌人数目
    int m_money;
    int m_skill_1;
    int m_skill_2;
    int m_skill_3;
    QRectF m_rect;          // 活动范围
    QRectF m_lifeZone;

    void initPmanager();

    void setLifeRect(double w,double h);
    void setActiveRect(double w,double h);
    void setAttacked(bool b);    // 进行攻击
    bool setMoney(int a);    // 进行攻击
    void setSkill_1(bool a);    // 进行攻击
    void setSkill_2(bool a);    // 进行攻击
    void setSkill_3(bool a);// 是否被攻击
    bool isAttacked();

    void changeAttackMode(short num);
    int getAttackModeId();
    QString getAttackMode();
    int getKillNum();
    int getMoney();
    int getSkill_1();
    int getSkill_2();
    int getSkill_3();



    bool isCooling();
    int getCountDownNum();// 火焰冷却时间
    int getCountFireNum();// 火焰攻击时间

    QString getgoodsMode(int i);

    // ------------------------------------------------
    double square(const double num);
    double TwoPtDistance(const QPointF& pt1, const QPointF& pt2);
    void checkKnockWithEnemys(QVector<Enemy>& enemys,QPointF posi, double dir);
    void checkKnockWithBoss(QVector<Boss>& bosses,QPointF posi, double dir);
    int checkKnockWithgoods(QVector<goods>& goods,QPointF posi,double player_size);

    void updateAttackEffect(QPointF posi,double size,double dir);

    void renderAttackEffect(QPainter* painter, QPointF posi,double size, double dir,QString str);
    void renderBullets(QPainter* painter,QString str);
    void renderFlame(QPainter* painter, QPointF posi,double size, double dir);


};

#endif // PMANAGER_H
