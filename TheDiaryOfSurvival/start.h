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
    void slot_btnEnter();
    void slot_btnInfo();
    void slot_btnClose();
    void slot_btnRegis();
signals:
    void sig_btnEnter();
    void sig_btnInfo();
    void sig_btnClose();
    void sig_btnRegis();

};

#endif // START_H
