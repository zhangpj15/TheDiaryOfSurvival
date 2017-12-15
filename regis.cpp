#include "regis.h"
#include "ui_regis.h"

regis::regis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regis)
{
    ui->setupUi(this);
    connect(ui->returnButton,SIGNAL(clicked()),this,SLOT(slot_returnButton()));
}
void regis::slot_returnButton()
{
    emit sig_returnButton();
}
regis::~regis()
{
    delete ui;
}
