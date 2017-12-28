#include "boss.h"
#include "qDebug"
Boss::Boss()
{
    m_size = 100;
    m_life=100;
    m_isAlive = true;
    m_countDown = 10;
    m_deathType = qrand()%4+1;
    m_born=1;
    m_curAttackType=_SHOTGUN;
    m_bullets.clear();
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
void Boss::setCurrentLife()
{
    m_life--;
}

int Boss::getLife()
{
    return m_life;
}
//    更新攻击
void Boss::updateAttackEffect(QPointF posi, double size, double dir)
{
    // 更新所有的子弹
    for(int i=0; i<m_bullets.size();i++)
    {
        m_bullets[i].updateBullet();
    }
        m_counter++;
        static int btype;
        btype=btype<2?btype+1:0;
        switch(btype)
        {
        case 0:
        {
            if(!(m_counter%100==0||m_counter==0))
                break;
            // 散弹攻击
            QPointF s;

            s.setX(posi.x()+2*sin(3.14*dir/180.0));
            s.setY(posi.y()-2*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir);

//            m_bullets.push_back(temp);
            for(int i=0; i<6; i=i+1)// 扇形发出
            {
                temp.setDir(dir-i*60);
                m_bullets.push_back(temp);
            }
        }
        case 1:
        {
            if(!(m_counter%100==0||m_counter==0))
                break;
            // 散弹攻击
            QPointF s;

            s.setX(posi.x()+2*sin(3.14*dir/180.0));
            s.setY(posi.y()-2*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir);

//            m_bullets.push_back(temp);
            for(int i=0; i<4; i=i+1)// 扇形发出
            {
                temp.setDir(dir-i*90);
                m_bullets.push_back(temp);
            }
            break;
        }
        case 2:
        {
            if(!(m_counter%100==0||m_counter==0))
                break;
            // 散弹攻击
            QPointF s;

            s.setX(posi.x()+2*sin(3.14*dir/180.0));
            s.setY(posi.y()-2*cos(3.14*dir/180.0));

            Bullet temp;
            temp.setPosi(s.x(),s.y());
            temp.setDir(dir-30);

//            m_bullets.push_back(temp);
            for(int i=0; i<8; i=i+1)// 扇形发出
            {
                temp.setDir(dir-i*45);
                m_bullets.push_back(temp);
            }
        }
     qDebug()<<m_counter;
    }
}

void Boss::render(QPainter *painter)
{
    if(m_isAlive){
        painter->drawPixmap(m_posi.x(),m_posi.y(),m_size,m_size,QPixmap(QString(":/res/img/mask/enermy_(%1).png").arg(m_born)));
        int numb=m_life/25+1;
        for(int i=0;i<numb;i++)
            painter->drawPixmap(m_posi.x()+0.2*i*m_size,m_posi.y()-0.2*m_size,25,25,QPixmap(QString(":/res/img/mask/enermy_(%1).png").arg(m_born)));
        for(int i=0; i<m_bullets.size(); i++)
        {
//            m_bullets[i].changepic(str);
//            qDebug()<<"更新子弹";
            m_bullets[i].renderBullet(painter);
        }

    }
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
