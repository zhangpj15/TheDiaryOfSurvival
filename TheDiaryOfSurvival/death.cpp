#include "death.h"
#include "ui_death.h"

death::death(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::death)
{
    ui->setupUi(this);

    connect(ui->btnRestart,SIGNAL(clicked()),this,SLOT(slot_btnRestart()));
}

void death::slot_btnRestart()
{
    emit sig_restart();
}

death::~death()
{
    delete ui;
}
