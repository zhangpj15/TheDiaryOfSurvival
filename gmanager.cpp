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
    m_rect = QPoint(x,y);
}

QVector<goods>& gmanager::getgoodsList()
{
    return m_goods;
}

void gmanager::bornNew(QPointF posi)
{
    static int count = 0;
    count++;
    if(count%500 <499)
        return;

    while(true)
    {
        goods onegoods;

        qsrand(QTime::currentTime().msecsSinceStartOfDay()*QTime::currentTime().second());

        onegoods.setPosi(qrand()%m_rect.x(),qrand()%m_rect.y());
        onegoods.setColor(qrand()%256,qrand()%256,qrand()%256);
        int num=qrand()%7+1;
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

bool gmanager::updategoods(QPointF dist,QPointF size)
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
                qDebug()<<("货物被吃掉");
            }
            continue;
        }
//        float dx = dist.x()+size.x()*0.5-m_goods[i].getPosi().x()-m_goods[i].getSize()*0.5;
//        float dy = dist.y()+size.y()*0.5-m_goods[i].getPosi().y()-m_goods[i].getSize()*0.5;

//        float length = sqrt(dx*dx+dy*dy);
//        float range=(m_goods[i].getSize()*0.5+size.x()*0.4);
//        if(length<=range)                // 如果距离小于1,那么游戏结束
//            return true;

//        dx/=length;
//        dy/=length;


//        m_goods[i].setPosi(m_goods[i].getPosi().x()+dx*m_speed,
//                           m_goods[i].getPosi().y()+dy*m_speed);
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

