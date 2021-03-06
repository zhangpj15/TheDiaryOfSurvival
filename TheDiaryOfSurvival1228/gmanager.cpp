#include "gmanager.h"
#include "player.h"
#include "qDebug"
QPointF m_playerPosi_goods;  // 玩家的位置
bool compareDist(const goods &l, const goods &r);

gmanager::gmanager()
{
}

void gmanager::initgmanager()
{
    m_goods.clear();
    m_speed = 0;// 暂时为固定位置道具
    m_timeCount = 0;
}

void gmanager::setActiveRect(int x, int y)
{
    m_rect = QRectF(0,space,x,y);
}

QVector<goods>& gmanager::getgoodsList()
{
    return m_goods;
}

void gmanager::bornNew(QPointF posi)
{

    while(true)
    {
        goods onegoods;

        qsrand(QTime::currentTime().msecsSinceStartOfDay()*QTime::currentTime().second());

        onegoods.setPosi(qrand()%int(m_rect.width()),space+qrand()%(int(m_rect.height())-space));
        onegoods.setColor(qrand()%256,qrand()%256,qrand()%256);
        int num=qrand()%7+1;//随机货物
        //int num=6;
        onegoods.setBorn(num);
        onegoods.setNumber(num);
        double dx = posi.x()-onegoods.getPosi().x();
        double dy = posi.y()-onegoods.getPosi().y();

        double leng = sqrt(dx*dx+dy*dy);

        if(leng < 100)
            continue;
        m_goods.push_back(onegoods);// 将新生成的货物添加至列表
        return;
    }
}

bool gmanager::updategoods(QPointF dist,double size)
{
    m_playerPosi_goods = dist;
    for(int i=0; i< m_goods.size(); i++)
    {
        if(!m_goods[i].isAlive())  // 已经死亡的货物
        {
            if(m_goods[i].getCountDown()<=0)
            {
                m_goods.removeAt(i);
                i--;
            }
            continue;
        }

    }

    qSort(m_goods.begin(),m_goods.end(),compareDist);//更新道具序列，非常重要，不然有空指针

    return false;

}

void gmanager::rendergoods(QPainter *painter)
{
    for(int i=0; i<m_goods.size();i++)
    {
        m_goods[i].render(painter);
    }
}

bool compareDist(const goods &l, const goods &r)
{
    double l0 = fabs(l.m_posi.x()-m_playerPosi_goods.x())+fabs(l.m_posi.y()-m_playerPosi_goods.y());
    double l1 = fabs(r.m_posi.x()-m_playerPosi_goods.x())+fabs(r.m_posi.y()-m_playerPosi_goods.y());

    if(l0>l1)
        return true;
    else
        return false;
}

