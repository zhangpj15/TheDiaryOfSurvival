#include "bmanager.h"
#include "player.h"

QPointF m_playerPosi_barriers;  // 本地备份玩家的位置
bool compareDist(const barriers &l, const barriers &r);

bmanager::bmanager()
{
}

void bmanager::initbmanager()
{
    m_barriers.clear();
    m_timeCount = 0;
}

void bmanager::setActiveRect(int x, int y)
{
    m_rect = QPoint(x,y);
}

QVector<barriers>& bmanager::getbarriersList()
{
    return m_barriers;
}

void bmanager::bornNew(QPointF posi)
{
    static int count = 0;
    count++;
    if(count%300 <299)
        return;

    while(true)
    {
        barriers onebarriers;

        qsrand(QTime::currentTime().msecsSinceStartOfDay()*QTime::currentTime().second());

        onebarriers.setPosi(qrand()%m_rect.x(),qrand()%m_rect.y());
        onebarriers.setBorn(qrand()%9+1);
        double dx = posi.x()-onebarriers.getPosi().x();
        double dy = posi.y()-onebarriers.getPosi().y();

        double leng = sqrt(dx*dx+dy*dy);

        if(leng < 100)
            continue;
        m_barriers.push_back(onebarriers);// 将新生成的货物添加至列表
        return;
    }
}

bool bmanager::updatebarriers(QPointF dist,QPointF size)
{
    m_playerPosi_barriers = dist;
    for(int i=0; i< m_barriers.size(); i++)
    {
        float dx = dist.x()+size.x()*0.5-m_barriers[i].getPosi().x()-m_barriers[i].getSize()*0.5;
        float dy = dist.y()+size.y()*0.5-m_barriers[i].getPosi().y()-m_barriers[i].getSize()*0.5;

        float length = sqrt(dx*dx+dy*dy);
        float range=(m_barriers[i].getSize()*0.5+size.x()*0.5)*1.414;
        if(length<=range)                // 如果距离小于1,那么游戏结束
            return true;

        dx/=length;
        dy/=length;


        m_barriers[i].setPosi(m_barriers[i].getPosi().x()+dx*m_speed,
                           m_barriers[i].getPosi().y()+dy*m_speed);
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

