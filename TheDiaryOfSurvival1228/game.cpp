#include "game.h"
#include "ui_game.h"
#include "QSound"
#include <qDebug>

QSound *bgsound = new QSound(":/res/wav/startbgm1.wav"); //背景音乐

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

    connect(ui->lblskill1,SIGNAL(clicked()),this,SLOT(slot_learnSkill1()));
    connect(ui->lblskill2,SIGNAL(clicked()),this,SLOT(slot_learnSkill2()));
    connect(ui->lblskill3,SIGNAL(clicked()),this,SLOT(slot_learnSkill3()));

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
    m_pmanager.setLifeRect(0,60,width(),height());
    m_bmanager.setActiveRect(width(),height());
    m_gmanager.setActiveRect(width(),height()-130);
    m_bomanager.setActiveRect(width(),height());
}

void game::startGameLoop()
{
    ui->pbarEnergy->setVisible(false);    //隐藏能量槽
    ui->groupBoss->setVisible(false);
    bA = bD = false;                      //判断按键是否按下，初始置为否

    m_time = 0;                           //计时器，初始置为0
    bornrate=10000;//每10秒增加难度
    bornrate_enermy=2000;
    bornrate_boss=15000;
    bornrate_goods=10000;
    bornrate_barriers=3000;
    tiprate=6000;
    zonerate=2000;
    dayrate=3000;
    bloodrate=3;
    space=1;
    zone=0;
    //m_user="8asd8";

    //道具价格
    m_price_skill1=5;
    m_price_skill2=2;
    m_price_skill3=4;
    update();

    bgsound->play();//播放bgm
    bgsound->setLoops(-1);
    //bgsound->stop();//停止

    //QSound::play(":/res/wav/gamebgm1.wav");
    m_player.initPlayer();
    m_timer.setInterval(10);

    m_timer.start();                      //启动计时器

    m_player.setCurrentPosi(width()/2,height()/2);
    m_player.setActiveRect(0,60,width(),height()-130);

    m_emanager.initEmanager();
    m_pmanager.initPmanager();
    m_gmanager.initgmanager();
    m_bmanager.initbmanager();
    m_bomanager.initBomanager();

    m_emanager.setActiveRect(width(),height());
    m_pmanager.setActiveRect(width(),height());
    m_pmanager.setLifeRect(0,60,width(),height());
    m_bmanager.setActiveRect(width(),height());
    m_gmanager.setActiveRect(width(),height()-70);
    m_bomanager.setActiveRect(width(),height());

    ui->lbluser->setText(returnUser());
    qDebug()<<returnUser();
    ui->lblAttackMode->setText(m_pmanager.getAttackMode());
    ui->lblLife->setText(QString::number(m_player.getLife(),10));
    ui->lblVolume->setText(QString::number(m_player.getSize()));
    ui->lblSpeed->setText(QString::number(m_player.getSpeed()));
    ui->coins->setText(QString::number(m_pmanager.getMoney()));
    ui->lblskill1->setText(QString::number(m_pmanager.getSkill_1()));
    ui->lblskill2->setText(QString::number(m_pmanager.getSkill_2()));
    ui->lblskill3->setText(QString::number(m_pmanager.getSkill_3()));

    ui->pbarLife->setVisible(true);    //显示能量槽
    ui->pbarLife->setRange(0,m_player.getLife());    //显示能量槽
    ui->pbarLife->setValue(m_player.getLife());
    //    ui->pbarLife->setStyleSheet(
    //                "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
    //                "QProgressBar::chunk {background-image: url(:/res/config/ico/coldFireBar.png);}");
    //提示栏的动画效果
    static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupGoods,"pos");
    animate->setStartValue(QPoint(width()-160,140));
    animate->setEndValue(QPoint(width()-20,140));
    animate->setEasingCurve(QEasingCurve::InCubic);
    animate->setDuration(3000);
    ui->btnShowTab->setText("<");
    animate->start();
    setFocus();
}


// 定时器控制刷新状态
void game::slot_timeLoop()
{
    m_time += m_timer.interval();

    //    qDebug()<<m_time;
    sectime=m_time/1000;
    if(m_time%9000==0){
        bornrate_enermy=(bornrate_enermy-100)<501?500:(bornrate_enermy-100);
        bornrate_boss=(bornrate_boss-1000)<6001?6000:(bornrate_boss-1500);
        bornrate_goods=(bornrate_goods-100)<9001?9000:(bornrate_goods-100);
       //bornrate_barriers=(bornrate_barriers-150)<1501?1500:(bornrate_barriers-150);
    }
    if(m_time%5000==0){
        bornrate_barriers=300;
    }
    if(m_time%6000==0){
        bornrate_barriers=3000;
    }
    if(m_time%zonerate==0)//控制缩圈
    {
        //        qDebug()<<"到点啦";
        zone=m_time/zonerate;
    }
    if(m_time%dayrate==0)//控制背景图片
    {
        //        qDebug()<<"到点啦";
        //pix=QPixmap(":/res/img/background/playbg1.jpg");
        //        ui->lblback->setStyleSheet{
        //                "QProgressBar::chunk {background-image: url(:/res/config/ico/coldFireBar.png);}"}
        //      mainwindow.setStyleSheet("#mainwindow{border-image:url(:/res/img/background/playbg1.jpg);}");
        //ui->lblback->show();
        setAutoFillBackground(true);  //这句一定不能少，否则图片显示不出来。
        QPalette palette;
        palette.setBrush(QPalette::Background, QBrush(QPixmap(QString(":/res/img/background/playbg%1.jpg").arg((m_time/dayrate)%15+1))));
        setPalette(palette);
    }
    //ui->btnShowTab->setText(">");

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

    bool attacked = (m_emanager.updateEnemys(m_player.getCurrentPosi(),m_player.getSize())||m_bmanager.updatebarriers(m_player.getCurrentPosi(),m_player.getSize())||m_bomanager.updateBoss(m_player.getCurrentPosi(),m_player.getSize()));
    bool hurt= (m_pmanager.m_lifeZone.contains(m_player.getCurrentPosi().x()-m_player.getSize()*0.5,m_player.getCurrentPosi().y()-m_player.getSize()*0.5) && m_pmanager.m_lifeZone.contains(m_player.getCurrentPosi().x()-m_player.getSize()*0.5,m_player.getCurrentPosi().y()+m_player.getSize()*0.5)&&m_pmanager.m_lifeZone.contains(m_player.getCurrentPosi().x()+m_player.getSize()*0.5,m_player.getCurrentPosi().y()-m_player.getSize()*0.5)&&m_pmanager.m_lifeZone.contains(m_player.getCurrentPosi().x()+m_player.getSize()*0.5,m_player.getCurrentPosi().y()+m_player.getSize()*0.5));
    //    bool hurt=m_pmanager.m_lifeZone.contains(m_player.getCurrentPosi().x());
    bool isGameOver=false;
    static int denum=0;
    if(!hurt||attacked)
    {
        if(m_player.statusDe())
        {
            if(denum<50){
                denum++;
                qDebug()<<"无敌中";
            }
            else{
                denum=0;
                m_player.setDefence(0);
            }
        }
        else{
            static int countblood=0;
            if(countblood>bloodrate)
            {

                QSound::play(":/res/wav/hurt.wav");//受到伤害的声音
                countblood=0;
                m_player.setCurrentLife();
                ui->lblLife->setText(QString::number(m_player.getLife()));
                ui->pbarLife->setRange(0,100-1);
                ui->pbarLife->setValue(m_player.getLife());
                //        ui->pbarLife->setStyleSheet(
                //                    "QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: rgba(0,0,0,0);}"
                //                    "QProgressBar::chunk {background-image: url(:/res/config/ico/coldFireBar.png);}");
                if(m_player.getLife()==0)isGameOver=true;
            }
            else countblood++;
        }
    }
    // 判断一下游戏是否结束,被敌人或者障碍物杀死
    if(isGameOver)
    {
        bgsound->stop();
        QSound::play(":/res/wav/gameover1.wav");//游戏结束的声音
        emit sig_death();
    }
    //生成障碍物
    if(m_time%bornrate_barriers==0){
        m_bmanager.bornNew(m_player.getCurrentPosi());
    }
    //生成道具
    if(m_time%bornrate_goods==0){
        m_gmanager.bornNew(m_player.getCurrentPosi());
    }
    //玩家没死，该敌人死了
    int num_player=m_pmanager.checkKnockWithgoods(m_gmanager.getgoodsList(),m_player.getCurrentPosi(),m_player.getSize());
    //吃没吃到道具呀
    m_player.setCurrentgoods(num_player);
    m_pmanager.checkKnockWithEnemys(m_emanager.getEnemysList(),m_player.getCurrentPosi(),m_player.getDir());
    m_pmanager.checkKnockWithBoss(m_bomanager.getBossList(),m_player.getCurrentPosi(),m_player.getDir());
    ui->coins->setText(QString::number(m_pmanager.getMoney()));
    ui->lblskill1->setText(QString::number(m_pmanager.getSkill_1()));
    ui->lblskill2->setText(QString::number(m_pmanager.getSkill_2()));
    ui->lblskill3->setText(QString::number(m_pmanager.getSkill_3()));
    //敌人死一圈，该生成新的了
    if(m_time%bornrate_enermy==0){
        m_emanager.bornNew(m_player.getCurrentPosi());
    }
    if((m_time+tiprate)%bornrate_boss==0){
        ui->groupBoss->setVisible(true);
        static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupBoss,"pos");
        animate->setStartValue(QPoint(0,100));
        animate->setEndValue(QPoint(width(),height()-100));
        animate->setEasingCurve(QEasingCurve::InCubic);
        animate->setDuration(tiprate);
        animate->start();
    }

    //该生成新的boss
    if(m_time%bornrate_boss==0)
        m_bomanager.bornNew(m_player.getCurrentPosi());


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

    renderBorder(&painter,zone);
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
        if(m_pmanager.getSkill_1())
        {
            m_pmanager.setSkill_1(0);
            m_pmanager.changeAttackMode(1);
            ui->lblAttackMode->setText(m_pmanager.getAttackMode());
            m_pmanager.setAttacked(true);
        }
        break;
    case Qt::Key_I:
        if(m_pmanager.getSkill_2())
        {
            m_pmanager.setSkill_2(0);
            m_pmanager.changeAttackMode(2);
            ui->lblAttackMode->setText(m_pmanager.getAttackMode());
            m_pmanager.setAttacked(true);
        }
        break;
    case Qt::Key_O:
        if(m_pmanager.getSkill_3())
        {
            m_pmanager.setSkill_3(0);
            m_pmanager.changeAttackMode(3);
            ui->lblAttackMode->setText(m_pmanager.getAttackMode());
            m_pmanager.setAttacked(true);
        }
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
    if(ui->groupGoods->pos() == QPoint(width()-160,140))

    {
        static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupGoods,"pos");
        animate->setStartValue(QPoint(width()-160,140));
        animate->setEndValue(QPoint(width()-20,140));
        animate->setEasingCurve(QEasingCurve::Linear);
        animate->setDuration(1000);
        animate->start();

        ui->btnShowTab->setText("<");
    }
    else
    {
        static QPropertyAnimation * animate = new QPropertyAnimation(ui->groupGoods,"pos");
        animate->setStartValue(QPoint(width()-20,140));
        animate->setEndValue(QPoint(width()-160,140));
        animate->setEasingCurve(QEasingCurve::Linear);
        animate->setDuration(1000);
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
    emit sig_deathSave(m_pmanager.m_killNum,m_time/1000);
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
    bgsound->stop();
    emit sig_closeGame();
}

void game::slot_learnSkill1()
{
    if(m_pmanager.setMoney(m_price_skill1))
    {
        m_pmanager.setSkill_1(1);
        ui->coins->setText(QString::number(m_pmanager.getMoney()));
        ui->lblskill1->setText(QString::number(m_pmanager.getSkill_1()));
    }
}

void game::slot_learnSkill2()
{
    if(m_pmanager.setMoney(m_price_skill1))
    {
        m_pmanager.setSkill_2(1);
        ui->coins->setText(QString::number(m_pmanager.getMoney()));
        ui->lblskill1->setText(QString::number(m_pmanager.getSkill_2()));
    }
}

void game::slot_learnSkill3()
{
    if(m_pmanager.setMoney(m_price_skill1))
    {
        m_pmanager.setSkill_3(1);
        ui->coins->setText(QString::number(m_pmanager.getMoney()));
        ui->lblskill1->setText(QString::number(m_pmanager.getSkill_3()));
    }
}
void game::setUser(QString a){
    m_user=a;
}
QString game::returnUser(){
    return m_user;
}
//    绘制火焰
void game::renderBorder(QPainter *painter, int rate)
{
    QPainterPath path;
    path.addRect(0,60,this->width(),this->height()-130);
    int w_bound=this->width()-space*8/3*rate>300?this->width()-space*8/3*rate:280;
    int h_bound=this->height()-130-space*2*rate>210?this->height()-130-space*2*rate:210;
    path.addRect(space*4/3*rate,60+space*rate,w_bound,h_bound);
    painter->setPen(QPen(Qt::gray,1,Qt::DotLine,Qt::FlatCap));
    painter->setBrush(QPixmap(QString(":/res/config/ico/seaplane.png")));
    path.setFillRule(Qt::OddEvenFill);//使用奇偶填充，刚好可以只显示圆环
    painter->drawPath(path);
    m_pmanager.setLifeRect(space*4/3*rate,60+space*rate,w_bound,h_bound);
}
game::~game()
{
    delete ui;
}
