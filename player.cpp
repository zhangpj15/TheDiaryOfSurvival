#include "player.h"
#include "QDebug"
Player::Player()
{
}

void Player::initPlayer()
{
    m_type = ":/res/img/plane/figure (2).png";
    m_type_bullets=":/res/img/bullets/bullets (2).png";
    m_dir = 0;
    m_vel = 3;
    m_curState = _STA;
    m_size = QPointF(50,50);
    m_big=5;
    m_curgoods = 0;
}

void Player::setCurrentState(short state)
{
    m_curState = state;
}
void Player::setCurrentgoods(int goods)
{
    m_curgoods = goods;
}

void Player::setCurrentPosi(int x, int y)
{
    m_posi.setX(x);
    m_posi.setY(y);
}

void Player::setCurrentVolume(int x)
{
    m_size = QPointF(50-x,50-x);
}

void Player::setCurrentSpeed(int x)
{
    m_vel=x;
}

void Player::setActiveRect(int x, int y, int w, int h)
{
    m_rect = QRect(x,y,w,h);
}

QString Player::getTypeBullet()
{
    return m_type_bullets;
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
int Player::getCurrentgoods()
{
    return m_curgoods;
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

void Player::large()
{
    m_big=-5;
    qDebug()<<m_big;
    setCurrentVolume(m_big);
}
void Player::speedup()
{
    m_vel+=2;
}

void Player::small()
{
    m_big=5;
    setCurrentVolume(m_big);
    qDebug()<<m_size;
}
void Player::speedlow()
{
    m_vel-=2;
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

void Player::updategoods()
{
    int test_figure=1;
    int test_bullet=1;
    switch(m_curgoods)
    {
    case 1:
        speedup();
        break;
    case 2:
        large();
        break;
    case 3:
        speedlow();
        break;
    case 4:
        small();
        break;
    case 5:
        m_type=":/res/img/plane/figure (5).png";
        break;
    case 6:
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        test_figure=qrand()%15+1;
        m_type=QString(":/res/img/plane/figure (%1).png").arg(test_figure);
        break;
    case 7:
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        test_bullet=qrand()%15+1;
        m_type_bullets=QString(":/res/img/bullets/bullets (%1).png").arg(test_bullet);
        break;
//    case _BACK_RIGHT:
//        turnRight();
//        moveBack();
//        break;
    }
}

void Player::render(QPainter *painter)
{
//    setCurrentVolume(m_big);
    painter->save();
    painter->translate(m_posi.x()+m_size.x()/2.0,m_posi.y()+m_size.y()/2.0);
//    将中心设为坐标系原点，便于旋转
    painter->rotate(m_dir);
    painter->translate(-m_posi.x()-m_size.x()/2.0,-m_posi.y()-m_size.y()/2.0);

    painter->drawPixmap(m_posi.x(),m_posi.y(),m_size.x(),m_size.y(),QPixmap(m_type));
    painter->restore();
}
