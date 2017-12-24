#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("The Diary of Survival by A Group");

    initGame();
    initStart();
    initInfo();
    initRegis();
    initLoadwin();

    connect(m_game,SIGNAL(sig_deathSave(int,int)),m_loadwin,SLOT(saveRecord(int, int)));
}

void MainWindow::initGame()
{
    m_game = new game(this);

    m_game->setGeometry(0,0,width(),height());
//    qDebug()<<width();
    m_game->setFocusPolicy(Qt::StrongFocus);

    m_game->hide();
    connect(m_game,SIGNAL(sig_closeGame()),this,SLOT(slot_return()));
}

void MainWindow::initStart()
{
    m_start = new start(this);
    m_start->setGeometry(0,0,width(),height());

    connect(m_start,SIGNAL(sig_btnEnter()),this,SLOT(slot_start()));
    connect(m_start,SIGNAL(sig_btnClose()),this,SLOT(slot_close()));
    connect(m_start,SIGNAL(sig_btnInfo()),this,SLOT(slot_info()));
    connect(m_start,SIGNAL(sig_btnRegis()),this,SLOT(slot_regis()));
    connect(m_start,SIGNAL(sig_btnLogin()),this,SLOT(slot_loadwin()));
}

void MainWindow::initInfo()
{
    m_info = new info(this);
    m_info->hide();
    connect(m_start,SIGNAL(sig_btnInfo()),this,SLOT(slot_info()));
}

void MainWindow::initRegis()
{
    m_regis = new regis(this);
    m_regis->hide();
    connect(m_start,SIGNAL(sig_btnRegis()),this,SLOT(slot_regis()));
    //connect(m_regis,SIGNAL(sig_close_regis()),this,SLOT(slot_start()));
    connect(m_regis,SIGNAL(sig_returnButton()),this,SLOT(slot_returnStart()));
    connect(m_regis,SIGNAL(sig_load()),this,SLOT(slot_loadwin()));
}

void MainWindow::initLoadwin()
{
    m_loadwin = new loadwin(this);
    m_loadwin->hide();
//    connect(m_start,SIGNAL(sig_btnLogin()),this,SLOT(slot_loadwin()));
    connect(m_loadwin,SIGNAL(sig_exitButton()),this,SLOT(slot_exitLogin()));   //restart信号，则触发游戏重启
    connect(m_loadwin,SIGNAL(sig_loginSuccess()),this,SLOT(slot_start()));
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    m_game->setGeometry(0,0,width(),height());
}

void MainWindow::slot_start()
{
    m_start->hide();
    m_game->show();

    m_game->startGameLoop();
}

void MainWindow::slot_regis()
{
    m_start->hide();
    m_regis->show();
}

void MainWindow::slot_loadwin()
{
    m_start->hide();
    m_loadwin->show();
}


void MainWindow::slot_return()
{
    m_game->hide();
    m_start->show();

}

void MainWindow::slot_exitLogin()
{
    m_loadwin->hide();
    m_start->show();

}

void MainWindow::slot_returnStart()
{
    m_regis->hide();
    m_start->show();

}

void MainWindow::slot_info()
{
    m_info->showInfo();
}

void MainWindow::slot_close()
{
    this->close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
