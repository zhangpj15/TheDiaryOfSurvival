#include "pmanager.h"

Pmanager::Pmanager()
{
    m_curAttackType = _FIRE;
    m_isAttacked = false;
    m_killNum = 0;

//    m_countDown = 0;
//    m_counterFire = 0;
//    m_isCooling = false;
}

void Pmanager::initPmanager()
{
    m_curAttackType = _FIRE;
    m_isAttacked = false;
    m_killNum = 0;

//    m_countDown = 0;
//    m_counterFire = 0;
//    m_isCooling = false;

    m_bullets.clear();
}

void Pmanager::setActiveRect(double w, double h)
{
    m_rect = QRectF(0,0,w,h);
}

bool Pmanager::isAttacked()
{
    m_isAttacked = 0;
    return m_isAttacked;
}

void Pmanager::setAttacked(bool b)
{
    m_isAttacked = b;

    if(m_isAttacked == false)
    {
        m_counter = 0;
    }
}

void Pmanager::changeAttackMode()
{
    m_curAttackType = (m_curAttackType+1>=3)?0:m_curAttackType+1;
}

QString Pmanager::getAttackMode()
{
    switch (m_curAttackType) {
    case _BULLET:
        return "Normal Bullet";
    case _SHOTGUN:
        return "Shot Gun";
    case _FIRE:
        return "Fire Gun";
    }
}

int Pmanager::getAttackModeId()
{
    return m_curAttackType;
}

int Pmanager::getKillNum()
{
    return m_killNum;
}

//bool Pmanager::isCooling()
//{
//    return m_isCooling;
//}

//int Pmanager::getCountDownNum()
//{
//    return m_countDown;
//}

//int Pmanager::getCountFireNum()
//{
//    return m_counterFire;
//}

void Pmanager::checkKnockWithEnemys(QVector<Enemy> &enemys, QPointF posi, double dir)
{
    // 检测子弹产生的碰撞
    for(int i=0; i<m_bullets.size();i++)
    {
        if(!m_rect.contains(m_bullets[i].getPosi()))
        {
            m_bullets.removeAt(i--);
            continue;
        }
        // 子弹形成的矩形区域
        QPointF bpos1 = m_bullets[i].getPosi();

        for(int k=0; k<enemys.size();k++)
        {
            if(!enemys[k].isAlive())
                continue;
            QPointF eposi = enemys[k].getPosi();
            double dx = bpos1.x()-eposi.x();
            double dy = bpos1.y()-eposi.y();

            double l = fabs(dx)+fabs(dy);
            if( l<10 )
            {
                enemys[k].setIsAlive(false);
                m_bullets.removeAt(i--);

                m_killNum++;   // 击杀一个敌人
                break;
            }
        }
    }

    // 检测火焰产生的碰撞
//    if( !m_isAttacked||m_curAttackType!=_FIRE || m_isCooling)
     if( !m_isAttacked||m_curAttackType!=_FIRE)
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

    polygon = polygon*matrix;   // 多边形的坐标

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

void Pmanager::updateAttackEffect(QPointF posi, QPointF size, double dir)
{
    // 更新所有的子弹
    for(int i=0; i<m_bullets.size();i++)
    {
        m_bullets[i].updateBullet();
    }

//    // 更新一下火焰的冷却数据
//    if(m_isCooling)
//    {
//        m_countDown+=1;
//        if(m_countDown>200)
//        {
//            m_counterFire = 0;
//            m_isCooling = false;
//            m_countDown = 0;
//        }
//    }

    //若仍处于攻击状态则生成新的子弹
    if(m_isAttacked)
    {
        switch(m_curAttackType)
        {
        case _BULLET:
        {
            if(!(m_counter%15==0||m_counter==0))
                break;
            // 子弹攻击
            QPointF s;

            s.setX(posi.x()+size.x()/2.0*sin(3.14*dir/180.0));    // 设置新子弹的位置
            s.setY(posi.y()-size.y()/2.0*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir);

            m_bullets.push_back(temp);
            break;
        }
        case _SHOTGUN:
        {
            if(!(m_counter%20==0||m_counter==0))
                break;
            // 散弹攻击
            QPointF s;

            s.setX(posi.x()+2*sin(3.14*dir/180.0));
            s.setY(posi.y()-2*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir);

            m_bullets.push_back(temp);

            for(int i=0; i<3; i++)
            {
                temp.setDir(dir-(i+1)*10);
                m_bullets.push_back(temp);
                temp.setDir(dir+(i+1)*10);
                m_bullets.push_back(temp);
            }
            break;
        }
        case _FIRE:

//            if(m_counterFire>200)   // 火焰喷射时间超过200,停止喷射
//            {
//                setAttacked(false);
//                m_isCooling = true;
//            }

//            m_counterFire++;
            break;
        }

        m_counter++;
    }
}

void Pmanager::renderAttackEffect(QPainter* painter, QPointF posi, double size, double dir)
{
    renderFlame(painter,posi,size,dir);
    renderBullets(painter);
}

void Pmanager::renderFlame(QPainter *painter, QPointF posi, double size, double dir)
{
//    if(m_curAttackType != _FIRE || !m_isAttacked || m_isCooling)
     if(m_curAttackType != _FIRE || !m_isAttacked)
        return;

    static double i = 1;

    double w = 100,h=150;  // 火焰尺寸

//    if(m_counterFire > 100)
//    {
//        w-=m_counterFire/4;
//        h-=m_counterFire/4;
//    }

    posi.setX(posi.x()+sin(3.14*dir/180.0)*(size+h/2-10));  // 将 posi 从玩家中心移动到火焰中心
    posi.setY(posi.y()-cos(3.14*dir/180.0)*(size+h/2-10));

    painter->save();
    painter->translate(posi.x(),posi.y());
    painter->rotate(dir);
    painter->translate(-posi.x(),-posi.y());
    painter->drawPixmap(posi.x()-w/2,posi.y()-h/2,w,h,QPixmap(QString(":/res/img/flame/flame%1.png").arg((int)i)));
    painter->restore();

//    QPolygonF polygon;
//    polygon<<QPointF(posi.x(),posi.y()-50)
//           <<QPointF(posi.x()-35,posi.y()+35)
//           <<QPointF(posi.x(),posi.y()+75)
//           <<QPointF(posi.x()+35,posi.y()+35);

//    QMatrix matrix;   // 计算旋转矩阵
//    matrix.translate(posi.x(),posi.y());
//    matrix.rotate(dir);
//    matrix.translate(-posi.x(),-posi.y());

//    polygon = polygon*matrix;
//    painter->drawPolygon(polygon);

    i= i+0.2>5?1:i+0.2;
}

void Pmanager::renderBullets(QPainter *painter)
{
    for(int i=0; i<m_bullets.size(); i++)
    {
        m_bullets[i].renderBullet(painter);
    }
}
