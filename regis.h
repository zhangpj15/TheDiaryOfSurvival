#ifndef REGIS_H
#define REGIS_H

#include <QWidget>

namespace Ui {
class regis;
}

class regis : public QWidget
{
    Q_OBJECT

public:
    explicit regis(QWidget *parent = 0);
    ~regis();

private:
    Ui::regis *ui;
public slots:
    void slot_returnButton();// 肯定quit

signals:
    void sig_returnButton();
};

#endif // REGIS_H
