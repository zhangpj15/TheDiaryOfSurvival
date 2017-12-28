#ifndef INFO_H
#define INFO_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class info;
}

class info : public QWidget
{
    Q_OBJECT

public:
    explicit info(QWidget *parent = 0);
    ~info();
    void showInfo();

public slots:
    void slot_closeInfo();

private:
    Ui::info *ui;
};

#endif // INFO_H
