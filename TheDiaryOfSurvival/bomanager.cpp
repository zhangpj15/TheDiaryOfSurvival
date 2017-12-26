#include "bomanager.h"
#include "player.h"
#include "qDebug"

QPointF m_playPosi;  // 记录玩家的位置
bool compareDist(const Boss &l, const Boss &r);

Bomanager::Bomanager()
{
}

void Bomanager::initBomanager()
{
    m_boss.clear();
    m_speed = 0.1;
    m_timeCount = 0;
}

void Bomanager::setActiveRect(int x, int y)
{
    m_rect = QRectF(0,space,x,y);
}

QVector<Boss>& Bomanager::getBossList()
{
    return m_boss;
}
// 求平方
double Bomanager::square(const double num){return num * num;}


// 求两点距离
double Bomanager::TwoPtDistance(const QPointF& pt1, const QPointF& pt2)
{return sqrt(double(square(pt2.x() - pt1.x()) + square(pt2.y() - pt1.y())));}

void Bomanager::bornNew(QPointF posi,int num)
{
    if(num%5000!=0){
        qDebug()<<"没boss了";
        return;
        }
    qDebug()<<"生boss了"<<num;
    while(true)
    {
        Boss oneboss;

        qsrand(QTime::currentTime().msecsSinceStartOfDay()*QTime::currentTime().second());

        oneboss.setPosi(qrand()%int(m_rect.width()),space+qrand()%(int(m_rect.height())-space));
        oneboss.setColor(qrand()%256,qrand()%256,qrand()%256);
        oneboss.setBorn(qrand()%40+1);

        double leng = TwoPtDistance(posi,oneboss.getPosi());

        if(leng < 100)
            continue;
        m_boss.push_back(oneboss);// 将新生成的敌人添加至列表
        return;
    }
}

bool Bomanager::updateBoss(QPointF dist,double size)
{
    m_playPosi = dist;
    for(int i=0; i< m_boss.size(); i++)
    {
        if(!m_boss[i].isAlive())  // 已经死亡的敌人
        {
            if(m_boss[i].getCountDown()<=0)
            {
                m_boss.removeAt(i);
                i--;
            }
            continue;
        }
        float dx = dist.x()-m_boss[i].getPosi().x();
        float dy = dist.y()-m_boss[i].getPosi().y();

        float length = TwoPtDistance(dist,m_boss[i].getPosi());
        float range=(m_boss[i].getSize()+size)*0.3;
        if(length<=range)                // 如果接触,那么游戏结束
            return true;

        dx/=length;
        dy/=length;


        m_boss[i].setPosi(m_boss[i].getPosi().x()+dx*m_speed,
                           m_boss[i].getPosi().y()+dy*m_speed);
    }

    qSort(m_boss.begin(),m_boss.end(),compareDist);//更新enermy序列，非常重要，不然有空指针

    return false;

}

void Bomanager::renderBoss(QPainter *painter)
{
    for(int i=0; i<m_boss.size();i++)
    {
        m_boss[i].render(painter);
    }
}

bool compareDist(const Boss &l, const Boss &r)
{
    double l0 = fabs(l.m_posi.x()-m_playPosi.x())+fabs(l.m_posi.y()-m_playPosi.y());
    double l1 = fabs(r.m_posi.x()-m_playPosi.x())+fabs(r.m_posi.y()-m_playPosi.y());

    if(l0>l1)
        return true;
    else
        return false;
}

