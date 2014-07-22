#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_actionNew_triggered();

    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;

    bool new_file_;
    bool file_opened_;
    bool file_changed_;
};

#endif // MAINWINDOW_H
