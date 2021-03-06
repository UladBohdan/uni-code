#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "drawareawidget.h"

const int FREQ = 100; // in ms.

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_cubeButton_clicked();

    void on_parallelepipedButton_clicked();

    void on_cubeRotationButton_clicked();

private:
    void updateModifiers();
    Ui::MainWindow *ui;
    DrawAreaWidget* drawArea;
};

#endif // MAINWINDOW_H
