#include "bullet.h"

Bullet::Bullet()
{
    m_isLive = true;
    m_size = 25;
    m_speed = 3;
    m_pic=":/res/img/bullets/bullets (1).png";
}

void Bullet::setPosi(double x, double y)
{
    m_posi = QPointF(x,y);
}

void Bullet::setDir(double d)
{
    m_dir = d;
}

bool Bullet::isAlive()
{
    return m_isLive;
}

double Bullet::getSpeed()
{
    return m_speed;
}
void Bullet::changepic(QString str)
{
    m_pic=str;
}

QPointF Bullet::getPosi()
{
    QPointF posi;
    posi.setX(m_posi.x()+m_size/2.0);
    posi.setY(m_posi.y()+m_size/2.0);
    return posi;
}

double Bullet::getDir()
{
    return m_dir;
}

void Bullet::updateBullet()
{
    double nextX = m_posi.x()+m_speed*sin(3.14*m_dir/180.0);
    double nextY = m_posi.y()-m_speed*cos(3.14*m_dir/180.0);
    m_posi = QPointF(nextX,nextY);
}

void Bullet::renderBullet(QPainter *painter)
{
    painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,QPixmap(m_pic));
}
