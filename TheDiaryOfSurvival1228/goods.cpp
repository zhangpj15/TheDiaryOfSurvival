#include "goods.h"

goods::goods()
{
    m_size = 50;
    m_isAlive = true;
    m_countDown = 100;
    m_deathType = qrand()%2+1;
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
void goods::setNumber(int x)
{
    m_number = x;
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
int goods::getNumber()
{
    return m_number;
}
void goods::render(QPainter *painter)
{
    if(m_isAlive)painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,QPixmap(QString(":/res/img/goods/goods (%1).png").arg(m_born)));
    else
    {

        QPixmap pixmap(m_size,m_size);

        pixmap.fill(m_color);
//        pixmap.setMask(QPixmap(QString(":/res/img/goods/fireworks (%1).png").arg(m_deathType))
//                       .scaled(m_size,m_size).mask());
        pixmap.setMask(QPixmap(QString(":/res/img/goods/fireworks (1).png"))
                       .scaled(m_size,m_size).mask());

        painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,pixmap);

        m_countDown--;

        m_color.setRed((m_color.red()+2)<255?m_color.red()+2:255);
        m_color.setGreen((m_color.green()+2)<251?m_color.green()+2:251);
        m_color.setBlue((m_color.blue()+2)<242?m_color.blue()+2:242);
    }
}
