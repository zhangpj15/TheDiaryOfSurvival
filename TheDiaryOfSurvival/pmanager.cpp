#include "pmanager.h"
#include "qDebug"

Pmanager::Pmanager()
{
    m_curAttackType = _FIRE;
    m_isAttacked = false;
    m_killNum = 0;

    m_countDown = 0;//    火焰计时冷却
    m_counterFire = 0;
    m_isCooling = false;
}

void Pmanager::initPmanager()
{
    m_curAttackType = _FIRE;
    m_isAttacked = false;
    m_killNum = 0;

    m_countDown = 0;
    m_counterFire = 0;
    m_isCooling = false;

    m_bullets.clear();
}
// 定义活动范围
void Pmanager::setActiveRect(double w, double h)
{
    m_rect = QRectF(0,61,w,h);
}
// 检测是否被攻击
bool Pmanager::isAttacked()
{
    m_isAttacked = 0;
    return m_isAttacked;
}
// 设置是否被攻击
void Pmanager::setAttacked(bool b)
{
    m_isAttacked = b;

    if(m_isAttacked == false)
    {
        m_counter = 0;
    }
}
// 改变攻击模式
void Pmanager::changeAttackMode(short num)
{
    m_curAttackType = num;
}
// 返回火焰冷却时间
QString Pmanager::getAttackMode()
{
    switch (m_curAttackType) {
    case _BULLET:
        return "Normal Bullet";
    case _SHOTGUN:
        return "Shot Gun";
    case _FIRE:
        return "Fire Gun";
    case _MESS:
        return "Mess";
    }
}
// 返回商品
QString Pmanager::getgoodsMode(int i)
{
    switch (i) {
    case 0:
        return "None";
    case 1:
        return "Speed up";
    case 2:
        return "large";
    case 3:
        return "Speed low";
    case 4:
        return "small";
    case 5:
        return "changeType";
    case 6:
        return "changeType";
    case 7:
        return "changeBullets";
    }
}
// 返回攻击模式
int Pmanager::getAttackModeId()
{
    return m_curAttackType;
}
// 返回击杀敌人数量
int Pmanager::getKillNum()
{
    return m_killNum;
}
// 返回火焰是否冷却
bool Pmanager::isCooling()
{
    return m_isCooling;
}
// 返回火焰冷却时间
int Pmanager::getCountDownNum()
{
    return m_countDown;
}
// 返回火焰燃烧时间
int Pmanager::getCountFireNum()
{
    return m_counterFire;
}

// 求平方
double Pmanager::square(const double num){return num * num;}

// 求两点距离
double Pmanager::TwoPtDistance(const QPointF& pt1, const QPointF& pt2)
{return sqrt(double(square(pt2.x() - pt1.x()) + square(pt2.y() - pt1.y())));}

// 检测敌人受攻击情况
void Pmanager::checkKnockWithEnemys(QVector<Enemy> &enemys, QPointF posi, double dir)
{
    // 检测子弹的进入障碍区

    for(int i=0; i<m_bullets.size();i++)
    {
        if(!m_rect.contains(m_bullets[i].getPosi()))// 子弹飞出界外，删除
        {
            m_bullets.removeAt(i--);
            continue;
        }

        for(int k=0; k<enemys.size();k++)// 检测敌人是否被击中
        {
            if(!enemys[k].isAlive())
                continue;
        if( TwoPtDistance(enemys[k].getPosi(),m_bullets[i].getPosi())<(enemys[k].getSize()+m_bullets[i].m_size)*0.5)
            {
                enemys[k].setIsAlive(false);
                m_bullets.removeAt(i--);
                m_killNum++;   // 击杀一个敌人
                break;
            }
        }
    }

// 检测火焰产生的碰撞
    if( !m_isAttacked||m_curAttackType!=_FIRE || m_isCooling)
        return;

    // 将 posi从玩家中心移动到火焰中心
    posi.setX(posi.x()+sin(3.14*dir/180.0)*90);
    posi.setY(posi.y()-cos(3.14*dir/180.0)*90);

    QPolygonF polygon;          // 未变换的多边形
    polygon<<QPointF(posi.x(),posi.y()-50)
           <<QPointF(posi.x()-35,posi.y()+35)
           <<QPointF(posi.x(),posi.y()+75)
           <<QPointF(posi.x()+35,posi.y()+35);

    QMatrix matrix;   // 计算旋转矩阵matrix
    matrix.translate(posi.x(),posi.y());    // 平移到火焰中心
    matrix.rotate(dir);    // 旋转
    matrix.translate(-posi.x(),-posi.y());   // 平移回原位置

    polygon = polygon*matrix;   // 多边形的坐标，随player旋转

    for(int i=0; i<enemys.size();i++)
    {
        if(!enemys[i].isAlive())
            continue;

        if(polygon.containsPoint(enemys[i].getPosi(),Qt::WindingFill))
        {
            enemys[i].setIsAlive(false);
            m_killNum++;   // 击杀一个敌人
        }
    }
}
void Pmanager::checkKnockWithBoss(QVector<Boss> &bosses, QPointF posi, double dir)
{
    // 检测子弹的进入障碍区

    for(int i=0; i<m_bullets.size();i++)
    {
        if(!m_rect.contains(m_bullets[i].getPosi()))// 子弹飞出界外，删除
        {
            m_bullets.removeAt(i--);
            continue;
        }

        for(int k=0; k<bosses.size();k++)// 检测boss是否被击中
        {
            if(!bosses[k].isAlive())
                continue;
        if( TwoPtDistance(bosses[k].getPosi(),m_bullets[i].getPosi())<(bosses[k].getSize()+m_bullets[i].m_size)*0.5)
            {
                bosses[k].setIsAlive(false);
                m_bullets.removeAt(i--);
                m_killNum++;   // 击杀一个敌人
                break;
            }
        }
    }

// 检测火焰产生的碰撞
    if( !m_isAttacked||m_curAttackType!=_FIRE || m_isCooling)
        return;

    // 将 posi从玩家中心移动到火焰中心
    posi.setX(posi.x()+sin(3.14*dir/180.0)*90);
    posi.setY(posi.y()-cos(3.14*dir/180.0)*90);

    QPolygonF polygon;          // 未变换的多边形
    polygon<<QPointF(posi.x(),posi.y()-50)
           <<QPointF(posi.x()-35,posi.y()+35)
           <<QPointF(posi.x(),posi.y()+75)
           <<QPointF(posi.x()+35,posi.y()+35);

    QMatrix matrix;   // 计算旋转矩阵matrix
    matrix.translate(posi.x(),posi.y());    // 平移到火焰中心
    matrix.rotate(dir);    // 旋转
    matrix.translate(-posi.x(),-posi.y());   // 平移回原位置

    polygon = polygon*matrix;   // 多边形的坐标，随player旋转

    for(int i=0; i<bosses.size();i++)
    {
        if(!bosses[i].isAlive())
            continue;

        if(polygon.containsPoint(bosses[i].getPosi(),Qt::WindingFill))
        {
            bosses[i].setIsAlive(false);
            m_killNum++;   // 击杀一个敌人
        }
    }
}

// 检测吃道具
int Pmanager::checkKnockWithgoods(QVector<goods> &goods, QPointF posi,double player_size)
{
    // 检测子弹的进入障碍区
        int num=0;
        for(int k=0; k<goods.size();k++)// 检测商品是否被吃掉
        {
            if(!goods[k].isAlive())
                continue;
            if( TwoPtDistance(goods[k].getPosi(),posi)<(goods[k].getSize()+player_size)*0.5 )
            {
                goods[k].setIsAlive(false);
                num=goods[k].getNumber();
                return num;
            }
        }
        return 0;
}


//    更新攻击
void Pmanager::updateAttackEffect(QPointF posi, double size, double dir)
{
    // 更新所有的子弹
    for(int i=0; i<m_bullets.size();i++)
    {
        m_bullets[i].updateBullet();
    }

    // 更新一下火焰的冷却数据
    if(m_isCooling)
    {
        m_countDown+=1;
        if(m_countDown>200)
        {
            m_counterFire = 0;
            m_isCooling = false;
            m_countDown = 0;
        }
    }

    //若仍处于攻击状态则生成新的子弹
    if(m_isAttacked)
    {
        switch(m_curAttackType)
        {
        case _BULLET:
        {
            if(!(m_counter%20==0||m_counter==0))
                break;
            // 子弹攻击
            QPointF s;

            s.setX(posi.x()+size/2.0*sin(3.14*dir/180.0));    // 设置新子弹的位置
            s.setY(posi.y()-size/2.0*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir);

            m_bullets.push_back(temp);
            break;
        }
        case _SHOTGUN:
        {
            if(!(m_counter%40==0||m_counter==0))
                break;
            // 散弹攻击
            QPointF s;

            s.setX(posi.x()+2*sin(3.14*dir/180.0));
            s.setY(posi.y()-2*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir);

            m_bullets.push_back(temp);

            for(int i=0; i<3; i=i+1)// 扇形发出
            {
                temp.setDir(dir-(i+1)*10);
                m_bullets.push_back(temp);
                temp.setDir(dir+(i+1)*10);
                m_bullets.push_back(temp);
            }
            break;
        }
        case _MESS:
        {
            if(!(m_counter%30==0||m_counter==0))
                break;
            // 散弹攻击
            QPointF s;

            s.setX(posi.x()+4*sin(3.14*dir/180.0));
            s.setY(posi.y()-4*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir);

            m_bullets.push_back(temp);

            for(int i=0; i<3; i=i+1)// 矩形发出
            {
                temp.setPosi(s.x()+2*sin(3.14*dir/180.0),s.y()-2*cos(3.14*dir/180.0));
                temp.setDir(dir-(i+1)*10);
                m_bullets.push_back(temp);
                temp.setDir(dir+(i+1)*10);
                m_bullets.push_back(temp);
                break;
            }
        }
        case _FIRE:

            if(m_counterFire>200)   // 火焰喷射时间超过200,停止喷射
            {
                setAttacked(false);
                m_isCooling = true;
            }

            m_counterFire++;
            break;
        }

        m_counter++;
//        qDebug()<<(m_counter);
    }
}

//    绘制攻击效果
void Pmanager::renderAttackEffect(QPainter* painter, QPointF posi, double size, double dir,QString str)
{
    renderFlame(painter,posi,size,dir);
    renderBullets(painter,str);
}

//    绘制火焰
void Pmanager::renderFlame(QPainter *painter, QPointF posi, double size, double dir)
{
    if(m_curAttackType != _FIRE || !m_isAttacked || m_isCooling)
        return;

    static double i = 1;

    double w = 100,h=150;  // 火焰尺寸

    if(m_counterFire > 100)
    {
        w-=m_counterFire/4;
        h-=m_counterFire/4;
    }

    posi.setX(posi.x()+sin(3.14*dir/180.0)*(size+h/2-10));  // 将 posi 从玩家中心移动到火焰中心
    posi.setY(posi.y()-cos(3.14*dir/180.0)*(size+h/2-10));

    painter->save();
    painter->translate(posi.x(),posi.y());
    painter->rotate(dir);
    painter->translate(-posi.x(),-posi.y());
    painter->drawPixmap(posi.x()-w/2,posi.y()-h/2,w,h,QPixmap(QString(":/res/img/flame/flame%1.png").arg((int)i)));
    painter->restore();

    i= i+0.2>5?1:i+0.2;
}

//    绘制子弹
void Pmanager::renderBullets(QPainter *painter,QString str)
{
    for(int i=0; i<m_bullets.size(); i++)
    {
        m_bullets[i].changepic(str);
        m_bullets[i].renderBullet(painter);
    }
}

