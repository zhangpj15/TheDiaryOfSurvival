#ifndef REGIS_H
#define REGIS_H

#include <QWidget>
#include <iostream>
#include <string>
#include <QtSql>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QCryptographicHash>
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

private:
    Ui::regis *ui;
public slots:
    void slot_returnButton();// 肯定quit
    void checkButtonClicked();
    void loginButtonClicked();
    void loadButtonClicked();
//    void slot_loginSuccess();

signals:
    void sig_returnButton();
    void sig_close_regis();
    void sig_load();

};

#endif // REGIS_H
