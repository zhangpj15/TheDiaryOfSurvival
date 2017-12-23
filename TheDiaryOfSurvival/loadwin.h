#ifndef LOADWIN_H
#define LOADWIN_H

#include <QWidget>
#include <QDialog>
#include "regis.h"
namespace Ui {
class loadwin;
}

class loadwin : public QWidget
{
    Q_OBJECT

public:
    explicit loadwin(QWidget *parent = 0);
    bool doCheck(const QString uname,const QString pw);   //登陆时比较账户密码是否一致
    ~loadwin();

private:
    Ui::loadwin *ui;
public slots:
    void slot_exitButton();// 肯定quit
    void loadButtonClicked();

signals:
    void sig_exitButton();
    void sig_loginSuccess();
};

#endif // LOADWIN_H