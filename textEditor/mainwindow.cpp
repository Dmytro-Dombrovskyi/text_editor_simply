#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    new_file_ = false;
    file_opened_ = false;
    file_changed_ = false;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{

}

void MainWindow::on_actionQuit_triggered()
{
    file_changed_ = true;
    if(file_opened_ && file_changed_)
    {
        QMessageBox::StandardButton answer =
                QMessageBox::question(this, "Quit dialog",
                              "Do you really want to quit?",
                              QMessageBox::Yes | QMessageBox::No);
        if(QMessageBox::Yes == answer)
            QApplication::instance()->quit();
    }
    else
        QApplication::instance()->quit();
}
