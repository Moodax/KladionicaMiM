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
#include<random>
#include<unistd.h>
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
int random(int min, int max)
{
   static bool first = true;
   if (first)
   {
      srand( time(0) );
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}
void MainWindow::on_DALJE_clicked()
{
    int r=0,s=0,i,j;
    std::ifstream data;
    int izbor;
    static int a=0;
    a++;
    QString parovi[10][2];
    if(a==1)
    {
     izbor=ui->upis->text().toInt();
     ui->upis->setText(" ");
    if(izbor==1)
    {
        data.open("Premier League.txt");
        QString sortiraj[20];
        QString temp;
        std::string k;
        i=0;
        while(!data.eof())
        {
                getline(data,k);
                sortiraj[i]=QString::fromStdString(k);
                i++;
        }
        for(r=0;r<5;r++)
        {
        for(i=0;i<19;i++)
        {
            for(j=19;j>0;j--)
            {
                if(random(0,100)>=50)
                {
                    temp=sortiraj[i];
                    sortiraj[i]=sortiraj[j];
                    sortiraj[j]=temp;
                }
            }
        }
        }
    ui->ispis->setText("Odaberite broj para i pritisnite DALJE :\n1." + sortiraj[0]+ " - "+ sortiraj[1]+"\n2."+sortiraj[2]+" - "+ sortiraj[3]+"\n3."+sortiraj[4]+" - "+ sortiraj[5]+"\n4."+sortiraj[6]+" - "+ sortiraj[7]+"\n5."+sortiraj[8]+" - "+ sortiraj[9]+"\n6."+sortiraj[10]+" - "+ sortiraj[11]+"\n7."+sortiraj[12]+" - "+ sortiraj[13]+"\n8."+sortiraj[14]+" - "+ sortiraj[15]+"\n9."+sortiraj[16]+" - "+ sortiraj[17]+"\n10."+sortiraj[18]+" - "+ sortiraj[19]);

    i=0;
    for(r=0;r<10;r++)
    {
        for(s=0;s<2;s++)
        {
            parovi[r][s]=sortiraj[i];
            i++;
        }
    }
     }
    if(izbor==2)
    {
        data.open("Bundesliga.txt");

    }
    if(izbor==3)
    {
        data.open("Serie A.txt");

    }
    if(izbor==4)
    {
        data.open("La Liga.txt");

    }
    if(izbor==5)
    {
        data.open("1.HNL.txt");

    }

    }
    if(a==2)
    {
    izbor=ui->upis->text().toInt();
    double doma=(double)random(500,1400)/random(1000,1500)+1;
    doma=round(doma*100)/100;
    double remi=(double)random(900,2400)/random(960,1200)+1;
    remi=round(remi*100)/100;
    double gosti=(double)random(400,2000)/random(1000,1500)+1.5;
    gosti=round(gosti*100)/100;
    ui->ispis->setText("Odabrali ste par broj "+QString::number(izbor)+":\n"+ parovi[0][0]+" - "+ parovi[0][1] +"\n"+ QString::number(doma)+"      "+QString::number(remi)+"      "+ QString::number(gosti));
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


void MainWindow::on_DALJE_pressed()
{

}


