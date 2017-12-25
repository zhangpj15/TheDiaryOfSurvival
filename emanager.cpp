#include "emanager.h"
#include "player.h"

QPointF m_playerPosi;  // 记录玩家的位置
bool compareDist(const Enemy &l, const Enemy &r);

Emanager::Emanager()
{
}

void Emanager::initEmanager()
{
    m_enemys.clear();
    m_speed = 0.1;
    m_timeCount = 0;
}

void Emanager::setActiveRect(int x, int y)
{
    m_rect = QRectF(0,space,x,y);
}

QVector<Enemy>& Emanager::getEnemysList()
{
    return m_enemys;
}
// 求平方
double Emanager::square(const double num){return num * num;}


// 求两点距离
double Emanager::TwoPtDistance(const QPointF& pt1, const QPointF& pt2)
{return sqrt(double(square(pt2.x() - pt1.x()) + square(pt2.y() - pt1.y())));}

void Emanager::bornNew(QPointF posi)
{
    static int count = 0;
    count++;
    if(count%80 <79)
        return;

    while(true)
    {
        Enemy oneenemy;

        qsrand(QTime::currentTime().msecsSinceStartOfDay()*QTime::currentTime().second());

        oneenemy.setPosi(qrand()%int(m_rect.width()),space+qrand()%(int(m_rect.height())-space));
        oneenemy.setColor(qrand()%256,qrand()%256,qrand()%256);
        oneenemy.setBorn(qrand()%40+1);

        double leng = TwoPtDistance(posi,oneenemy.getPosi());

        if(leng < 100)
            continue;
        m_enemys.push_back(oneenemy);// 将新生成的敌人添加至列表
        return;
    }
}

bool Emanager::updateEnemys(QPointF dist,double size)
{
    m_playerPosi = dist;
    for(int i=0; i< m_enemys.size(); i++)
    {
        if(!m_enemys[i].isAlive())  // 已经死亡的敌人
        {
            if(m_enemys[i].getCountDown()<=0)
            {
                m_enemys.removeAt(i);
                i--;
            }
            continue;
        }
        float dx = dist.x()-m_enemys[i].getPosi().x();
        float dy = dist.y()-m_enemys[i].getPosi().y();

        float length = TwoPtDistance(dist,m_enemys[i].getPosi());
        float range=(m_enemys[i].getSize()+size)*0.3;
        if(length<=range)                // 如果接触,那么游戏结束
            return true;

        dx/=length;
        dy/=length;


        m_enemys[i].setPosi(m_enemys[i].getPosi().x()+dx*m_speed,
                           m_enemys[i].getPosi().y()+dy*m_speed);
    }

    qSort(m_enemys.begin(),m_enemys.end(),compareDist);//更新enermy序列，非常重要，不然有空指针

    return false;

}

void Emanager::renderEnemys(QPainter *painter)
{
    for(int i=0; i<m_enemys.size();i++)
    {
        m_enemys[i].render(painter);
    }
}

bool compareDist(const Enemy &l, const Enemy &r)
{
    double l0 = fabs(l.m_posi.x()-m_playerPosi.x())+fabs(l.m_posi.y()-m_playerPosi.y());
    double l1 = fabs(r.m_posi.x()-m_playerPosi.x())+fabs(r.m_posi.y()-m_playerPosi.y());

    if(l0>l1)
        return true;
    else
        return false;
}

