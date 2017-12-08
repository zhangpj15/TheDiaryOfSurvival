#ifndef REGIS_H
#define REGIS_H

#include <QWidget>
#include <iostream>
#include <string>
#include <QtSql>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include "loadwin.h"
using namespace std;

namespace Ui {
class regis;
}

class regis : public QWidget
{
    Q_OBJECT

public:
    explicit regis(QWidget *parent = 0);
    void addPerson(const QString name,const QString pw ,const QString sex ,const QString mail ,const QString phone);
    ~regis();

public slots:
    void checkButtonClicked();
    void loginButtonClicked();
    void loadButtonClicked();
    void slot_loginSuccess();

signals:
    void sig_close_regis();

private:
    Ui::regis *ui;
};

#endif // REGIS_H

