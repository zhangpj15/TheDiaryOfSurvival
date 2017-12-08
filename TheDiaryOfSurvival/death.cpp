#include "death.h"
#include "ui_death.h"

death::death(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::death)
{
    ui->setupUi(this);
}

death::~death()
{
    delete ui;
}
