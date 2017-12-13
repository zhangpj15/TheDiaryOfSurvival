#ifndef DEATH_H
#define DEATH_H

#include <QWidget>

namespace Ui {
class death;
}

class death : public QWidget
{
    Q_OBJECT

public:
    explicit death(QWidget *parent = 0);
    ~death();

private:
    Ui::death *ui;

public slots:
    void slot_btnRestart();// 重启函数

signals:
    void sig_restart();// 重启信号
};

#endif // DEATH_H
