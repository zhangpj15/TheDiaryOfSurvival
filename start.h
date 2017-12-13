#ifndef START_H
#define START_H

#include <QWidget>

namespace Ui {
class start;
}

class start : public QWidget
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = 0);
    ~start();

private:
    Ui::start *ui;

public slots:
    void slot_btnEnter();// 进入游戏
    void slot_btnInfo();// 查看信息
    void slot_btnClose();// 关闭
    void slot_btnRegis();// 登录注册
signals:
    void sig_btnEnter();
    void sig_btnInfo();
    void sig_btnClose();
    void sig_btnRegis();

};

#endif // START_H
