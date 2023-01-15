#pragma once
#include <QMainWindow>
#include <QDialog>
#include "window.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
private:
    Q_OBJECT
    QDialog* qdialog;
    Ui::MainWindow* ui;
    Window* m;
private slots:
    void on_pushButtonInstruction_clicked();
    void on_pushButtonPlay_clicked();
public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();




};