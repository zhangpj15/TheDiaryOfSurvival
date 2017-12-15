#include "loadwin.h"
#include "ui_loadwin.h"

loadwin::loadwin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loadwin)
{
    ui->setupUi(this);
    connect(ui->exitButton,SIGNAL(clicked()),this,SLOT(slot_exitButton()));
}

void loadwin::slot_exitButton()
{
    emit sig_exitButton();
}
loadwin::~loadwin()
{
    delete ui;
}
