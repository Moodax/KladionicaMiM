#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<ctime>
#include<math.h>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<utility>
#include<algorithm>
#include<numeric>
#include<iostream>
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
    int izbor;
    static int a=0;
    a++;
    if(a==1)
    {
     izbor=ui->upis->text().toInt();

    }
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
