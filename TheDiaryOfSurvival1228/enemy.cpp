#include "enemy.h"
#include "QSound"
Enemy::Enemy()
{
    m_size = 50;

    m_isAlive = true;
    m_countDown = 100;
    m_deathType = qrand()%4+1;
    m_born=1;
}

void Enemy::setPosi(double x, double y)
{
    m_posi = QPointF(x,y);
}

void Enemy::setColor(int x, int y, int z)
{
    m_color = QColor(x,y,z);
}
void Enemy::setBorn(int x)
{
    m_born = x;
}
void Enemy::setIsAlive(bool b)
{
    m_isAlive = b;
}

QPointF Enemy::getPosi()
{
    QPointF posi;
    posi.setX(m_posi.x()+m_size/2.0);
    posi.setY(m_posi.y()+m_size/2.0);
    return m_posi;
}

double Enemy::getSize()
{
    return m_size;
}

QColor Enemy::getColor()
{
    return m_color;
}

bool Enemy::isAlive()
{
    return m_isAlive;
}

int Enemy::getCountDown()
{
    return m_countDown;
}

void Enemy::render(QPainter *painter)
{
    if(m_isAlive)painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,QPixmap(QString(":/res/img/mask/enermy_(%1).png").arg(m_born)));
    else
    {

        QPixmap pixmap(m_size,m_size);

        pixmap.fill(m_color);
        pixmap.setMask(QPixmap(QString(":/res/img/mask/mask%1.png").arg(m_deathType))
                       .scaled(m_size,m_size).mask());

        painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,pixmap);

        m_countDown--;
        m_color.setRed((m_color.red()+2)<255?m_color.red()+2:255);
        m_color.setGreen((m_color.green()+2)<251?m_color.green()+2:251);
        m_color.setBlue((m_color.blue()+2)<242?m_color.blue()+2:242);

    }
}
