#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_DALJE_clicked()
{

}

void MainWindow::on_prvaMomcad_clicked()
{

}

void MainWindow::on_drugaMomcad_clicked()
{

}

void MainWindow::on_remi_clicked()
{

}
