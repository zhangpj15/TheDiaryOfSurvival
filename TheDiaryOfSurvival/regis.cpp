#include "regis.h"
#include "ui_regis.h"

regis::regis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regis)
{
    ui->setupUi(this);
}

regis::~regis()
{
    delete ui;
}
