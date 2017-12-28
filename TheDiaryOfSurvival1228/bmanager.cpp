#include "bmanager.h"
#include "player.h"

QPointF m_playerPosi_barriers;
bool compareDist(const barriers &l, const barriers &r);

bmanager::bmanager()
{
}

void bmanager::initbmanager()
{
    m_barriers.clear();
    m_timeCount = 0;
    m_speed = 0.1;
}

void bmanager::setActiveRect(int x, int y)
{
    m_rect = QRectF(0,space,x,y);
}

QVector<barriers>& bmanager::getbarriersList()
{
    return m_barriers;
}

// 求平方
double bmanager::square(const double num){return num * num;}


// 求两点距离
double bmanager::TwoPtDistance(const QPointF& pt1, const QPointF& pt2)
{return sqrt(double(square(pt2.x() - pt1.x()) + square(pt2.y() - pt1.y())));}



void bmanager::bornNew(QPointF posi)
{
    while(true)
    {
        barriers onebarriers;
        qsrand(QTime::currentTime().msecsSinceStartOfDay()*QTime::currentTime().second());
        onebarriers.setPosi(0,space+qrand()%(int(m_rect.height())-space));
        onebarriers.setBorn(qrand()%23+1);

        double length = TwoPtDistance(posi,onebarriers.getPosi());

        if(length < 100)
            continue;
        m_barriers.push_back(onebarriers);// 将新生成的障碍物添加至障碍物列表
        return;
    }
}

bool bmanager::updatebarriers(QPointF dist,double size)
{
    m_playerPosi_barriers = dist;
    for(int i=0; i< m_barriers.size(); i++)
    {
        float length = TwoPtDistance(dist,m_barriers[i].getPosi());
        float dis=10;
        float range=(m_barriers[i].getSize()+size)*0.3;
        m_barriers[i].setPosi(m_barriers[i].getPosi().x()+dis*m_speed,
                              m_barriers[i].getPosi().y());
        if(length<=range)                // 如果接触,那么游戏结束
            return true;

    }

    qSort(m_barriers.begin(),m_barriers.end(),compareDist);//更新enermy序列，非常重要，不然有空指针

    return false;

}

void bmanager::renderbarriers(QPainter *painter)
{
    for(int i=0; i<m_barriers.size();i++)
    {
        m_barriers[i].render(painter);
    }
}

bool compareDist(const barriers &l, const barriers &r)
{
    double l0 = fabs(l.m_posi.x()-m_playerPosi_barriers.x())+fabs(l.m_posi.y()-m_playerPosi_barriers.y());
    double l1 = fabs(r.m_posi.x()-m_playerPosi_barriers.x())+fabs(r.m_posi.y()-m_playerPosi_barriers.y());

    if(l0>l1)
        return true;
    else
        return false;
}

