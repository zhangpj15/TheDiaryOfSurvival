#include "info.h"
#include "ui_info.h"
#include <QDebug>
#include <QLabel>

info::info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    ui->infoBackground->setAlignment(Qt::AlignHCenter);
    connect(ui->infoClose,SIGNAL(clicked()),this,SLOT(slot_closeInfo()));
}

void info::showInfo()
{
    setGeometry(QRect(20, 100, ui->infoBackground->width(), ui->infoBackground->height()));
    show();
}

void info::slot_closeInfo()
{
    hide();
}

info::~info()
{
    delete ui;
}
