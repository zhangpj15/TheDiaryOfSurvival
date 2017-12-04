#ifndef LOADWIN_H
#define LOADWIN_H

#include <QDialog>
#include "widget.h"

namespace Ui {
class loadwin;
}

class loadwin : public QDialog
{
    Q_OBJECT
    
public:
    bool doCheck(const QString uname,const QString pw);   //登陆时比较账户密码是否一致
    explicit loadwin(QDialog *parent = 0);
    ~loadwin();

public slots:
    void loadButtonClicked();

private:
    Ui::loadwin *l_ui;
};

#endif // LOADWIN_H
