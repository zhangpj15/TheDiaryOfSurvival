#ifndef RANK_H
#define RANK_H

#include <QWidget>

namespace Ui {
class Rank;
}

class Rank : public QWidget
{
    Q_OBJECT

public:
    explicit Rank(QWidget *parent = 0);
    void fresh();
    ~Rank();

private:
    Ui::Rank *ui;

public slots:
    void slot_returnButton();

signals:
    void sig_returnButton();
};

#endif // RANK_H
