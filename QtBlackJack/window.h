#pragma once
#include <QMainWindow>
#include "blackJ.h"

namespace Ui {
    class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT
private:
    Ui::Window* ui;
public:
    explicit Window(QWidget* parent = 0);
    ~Window();
    BlackJack player;
    Window* window;
    BlackJack croupier;
    Deck deck;
    int spaceplayer;
    int spacecroupier;
    void first_deal();

private slots:
    void on_pushButtonBack_clicked();
    void on_pushButtonDEAL_clicked();
    void on_pushButtonAsk_clicked();
    void on_pushButtonStand_clicked();

};