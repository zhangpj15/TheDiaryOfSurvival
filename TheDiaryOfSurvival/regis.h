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
};

#endif // REGIS_H
