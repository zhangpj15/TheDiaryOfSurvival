#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "start.h"
#include "info.h"
#include "regis.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    start* m_start;
    game* m_game;
    info * m_info;
    regis * m_regis;

    void initStart();
    void initGame();
    void initInfo();
    void initRegis();

protected:
    void resizeEvent(QResizeEvent* event);

private:
    Ui::MainWindow *ui;

private slots:
    void slot_start();
    void slot_regis();
    void slot_return();
    void slot_info();
    void slot_close();

};

#endif // MAINWINDOW_H
