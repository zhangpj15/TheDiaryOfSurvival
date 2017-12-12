#include "end.h"
#include "ui_end.h"

end::end(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::end)
{
    ui->setupUi(this);

    connect(ui->btnYes,SIGNAL(clicked()),this,SLOT(slot_btnYes()));
    connect(ui->btnNo,SIGNAL(clicked()),this,SLOT(slot_btnNo()));
}

void end::slot_btnYes()
{
    emit sig_gameyes();
}

void end::slot_btnNo()
{
    emit sig_gameno();
}

end::~end()
{
    delete ui;
}
