#include "rank.h"
#include "regis.h"
#include "ui_rank.h"

Rank::Rank(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rank)
{
    ui->setupUi(this);
    connect(ui->exitBtn,SIGNAL(clicked()),this,SLOT(slot_returnButton()));
}

void Rank::fresh()
{
    //timerank
    QSqlQuery query;
    query.exec("SELECT user_name,time FROM user_info ORDER BY time DESC LIMIT 10");

    int i=0;

    //qDebug()<<query.value(0).toString();
    while (query.next()) {
        ui->timeTable->setItem(i, 0, new QTableWidgetItem((query.value(0).toString())));
        ui->timeTable->setItem(i, 1, new QTableWidgetItem((query.value(1).toString())));
        ui->timeTable->item(i,0)->setTextColor(QColor(255,255,255));
        ui->timeTable->item(i,1)->setTextColor(QColor(255,255,255));
        ui->timeTable->item(i,0)->setFont(QFont("Helvetica"));
        ui->timeTable->item(i,1)->setFont(QFont("Helvetica"));
        //qDebug()<<query.value(0).toString()<<query.value(1).toString();
        i++;
    }

    //killrank
    query.exec("SELECT user_name,` kill` FROM user_info ORDER BY ` kill` DESC LIMIT 10");
    i=0;
    while (query.next()) {
        ui->killTable->setItem(i, 0, new QTableWidgetItem((query.value(0).toString())));
        ui->killTable->setItem(i, 1, new QTableWidgetItem((query.value(1).toString())));
        ui->killTable->item(i,0)->setTextColor(QColor(255,255,255));
        ui->killTable->item(i,1)->setTextColor(QColor(255,255,255));
        ui->killTable->item(i,0)->setFont(QFont("Helvetica"));
        ui->killTable->item(i,1)->setFont(QFont("Helvetica"));
        i++;
    }

    return;
}

void Rank::slot_returnButton()
{
    emit sig_returnButton();
}

Rank::~Rank()
{
    delete ui;
}
