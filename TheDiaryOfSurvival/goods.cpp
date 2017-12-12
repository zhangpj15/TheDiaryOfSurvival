#include "goods.h"

goods::goods()
{
    m_size = 10;
    m_isAlive = true;
    m_countDown = 100;
    m_deathType = qrand()%2+1;
    m_born = qrand()%9+1;
}

void goods::setPosi(double x, double y)
{
    m_posi = QPointF(x,y);
}

void goods::setColor(int x, int y, int z)
{
    m_color = QColor(x,y,z);
}
void goods::setBorn(int x)
{
    m_born = x;
}
void goods::setIsAlive(bool b)
{
    m_isAlive = b;
}

QPointF goods::getPosi()
{
    QPointF posi;
    posi.setX(m_posi.x()+m_size/2.0);
    posi.setY(m_posi.y()+m_size/2.0);
    return m_posi;
}

double goods::getSize()
{
    return m_size;
}

QColor goods::getColor()
{
    return m_color;
}

bool goods::isAlive()
{
    return m_isAlive;
}

int goods::getCountDown()
{
    return m_countDown;
}

void goods::render(QPainter *painter)
{
    if(m_isAlive)painter->drawPixmap(m_posi.x(),m_posi.y(),m_size*5,m_size*5,QPixmap(QString(":/res/img/goods/goods (%1).png").arg(m_born)));
    else
    {

        QPixmap pixmap(m_size*5,m_size*5);

        pixmap.fill(m_color);
        pixmap.setMask(QPixmap(QString(":/res/img/goods/fireworks %1.png").arg(m_deathType))
                       .scaled(m_size*5,m_size*5).mask());

        painter->drawPixmap(m_posi.x(),m_posi.y(),m_size*5,m_size*5,pixmap);

        // 同时颜色降低暗度
        m_countDown--;

        m_color.setRed((m_color.red()+2)<255?m_color.red()+2:255);
        m_color.setGreen((m_color.green()+2)<251?m_color.green()+2:251);
        m_color.setBlue((m_color.blue()+2)<242?m_color.blue()+2:242);
    }
}
