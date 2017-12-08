#include "player.h"

Player::Player()
{
}

void Player::initPlayer()
{
    m_type = ":/res/img/plane/classic1.png";
    m_dir = 0;
    m_vel = 5;
    m_curState = _STA;
    m_size = QPointF(25,25);
}

void Player::setCurrentState(short state)
{
    m_curState = state;
}

void Player::setCurrentPosi(int x, int y)
{
    m_posi.setX(x);
    m_posi.setY(y);
}

void Player::setCurrentVolume(int x)
{
    m_size = QPointF(25*x,25*x);
}

void Player::setCurrentSpeed(int x)
{
    m_vel=x;
}

void Player::setActiveRect(int x, int y, int w, int h)
{
    m_rect = QRect(x,y,w,h);
}

QPointF Player::getCurrentPosi()
{
    // 返回中点坐标
    QPointF posi;

    posi.setX(m_posi.x()+m_size.x()/2);
    posi.setY(m_posi.y()+m_size.y()/2);
    return posi;
}

short Player::getCurrentState()
{
    return m_curState;
}

double Player::getDir()
{
    return m_dir;
}

QPointF Player::getSize()
{
    return m_size;
}

void Player::moveFront()
{
    float nextX = m_posi.x() + m_vel*sin(3.14*m_dir/180.0);
    float nextY = m_posi.y() - m_vel*cos(3.14*m_dir/180.0);

    if(nextX < m_rect.x())
        nextX = m_rect.x();
    if(nextY < m_rect.y())
        nextY = m_rect.y();
    if(nextX+m_size.x() >= m_rect.x()+m_rect.width())
        nextX = m_rect.x()-m_size.x()+m_rect.width();
    if(nextY+m_size.y() >= m_rect.y()+m_rect.height())
        nextY = m_rect.y()-m_size.y()+m_rect.height();
    m_posi = QPointF(nextX,nextY);
}

void Player::moveBack()
{
    float nextX = m_posi.x() - m_vel*sin(3.14*m_dir/180.0);
    float nextY = m_posi.y() + m_vel*cos(3.14*m_dir/180.0);

    if(nextX < m_rect.x())
        nextX = m_rect.x();
    if(nextY < m_rect.y())
        nextY = m_rect.y();
    if(nextX+m_size.x() >= m_rect.x()+m_rect.width())
        nextX = m_rect.x()-m_size.x()+m_rect.width();
    if(nextY+m_size.y() >= m_rect.y()+m_rect.height())
        nextY = m_rect.y()-m_size.y()+m_rect.height();
    m_posi = QPointF(nextX,nextY);
}

void Player::turnLeft()
{
    m_dir-=5;
}

void Player::turnRight()
{
    m_dir+=5;
}

void Player::updateStates()
{
    switch(m_curState)
    {
    case _MOVE:
        moveFront();
        break;
    case _LEFT:
        turnLeft();
        break;
    case _RIGHT:
        turnRight();
        break;
    case _RUN_LEFT:
        turnLeft();
        moveFront();
        break;
    case _RUN_RIGHT:
        turnRight();
        moveFront();
        break;
    case _BACK:
        moveBack();
        break;
    case _BACK_LEFT:
        turnLeft();
        moveBack();
        break;
    case _BACK_RIGHT:
        turnRight();
        moveBack();
        break;
    }
}

void Player::render(QPainter *painter)
{
    painter->save();
    painter->translate(m_posi.x()+m_size.x()/2.0,m_posi.y()+m_size.y()/2.0);
    painter->rotate(m_dir);
    painter->translate(-m_posi.x()-m_size.x()/2.0,-m_posi.y()-m_size.y()/2.0);

    painter->drawPixmap(m_posi.x(),m_posi.y(),m_size.x(),m_size.y(),QPixmap(m_type));
    painter->restore();
}
