#ifndef WIDGET_H
#define WIDGET_H

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
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    void addPerson(const QString name,const QString pw ,const QString sex ,const QString mail ,const QString phone);
    ~Widget();

public slots:
    void checkButtonClicked();
    void loginButtonClicked();
    void loadButtonClicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
