#include "game.h"
#include "ui_game.h"
#include <qDebug>
game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
//    新建death类窗口，用于重启游戏
    m_death = new death(this);
    m_death->hide();
//    新建end类窗口，用于主动结束游戏
    m_end = new end(this);
    m_end->hide();
//    启动新窗口
    connect(&m_timer,SIGNAL(timeout()),this,SLOT(slot_timeLoop()));      //信号槽，用于控制计时装置
    connect(ui->btnShowTab,SIGNAL(clicked()),this,SLOT(slot_btnShowTab()));
    connect(this,SIGNAL(sig_death()),this,SLOT(slot_gameOver()));       //death信号，则触发游戏结束

    connect(this,SIGNAL(sig_quitgame()),this,SLOT(slot_quitgame()));
    connect(m_death,SIGNAL(sig_restart()),this,SLOT(slot_restart()));   //restart信号，则触发游戏重启

    connect(m_end,SIGNAL(sig_gameno()),this,SLOT(slot_no()));   //restart信号，则触发游戏重启
    connect(m_end,SIGNAL(sig_gameyes()),this,SLOT(slot_yes()));   //restart信号，则触发游戏重启
}

//显示布局
void game::resizeEvent(QResizeEvent *event)
{
    m_player.setActiveRect(0,60,width(),height());
    m_pmanager.setActiveRect(width(),height());
    m_bmanager.setActiveRect(width(),height());
    m_gmanager.setActiveRect(width(),height());
    m_bomanager.setActiveRect(width(),height());
}

void game::startGameLoop()
{
    ui->pbarEnergy->setVisible(false);    //隐藏能量槽
    ui->pbarBoss->setVisible(false);    //隐藏能量槽
    bA = bD = false;                      //判断按键是否按下，初始置为否

    m_time = 0;                           //计时器，初始置为0

    m_player.initPlayer();
    m_timer.setInterval(10);

    m_timer.start();                      //启动计时器

    m_player.setCurrentPosi(width()/2,height()/2);
    m_player.setActiveRect(0,60,width(),height()-60);

    m_emanager.initEmanager();
    m_pmanager.initPmanager();
    m_gmanager.initgmanager();
    m_bmanager.initbmanager();
    m_bomanager.initBomanager();

    m_emanager.setActiveRect(width(),height());
    m_pmanager.setActiveRect(width(),height());
    m_bmanager.setActiveRect(width(),height());
    m_gmanager.setActiveRect(width(),height());
    m_bomanager.setActiveRect(width(),height());

    ui->lblAttackMode->setText(m_pmanager.getAttackMode());
    ui->lblLife->setText(QString::number(m_player.getLife(),10));
    ui->lblVolume->setText(QString::number(m_player.getSize()));
    ui->lblSpeed->setText(QString::number(m_player.getSpeed()));

    ui->pbarLife->setVisible(true);    //显示能量槽
    ui->pbarLife->setRange(0,m_player.getLife());    //显示能量槽
    ui->pbarLife->setValue(m_player.getLife());
    ui->pbarLife->setStyleSheet(
                "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
                "QProgressBar::chunk {background-image: url(:/res/config/ico/coldFireBar.png);}");
    //提示栏的动画效果
    static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupBox,"pos");
    animate->setStartValue(QPoint(0,220));
    animate->setEndValue(QPoint(-140,220));
    animate->setEasingCurve(QEasingCurve::InCubic);
    animate->setDuration(3000);
    animate->start();

    setFocus();
}


// 定时器控制刷新状态
void game::slot_timeLoop()
{
    m_time += m_timer.interval();
//    qDebug()<<m_time;
    sectime=m_time/1000;
    if(m_time%1000==0&&m_time>999)
    {
//        qDebug()<<"到点啦";
        zone=m_time/1000;
    }
    ui->btnShowTab->setText(">");

    m_player.updateStates();// 位置刷新
    m_player.updategoods();// 道具刷新
    if(m_player.getCurrentgoods())
    {
        QString goodsmode=m_pmanager.getgoodsMode(m_player.getCurrentgoods());
        ui->lblGoods->setText(goodsmode);
        ui->lblLife->setText(QString::number(m_player.getLife(),10));
        ui->lblVolume->setText(QString::number(m_player.getSize()));
        ui->lblSpeed->setText(QString::number(m_player.getSpeed()));
//        ui->lblVolume;
    }
    m_gmanager.updategoods(m_player.getCurrentPosi(),m_player.getSize());
    m_pmanager.updateAttackEffect(m_player.getCurrentPosi(),m_player.getSize(),m_player.getDir());// 攻击模式刷新

    bool hurt = (m_emanager.updateEnemys(m_player.getCurrentPosi(),m_player.getSize())||m_bmanager.updatebarriers(m_player.getCurrentPosi(),m_player.getSize())||m_bomanager.updateBoss(m_player.getCurrentPosi(),m_player.getSize()));
    bool isGameOver=false;
    if(hurt)
    {
        m_player.setCurrentLife();
        ui->lblLife->setText(QString::number(m_player.getLife()));
//        qDebug()<<(m_player.getLife());
        ui->pbarLife->setRange(0,100-1);
        ui->pbarLife->setValue(m_player.getLife());
        ui->pbarLife->setStyleSheet(
                    "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
                    "QProgressBar::chunk {background-image: url(:/res/config/ico/coldFireBar.png);}");
        if(m_player.getLife()==0)
            isGameOver=true;
    }
    // 判断一下游戏是否结束,被敌人或者障碍物杀死
    if(isGameOver)
    {
        emit sig_death();
    }

    m_bmanager.bornNew(m_player.getCurrentPosi());
    m_gmanager.bornNew(m_player.getCurrentPosi());
    //玩家没死，该敌人死了
    int num_player=m_pmanager.checkKnockWithgoods(m_gmanager.getgoodsList(),m_player.getCurrentPosi(),m_player.getSize());
    //吃没吃到道具呀
    m_player.setCurrentgoods(num_player);
    m_pmanager.checkKnockWithEnemys(m_emanager.getEnemysList(),m_player.getCurrentPosi(),m_player.getDir());
    m_pmanager.checkKnockWithBoss(m_bomanager.getBossList(),m_player.getCurrentPosi(),m_player.getDir());
    //敌人死一圈，该生成新的了
    m_emanager.bornNew(m_player.getCurrentPosi());

    //该生成新的boss
    m_bomanager.bornNew(m_player.getCurrentPosi(),m_time);

    ui->lblTime->setText(QString::number(m_time/1000));
    ui->lblPoint->setText(QString::number(m_pmanager.getKillNum()));
    //更新火焰的状态
    if(m_pmanager.isCooling() && m_pmanager.getAttackModeId() == Pmanager::_FIRE)
    {
        ui->pbarEnergy->setVisible(true);
        ui->pbarEnergy->setValue(m_pmanager.getCountDownNum());
        ui->pbarEnergy->setStyleSheet(
                    "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
                    "QProgressBar::chunk {background-image: url(:/res/config/ico/coldFireBar.png);}");
    }
    else if(m_pmanager.getAttackModeId() == Pmanager::_FIRE)
    {
        ui->pbarEnergy->setVisible(true);
        ui->pbarEnergy->setValue(200-m_pmanager.getCountFireNum());
        ui->pbarEnergy->setStyleSheet(
                    "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
                    "QProgressBar::chunk {background-image: url(:/res/config/ico/firebar.png);}");
    }
    else
    {
        ui->pbarEnergy->setVisible(false);
    }

    update();
}

void game::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);// 开启反走样，用以防止“锯齿”现象的出现

    m_emanager.renderEnemys(&painter);
    m_pmanager.renderAttackEffect(&painter,m_player.getCurrentPosi(),m_player.getSize(),m_player.getDir(),m_player.getTypeBullet());
    m_gmanager.rendergoods(&painter);
    m_bmanager.renderbarriers(&painter);
    m_bomanager.renderBoss(&painter);

    m_player.render(&painter);

//    renderBorder(&painter,zone);
}

/**********  按键事件 **********/
void game::keyPressEvent(QKeyEvent *event)
{
    if(event->isAutoRepeat())
        return;
    switch(event->key())
    {
    case Qt::Key_W:
        if(m_player.getCurrentState()==Player::_STA)
            m_player.setCurrentState(Player::_MOVE);
        if(m_player.getCurrentState()==Player::_LEFT)
            m_player.setCurrentState(Player::_RUN_LEFT);
        if(m_player.getCurrentState()==Player::_RIGHT)
            m_player.setCurrentState(Player::_RUN_RIGHT);
        break;
    case Qt::Key_S:
        if(m_player.getCurrentState()==Player::_STA)
            m_player.setCurrentState(Player::_BACK);
        if(m_player.getCurrentState()==Player::_LEFT)
            m_player.setCurrentState(Player::_BACK_LEFT);
        if(m_player.getCurrentState()==Player::_RIGHT)
            m_player.setCurrentState(Player::_BACK_RIGHT);
        break;
    case Qt::Key_A:
        bA = true;
        if(m_player.getCurrentState()==Player::_STA)
            m_player.setCurrentState(Player::_LEFT);
        if(m_player.getCurrentState()==Player::_RIGHT)
            m_player.setCurrentState(Player::_LEFT);
        if(m_player.getCurrentState()==Player::_MOVE)
            m_player.setCurrentState(Player::_RUN_LEFT);
        if(m_player.getCurrentState()==Player::_BACK)
            m_player.setCurrentState(Player::_BACK_LEFT);
        break;
    case Qt::Key_D:
        bD = true;
        if(m_player.getCurrentState()==Player::_STA)
            m_player.setCurrentState(Player::_RIGHT);
        if(m_player.getCurrentState()==Player::_LEFT)
            m_player.setCurrentState(Player::_RIGHT);
        if(m_player.getCurrentState()==Player::_MOVE)
            m_player.setCurrentState(Player::_RUN_RIGHT);
        if(m_player.getCurrentState()==Player::_BACK)
            m_player.setCurrentState(Player::_BACK_RIGHT);
        break;
    case Qt::Key_J:
        m_pmanager.changeAttackMode(0);
        ui->lblAttackMode->setText(m_pmanager.getAttackMode());
        m_pmanager.setAttacked(true);
        break;
//    case Qt::Key_K:
//        m_pmanager.changeAttackMode();
//        ui->lblAttackMode->setText(m_pmanager.getAttackMode());
//        break;
    case Qt::Key_U:
        m_pmanager.changeAttackMode(1);
        ui->lblAttackMode->setText(m_pmanager.getAttackMode());
        m_pmanager.setAttacked(true);
        break;
    case Qt::Key_I:
        m_pmanager.changeAttackMode(2);
        ui->lblAttackMode->setText(m_pmanager.getAttackMode());
        m_pmanager.setAttacked(true);
        break;
    case Qt::Key_O:
        m_pmanager.changeAttackMode(3);
        ui->lblAttackMode->setText(m_pmanager.getAttackMode());
        m_pmanager.setAttacked(true);
        break;
    case Qt::Key_Space:
        if(m_timer.isActive())
            m_timer.stop();
        else
            m_timer.start();
        break;
    case Qt::Key_Q:
//        m_timer.stop();
//        m_end->show();
        emit sig_quitgame();
        break;
    }
}
void game::mousePressEvent(QMouseEvent *e){

//    //---点击左键，开始攻击
//    if (Qt ::LeftButton == e->button())
//    {
//        m_pmanager.setAttacked(true);
//    }
//    //---点击右键，切换攻击模式
//    if (Qt ::RightButton == e->button())
//    {
//        m_pmanager.changeAttackMode();
//        ui->lblAttackMode->setText(m_pmanager.getAttackMode());
//    }
}
void game::mouseReleaseEvent(QMouseEvent *e){

//    //---释放左键，停止攻击
//    if (Qt ::LeftButton == e->button())
//    {
//        m_pmanager.setAttacked(false);
//    }
}

void game::keyReleaseEvent(QKeyEvent *event)
{
    if(event->isAutoRepeat())
        return;

    switch(event->key())
    {
    case Qt::Key_W:
        if(m_player.getCurrentState()==Player::_MOVE)
            m_player.setCurrentState(Player::_STA);
        if(m_player.getCurrentState()==Player::_RUN_LEFT)
            m_player.setCurrentState(Player::_LEFT);
        if(m_player.getCurrentState()==Player::_RUN_RIGHT)
            m_player.setCurrentState(Player::_RIGHT);
        break;
    case Qt::Key_S:
        if(m_player.getCurrentState()==Player::_BACK)
            m_player.setCurrentState(Player::_STA);
        if(m_player.getCurrentState()==Player::_BACK_LEFT)
            m_player.setCurrentState(Player::_LEFT);
        if(m_player.getCurrentState()==Player::_BACK_RIGHT)
            m_player.setCurrentState(Player::_RIGHT);
        break;
    case Qt::Key_A:
        bA = false;

        if(m_player.getCurrentState() == Player::_RUN_LEFT)
        {
            if(!bD) m_player.setCurrentState(Player::_MOVE);
            else m_player.setCurrentState(Player::_RUN_RIGHT);
        }

        if(m_player.getCurrentState() == Player::_BACK_LEFT)
        {
            if(!bD) m_player.setCurrentState(Player::_BACK);
            else m_player.setCurrentState(Player::_BACK_RIGHT);
        }

        if(m_player.getCurrentState() == Player::_LEFT && !bD)
        {
            if(!bD)  m_player.setCurrentState(Player::_STA);
            else m_player.setCurrentState(Player::_RIGHT);
        }

        break;
    case Qt::Key_D:
        bD = false;

        if(m_player.getCurrentState() == Player::_RUN_RIGHT)
        {
            if(!bD) m_player.setCurrentState(Player::_MOVE);
            else m_player.setCurrentState(Player::_RUN_LEFT);
        }

        if(m_player.getCurrentState() == Player::_BACK_RIGHT)
        {
            if(!bD) m_player.setCurrentState(Player::_BACK);
            else m_player.setCurrentState(Player::_BACK_LEFT);
        }

        if(m_player.getCurrentState() == Player::_RIGHT && !bD)
        {
            if(!bD)  m_player.setCurrentState(Player::_STA);
            else m_player.setCurrentState(Player::_LEFT);
        }
        break;
    case Qt::Key_J:
        m_pmanager.setAttacked(false);
        break;
    case Qt::Key_U:
        m_pmanager.setAttacked(false);
        break;
    case Qt::Key_I:
        m_pmanager.setAttacked(false);
        break;
    case Qt::Key_O:
        m_pmanager.setAttacked(false);
        break;
    }
}

void game::slot_btnShowTab()
{
    //提示栏的动画效果
    if(ui->groupBox->pos() == QPoint(-140,220))
    {
        static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupBox,"pos");
        animate->setStartValue(QPoint(-140,220));
        animate->setEndValue(QPoint(0,220));
        animate->setEasingCurve(QEasingCurve::Linear);
        animate->setDuration(500);
        animate->start();

        ui->btnShowTab->setText("<");
    }
    else
    {
        static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupBox,"pos");
        animate->setStartValue(QPoint(0,220));
        animate->setEndValue(QPoint(-140,220));
        animate->setEasingCurve(QEasingCurve::Linear);
        animate->setDuration(500);
        animate->start();

        ui->btnShowTab->setText(">");
    }
}
void game::slot_attack()
{
    m_pmanager.setAttacked(true);
}

void game::slot_gameOver()
{
    m_timer.stop();
    m_death->show();
    m_death->move((this->width() - m_death->width())/2,(this->height() - m_death->height())/2);
}

void game::slot_restart()
{
    m_death->hide();
    startGameLoop();
}

void game::slot_quitgame()
{
    m_timer.stop();
    m_end->show();
    m_end->move((this->width() - m_end->width())/2,(this->height() - m_end->height())/2);
}

void game::slot_no()
{
    m_end->hide();
    m_timer.start();
}
void game::slot_yes()
{
    m_end->hide();
    emit sig_closeGame();
}

//    绘制火焰
void game::renderBorder(QPainter *painter, int rate)
{
    QPainterPath path;
    path.addRect(0,60,this->width(),this->height());
    path.addRect(space*4/3*rate,60+space*rate,this->width()-space*8/3*rate,this->height()-60-space*2*rate);
    painter->setBrush(QPixmap(QString(":/res/img/flame/flame1.png")));
//    painter->drawPixmap(0,60,this->width(),this->height(),QPixmap(QString(":/res/img/flame/flame1.png")));
    path.setFillRule(Qt::OddEvenFill);//使用奇偶填充，刚好可以只显示圆环
    painter->drawPath(path);
}
game::~game()
{
    delete ui;
}
