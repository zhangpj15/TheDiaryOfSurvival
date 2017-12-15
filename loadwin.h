#ifndef LOADWIN_H
#define LOADWIN_H

#include <QWidget>

namespace Ui {
class loadwin;
}

class loadwin : public QWidget
{
    Q_OBJECT

public:
    explicit loadwin(QWidget *parent = 0);
    ~loadwin();

private:
    Ui::loadwin *ui;
public slots:
    void slot_exitButton();// 肯定quit

signals:
    void sig_exitButton();
};

#endif // LOADWIN_H
