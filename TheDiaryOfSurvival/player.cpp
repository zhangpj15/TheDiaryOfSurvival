#include "player.h"
#include "QDebug"
#include "QSound"

Player::Player()
{
}

void Player::initPlayer()
{
    m_type = ":/res/img/plane/figure (2).png";
    m_type_bullets=":/res/img/bullets/bullets (2).png";
    m_dir = 0;
    m_vel = 2;
    m_life = 100;
    m_curState = _STA;
    m_size = 50;
//    m_big=50;
    m_curgoods = 0;
    defence=0;
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
    m_size = x;
}

void Player::setCurrentSpeed(int x)
{
    m_vel=x;
}

void Player::setCurrentLife()
{
    m_life--;
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

    posi.setX(m_posi.x()+m_size/2);
    posi.setY(m_posi.y()+m_size/2);
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

double Player::getSize()
{
    return m_size;
}

double Player::getSpeed()
{
    return m_vel;
}
int Player::getLife()
{
    return m_life;
}
void Player::moveFront()
{
    float nextX = m_posi.x() + m_vel*sin(3.14*m_dir/180.0);
    float nextY = m_posi.y() - m_vel*cos(3.14*m_dir/180.0);

    if(nextX < m_rect.x())
        nextX = m_rect.x();
    if(nextY < m_rect.y())
        nextY = m_rect.y();
    if(nextX+m_size >= m_rect.x()+m_rect.width())
        nextX = m_rect.x()-m_size+m_rect.width();
    if(nextY+m_size >= m_rect.y()+m_rect.height())
        nextY = m_rect.y()-m_size+m_rect.height();
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
    if(nextX+m_size >= m_rect.x()+m_rect.width())
        nextX = m_rect.x()-m_size+m_rect.width();
    if(nextY+m_size >= m_rect.y()+m_rect.height())
        nextY = m_rect.y()-m_size+m_rect.height();
    m_posi = QPointF(nextX,nextY);
}

void Player::turnLeft()
{
    m_dir-=2;
}

void Player::turnRight()
{
    m_dir+=2;
}

void Player::large()
{
    m_size=m_size<70?m_size+10:70;
//    qDebug()<<m_big;
//    setCurrentVolume(m_big);
}
void Player::speedup()
{

   m_vel=m_vel<9?m_vel+1:9;

}

void Player::small()
{
    m_size=m_size>30?m_size-10:30;
//    setCurrentVolume(m_big);
//    qDebug()<<m_size;
}
void Player::speedlow()
{
    m_vel=m_vel>1?m_vel-1:1;
}
void Player::setDefence(bool a)
{
    defence=a;
}
bool Player::statusDe()
{
    return defence;
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
    //QSound sound(":/res/wav/props1.wav");
    switch(m_curgoods)
    {
    case 1:
        speedup();
        QSound::play(":/res/wav/props1.wav");
        break;
    case 2:

        large();
        QSound::play(":/res/wav/props1.wav");
        break;
    case 3:

        speedlow();
        QSound::play(":/res/wav/props1.wav");
        break;
    case 4:

        small();
        QSound::play(":/res/wav/props1.wav");
        break;
    case 5://加血10点
        m_life=m_life+10>100?100:m_life+10;

        QSound::play(":/res/wav/props1.wav");
        break;
    case 6://加血50点，可更改
        QSound::play(":/res/wav/props1.wav");
//        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
//        test_figure=qrand()%15+1;
//        m_type=QString(":/res/img/plane/figure (%1).png").arg(test_figure);
        m_life=m_life+50>100?100:m_life+50;
        break;
    case 7://无敌模式
        QSound::play(":/res/wav/props1.wav");
        defence=1;
        qDebug()<<"无敌模式";
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

//    int numb=m_life/25+1;
//    for(int i=0;i<numb;i++)
//        painter->drawPixmap(m_posi.x()+0.2*i*m_size,m_posi.y()-0.2*m_size,15,15,QPixmap(QString(m_type)));
    painter->translate(m_posi.x()+m_size/2.0,m_posi.y()+m_size/2.0);
//    将中心设为坐标系原点，便于旋转
    painter->rotate(m_dir);
    painter->translate(-m_posi.x()-m_size/2.0,-m_posi.y()-m_size/2.0);

    painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,QPixmap(m_type));
    int numb=m_life/25+1;
    if(defence){
        QPainterPath path;
        path.addEllipse(getCurrentPosi(),m_size*0.7,m_size*0.7);
        path.addEllipse(getCurrentPosi(),m_size*0.5,m_size*0.5);
        painter->setBrush(QPixmap(QString(":/res/config/ico/coldFireBar.png")));
        path.setFillRule(Qt::OddEvenFill);//使用奇偶填充，刚好可以只显示圆环
        painter->drawPath(path);
    }
    for(int i=0;i<numb;i++)
        painter->drawPixmap(m_posi.x()+0.2*i*m_size,m_posi.y()-0.2*m_size,20,20,QPixmap(QString(m_type)));
    painter->restore();
}
