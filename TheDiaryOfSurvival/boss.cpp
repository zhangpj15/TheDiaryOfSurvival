#include "boss.h"

Boss::Boss()
{
    m_size = 100;
    m_life=100;
    m_isAlive = true;
    m_countDown = 10;
    m_deathType = qrand()%4+1;
    m_born=1;
}

void Boss::setPosi(double x, double y)
{
    m_posi = QPointF(x,y);
}

void Boss::setColor(int x, int y, int z)
{
    m_color = QColor(x,y,z);
}
void Boss::setBorn(int x)
{
    m_born = x;
}
void Boss::setIsAlive(bool b)
{
    m_isAlive = b;
}

QPointF Boss::getPosi()
{
    QPointF posi;
    posi.setX(m_posi.x()+m_size/2.0);
    posi.setY(m_posi.y()+m_size/2.0);
    return m_posi;
}

double Boss::getSize()
{
    return m_size;
}

QColor Boss::getColor()
{
    return m_color;
}

bool Boss::isAlive()
{
    return m_isAlive;
}

int Boss::getCountDown()
{
    return m_countDown;
}

void Boss::render(QPainter *painter)
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
