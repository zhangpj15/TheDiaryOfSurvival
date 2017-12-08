#ifndef END_H
#define END_H

#include <QWidget>

namespace Ui {
class end;
}

class end : public QWidget
{
    Q_OBJECT

public:
    explicit end(QWidget *parent = 0);
    ~end();

private:
    Ui::end *ui;

public slots:
    void slot_btnNo();
    void slot_btnYes();

signals:
    void sig_gameno();
    void sig_gameyes();
};

#endif // END_H
