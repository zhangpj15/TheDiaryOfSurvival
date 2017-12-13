#include "barriers.h"

barriers::barriers()
{
    m_size = 50;
}

void barriers::setPosi(double x, double y)
{
    m_posi = QPointF(x,y);
}


void barriers::setBorn(int x)
{
    m_born = x;
}


QPointF barriers::getPosi()
{
    QPointF posi;
    posi.setX(m_posi.x()+m_size/2.0);
    posi.setY(m_posi.y()+m_size/2.0);
    return m_posi;
}

double barriers::getSize()
{
    return m_size;
}


void barriers::render(QPainter *painter)
{
    painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,QPixmap(QString(":/res/img/barrier/animals (%1).png").arg(m_born)));
}
