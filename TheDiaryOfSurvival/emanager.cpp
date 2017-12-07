#include "emanager.h"

QPointF m_playerPosi;  // 本地备份玩家的位置
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
    m_rect = QPoint(x,y);
}

QVector<Enemy>& Emanager::getEnemysList()
{
    return m_enemys;
}

void Emanager::bornNew(QPointF posi)
{
    static int count = 0;
    count++;
    if(count%10 <9)
        return;

    while(true)
    {
        Enemy oneenemy;

        qsrand(QTime::currentTime().msecsSinceStartOfDay()*QTime::currentTime().second());

        oneenemy.setPosi(qrand()%m_rect.x(),qrand()%m_rect.y());
        oneenemy.setColor(qrand()%256,qrand()%256,qrand()%256);

        double dx = posi.x()-oneenemy.getPosi().x();
        double dy = posi.y()-oneenemy.getPosi().y();

        double leng = sqrt(dx*dx+dy*dy);

        if(leng < 100)
            continue;
        m_enemys.push_back(oneenemy);// 将新生成的敌人添加至列表
        return;
    }
}

bool Emanager::updateEnemys(QPointF dist)
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

        float length = sqrt(dx*dx+dy*dy);

        if(length<=10)                // 如果距离小于1,那么游戏结束
            return true;

        dx/=length;
        dy/=length;


        m_enemys[i].setPosi(m_enemys[i].getPosi().x()+dx*m_speed,
                           m_enemys[i].getPosi().y()+dy*m_speed);
    }

    qSort(m_enemys.begin(),m_enemys.end(),compareDist);

    // 更新一下移动速度

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

