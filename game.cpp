#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
//    新建death类窗口，用于重启游戏
    m_death = new death(this);
    m_death->hide();
//    新建end类窗口，用于退出游戏
    m_end = new end(this);
    m_end->hide();

    connect(&m_timer,SIGNAL(timeout()),this,SLOT(slot_timeLoop()));      //信号槽，用于控制计时装置
    connect(ui->btnShowTab,SIGNAL(clicked()),this,SLOT(slot_btnShowTab()));

    connect(this,SIGNAL(sig_death()),this,SLOT(slot_gameOver()));       //death信号，则触发游戏结束
    connect(this,SIGNAL(sig_quitgame()),this,SLOT(slot_quitgame()));
    connect(m_death,SIGNAL(sig_restart()),this,SLOT(slot_restart()));   //restart信号，则触发游戏重启
    connect(m_end,SIGNAL(sig_gameno()),this,SLOT(slot_no()));   //restart信号，则触发游戏重启
    connect(m_end,SIGNAL(sig_gameyes()),this,SLOT(slot_yes()));   //restart信号，则触发游戏重启
}

void game::resizeEvent(QResizeEvent *event)
{
    m_player.setActiveRect(0,61,width(),height()-61);
    m_emanager.setActiveRect(width(),height());
    m_pmanager.setActiveRect(width(),height());
}

void game::startGameLoop()
{
//    ui->pbarEnergy->setVisible(false);    //显示生命槽
    bA = bD = false;                        //判断按键是否按下，初始置为否

    m_time = 0;                             //计时器，初始置为0

    m_player.initPlayer();
    m_timer.setInterval(16);

    m_timer.start();                        //启动计时器

    m_player.setCurrentPosi(width()/2,height()/2);
    m_player.setActiveRect(0,61,width(),height()-61);

    m_emanager.initEmanager();
    m_pmanager.initPmanager();

    m_emanager.setActiveRect(width(),height());
    m_pmanager.setActiveRect(width(),height());

    ui->lblAttackMode->setText(m_pmanager.getAttackMode());

    //提示栏的动画效果_飞出
    static QPropertyAnimation * animation = new QPropertyAnimation(ui->groupBox_help, "pos");
    animation->setStartValue(QPoint(width()*0.5-ui->groupBox_help->width()*0.5, height()*0.5-ui->groupBox_help->height()*0.5));
    animation->setEndValue(QPoint(width()*0.5-ui->groupBox_help->width()*0.5, -ui->groupBox_help->height()));
    animation->setDuration(3000);
    animation->setEasingCurve(QEasingCurve::OutInExpo);
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    //提示栏的动画效果_透明
//    static QPropertyAnimation * animation = new QPropertyAnimation(ui->groupBox_help, "windowOpacity");\
//    animation->setStartValue(1);
//    animation->setEndValue(0);
//    animation->setEasingCurve(QEasingCurve::InCirc);
//    connect(animation, SIGNAL(finished()),
//            ui->groupBox_help, SLOT(deleteLater()));
//    show();
//    animation->start(QAbstractAnimation::DeleteWhenStopped);
//    animation->setEasingCurve(QEasingCurve::OutInExpo);
//    animation->setDuration(3000);
//    animation->start(QAbstractAnimation::DeleteWhenStopped);

    setFocus();
}

void game::slot_timeLoop()
{
    m_time += m_timer.interval();

    m_player.updateStates();

//    QTimer::singleShot( 5*1000, this, SLOT(sig_death()) );
    m_pmanager.updateAttackEffect(m_player.getCurrentPosi(),m_player.getSize(),m_player.getDir());

    bool isGameOver = m_emanager.updateEnemys(m_player.getCurrentPosi());

    // 判断一下游戏是否结束
    if(isGameOver)
    {
        emit sig_death();
    }

    m_pmanager.checkKnockWithEnemys(m_emanager.getEnemysList(),m_player.getCurrentPosi(),m_player.getDir());

    m_emanager.bornNew(m_player.getCurrentPosi());

    ui->lblTime->setText(QString::number(m_time/1000));
    ui->lblPoint->setText(QString::number(m_pmanager.getKillNum()));

//    if(m_pmanager.isCooling() && m_pmanager.getAttackModeId() == pmanager::_FIRE)
//    {
//        ui->pbarEnergy->setVisible(true);
//        ui->pbarEnergy->setValue(m_pmanager.getCountDownNum());
//        ui->pbarEnergy->setStyleSheet(
//                    "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
//                    "QProgressBar::chunk {background-image: url(:/type/res/config/ico/coldFireBar.png);}");
//    }
//    else if(m_pmanager.getAttackModeId() == pmanager::_FIRE)
//    {
//        ui->pbarEnergy->setVisible(true);
//        ui->pbarEnergy->setValue(200-m_pmanager.getCountFireNum());
//        ui->pbarEnergy->setStyleSheet(
//                    "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
//                    "QProgressBar::chunk {background-image: url(:/type/res/config/ico/firebar.png);}");
//    }
//    else
//    {
//        ui->pbarEnergy->setVisible(false);
//    }

    update();
}

void game::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);

    m_emanager.renderEnemys(&painter);
    m_pmanager.renderAttackEffect(&painter,m_player.getCurrentPosi(),m_player.getSize().x(),m_player.getDir());
    m_player.render(&painter);
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
        m_pmanager.setAttacked(true);
        break;
    case Qt::Key_K:
        m_pmanager.changeAttackMode();
        ui->lblAttackMode->setText(m_pmanager.getAttackMode());
        break;
    case Qt::Key_Space:
        if(m_timer.isActive())
            m_timer.stop();
        else
            m_timer.start();
        break;
    case Qt::Key_Q:
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
    }
}

void game::slot_btnShowTab()
{
    //提示栏的动画效果
    if(ui->groupBox->pos() == QPoint(-140,170))
    {
        static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupBox,"pos");
        animate->setStartValue(QPoint(-140,170));
        animate->setEndValue(QPoint(0,170));
        animate->setEasingCurve(QEasingCurve::Linear);
        animate->setDuration(500);
        animate->start();
        ui->btnShowTab->setText(">");
    }
    else
    {
        static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupBox,"pos");
        animate->setStartValue(QPoint(0,170));
        animate->setEndValue(QPoint(-140,170));
        animate->setEasingCurve(QEasingCurve::Linear);
        animate->setDuration(500);
        animate->start();
        ui->btnShowTab->setText("<");
    }
}
//void game::slot_attack()
//{
//    m_pmanager.setAttacked(true);
//}

/**********  退出游戏事件 **********/
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

game::~game()
{
    delete ui;
}