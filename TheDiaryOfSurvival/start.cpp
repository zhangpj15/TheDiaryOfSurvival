#include "start.h"
#include "ui_start.h"

start::start(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::start)
{
    ui->setupUi(this);
    connect(ui->btnEnter,SIGNAL(clicked()),this,SLOT(slot_btnEnter()));
    connect(ui->btnInfo,SIGNAL(clicked()),this,SLOT(slot_btnInfo()));
    connect(ui->btnClose,SIGNAL(clicked()),this,SLOT(slot_btnClose()));
    connect(ui->btnRegis,SIGNAL(clicked()),this,SLOT(slot_btnRegis()));
}

void start::slot_btnEnter()
{
    emit sig_btnEnter();
}

void start::slot_btnRegis()
{
    emit sig_btnRegis();
}

void start::slot_btnInfo()
{
    emit sig_btnInfo();
}

void start::slot_btnClose()
{
    emit sig_btnClose();
}

start::~start()
{
    delete ui;
}
