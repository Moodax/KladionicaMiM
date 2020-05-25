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
#include<ctime>
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
double doma,remi,gosti;

std::ofstream out("Medicinska analiza.txt",std::ios::binary);
std::ifstream in("Medicinska analiza.txt",std::ios::binary);
static int velicina;
static int* dan=new int[1000];
void MainWindow::on_DALJE_clicked()
{
    int danas;
    time_t sad=time(0);
    tm *vrijeme=localtime(&sad);
    danas=(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday;
    std::string unos;
    QLabel ispis;
    int r=0,s=0,i,j;
    std::ifstream data;
    int izbor;
    static int a=0;
    a++;
    static QString parovi[10][2];
    i=0;
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
        else  if(izbor==2)
        {
            data.open("Bundesliga.txt");
            QString sortiraj[18];
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
                for(i=0;i<17;i++)
                {
                    for(j=17;j>0;j--)
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
            ui->ispis->setText("Odaberite broj para i pritisnite DALJE :\n1." + sortiraj[0]+ " - "+ sortiraj[1]+"\n2."+sortiraj[2]+" - "+ sortiraj[3]+"\n3."+sortiraj[4]+" - "+ sortiraj[5]+"\n4."+sortiraj[6]+" - "+ sortiraj[7]+"\n5."+sortiraj[8]+" - "+ sortiraj[9]+"\n6."+sortiraj[10]+" - "+ sortiraj[11]+"\n7."+sortiraj[12]+" - "+ sortiraj[13]+"\n8."+sortiraj[14]+" - "+ sortiraj[15]+"\n9."+sortiraj[16]+" - "+ sortiraj[17]);

            i=0;
            for(r=0;r<9;r++)
            {
                for(s=0;s<2;s++)
                {
                    parovi[r][s]=sortiraj[i];
                    i++;
                }
            }
        }
        else  if(izbor==3)
        {
            data.open("Serie A.txt");
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
        else   if(izbor==4)
        {
            data.open("La Liga.txt");
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
        else  if(izbor==5)
        {
            data.open("hnl.txt");
            QString sortiraj[10];
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
                for(i=0;i<9;i++)
                {
                    for(j=9;j>0;j--)
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
            ui->ispis->setText("Odaberite broj para i pritisnite DALJE :\n1." + sortiraj[0]+ " - "+ sortiraj[1]+"\n2."+sortiraj[2]+" - "+ sortiraj[3]+"\n3."+sortiraj[4]+" - "+ sortiraj[5]+"\n4."+sortiraj[6]+" - "+ sortiraj[7]+"\n5."+sortiraj[8]+" - "+ sortiraj[9]);

            i=0;
            for(r=0;r<5;r++)
            {
                for(s=0;s<2;s++)
                {
                    parovi[r][s]=sortiraj[i];
                    i++;
                }
            }
        }
    if(izbor==6)
    {
        while(!in.eof())
        {
          getline(in,unos);
          if(unos=="")
              break;
          dan[i]=stoi(unos);
          i++;
        }
        for(j=0;j<i;j++)
        {
            if(unos=="")
                break;
            if(danas-dan[j]>7)
            {
                  for(s=j+1;s<i;s++)
                  {
                      dan[s-1]=dan[s];
                  }
                  i--;
             }
        }
       velicina=i;
       in.close();
    }
    }
    if(a==2)
    {
        izbor=ui->upis->text().toInt();
        ui->upis->setText("");
        doma=(double)random(500,1400)/random(1000,1500)+1;
        doma=round(doma*100)/100;
        remi=(double)random(900,2400)/random(960,1200)+1;
        remi=round(remi*100)/100;
        gosti=(double)random(400,2000)/random(1000,1500)+1.5;
        gosti=round(gosti*100)/100;
        ui->ispis->setText("Odabrali ste par broj "+QString::number(izbor)+":\n"+ parovi[izbor-1][0]+" - "+ parovi[izbor-1][1] +"\n"+ QString::number(doma)+"      "+QString::number(remi)+"      "+ QString::number(gosti)+"\nUpišite vaš ulog i pritisnite gumb na koju momčad želite uložiti.\nPritiskom na tipku 1 birate "+parovi[izbor-1][0]+".\nPritiskom na tipku X birate neriješeni rezultat, a pritiskom\nna tipku 2 birate "+parovi[izbor-1][1]+".");
    }
}

void MainWindow::on_prvaMomcad_clicked()
{
    double dobitak;
    int a;
    double min;
    a=ui->upis->text().toInt();
    ui->upis->setText("");
    dobitak=a*doma;
    doma=doma*doma*random(1,5);
    remi=remi*remi*random(1,5);
    gosti=gosti*gosti*random(1,5);
    min=std::min(doma,gosti);
    min=std::min(min,remi);
    if(min==doma)
        ui->ispis->setText("Čestitamo! Osvojili ste "+QString::number(dobitak)+" kuna!\nZa novu okladu morate ponovno pokrenuti program.");
    else
        ui->ispis->setText("Nažalost niste osvojili "+QString::number(dobitak)+" kuna.  :(\nZa novu okladu morate ponovno pokrenuti program.\n");

    time_t sad=time(0);
    tm *vrijeme=localtime(&sad);
    for(a=0;a<velicina;a++)
    {
        out<<dan[a]<<std::endl;
    }
    out<<(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday<<std::endl;
}

void MainWindow::on_drugaMomcad_clicked()
{
    double dobitak;
    int a;
    double min;
    a=ui->upis->text().toInt();
    ui->upis->setText("");
    dobitak=a*doma;
    doma=doma*doma*random(1,5);
    remi=remi*remi*random(1,5);
    gosti=gosti*gosti*random(1,5);
    min=std::min(doma,gosti);
    min=std::min(min,remi);
    if(min==gosti)
        ui->ispis->setText("Čestitamo! Osvojili ste "+QString::number(dobitak)+" kuna!\nZa novu okladu morate ponovno pokrenuti program.");
    else
        ui->ispis->setText("Nažalost niste osvojili "+QString::number(dobitak)+"  kuna.  :(\nZa novu okladu morate ponovno pokrenuti program.\n");

    time_t sad=time(0);
    tm *vrijeme=localtime(&sad);
    for(a=0;a<velicina;a++)
    {
        out<<dan[a]<<std::endl;
    }
    out<<(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday<<std::endl;
}

void MainWindow::on_remi_clicked()
{
    double dobitak;
    int a;
    double min;
    a=ui->upis->text().toInt();
    ui->upis->setText("");
    dobitak=a*doma;
    doma=doma*doma*random(1,5);
    remi=remi*remi*random(1,5);
    gosti=gosti*gosti*random(1,5);
    min=std::min(doma,gosti);
    min=std::min(min,remi);
    if(min==remi)
        ui->ispis->setText("Čestitamo! Osvojili ste "+QString::number(dobitak)+" kuna!\nZa novu okladu morate ponovno pokrenuti program.");
    else
        ui->ispis->setText("Nažalost niste osvojili "+QString::number(dobitak)+" kuna.  :(\nZa novu okladu morate ponovno pokrenuti program.\n");
    time_t sad=time(0);
    tm *vrijeme=localtime(&sad);
    for(a=0;a<velicina;a++)
    {
        out<<dan[a]<<std::endl;
    }
    out<<(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday<<std::endl;
}




