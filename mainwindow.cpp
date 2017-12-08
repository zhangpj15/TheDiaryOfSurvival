#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("The Diary of Survival by A Group");
    resize(790,560);

    initGame();
    initStart();
    initInfo();
    initRegis();
}

void MainWindow::initGame()
{
    m_game = new game(this);

    m_game->setGeometry(0,0,width(),height());
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
    m_regis->show();
}


void MainWindow::slot_return()
{
    m_game->hide();
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
