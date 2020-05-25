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

std::ofstream out("Medicinska analiza.txt",std::fstream::app);
std::ifstream in("Medicinska analiza.txt",std::fstream::app);
static int velicina;
int duljina;
 int danas;
static int* dan=new int[1000];
void MainWindow::on_DALJE_clicked()
{

    time_t sad=time(0);
    tm *vrijeme=localtime(&sad);
    danas=(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday;
    std::string unos;
    QLabel ispis;
    int r=0,s=0,j;
    std::ifstream data;
    int izbor;
    static int a=0;
    a++;
    static QString parovi[10][2];
    static int i=0;
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
    a=(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday;
    out.write((char*)&a,sizeof(a));
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
    a=(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday;
    out.write((char*)&a,sizeof(a));
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
    a=(vrijeme->tm_year-120)*365+(vrijeme->tm_mon*31)+vrijeme->tm_mday;
    out.write((char*)&a,sizeof(a));
}

void MainWindow::on_actionProvjera_o_ovisnosti_o_kla_enju_triggered()
{
    QLabel ispis;
    ispis.openExternalLinks();
    int i=0,j,s;
    while(!in.eof())
    {
        in.read((char*)&dan[i],sizeof(int));
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(danas-dan[j]>7)
        {
              for(s=j+1;s<i;s++)
              {
                  dan[s-1]=dan[s];
              }
              i--;
         }
    }
    velicina=i-1;
    if(velicina==0)
    {
        ui->ispis->setText("U posljednjih tjedan dana niti jednom niste uložili novac u klađenje,svaka čast!");
    }
    else  if(velicina>0 && velicina<11)
    {
        ui->ispis->setText("U posljednjih tjedan dana ste se vrlo umjereno kladili,samo "+QString::number(velicina)+" puta, nastavite tako!\n");
    }
    else  if(velicina>9 && velicina<21)
    {
        ui->ispis->setText("U posljednjih tjedan dana ste se kladili  "+QString::number(velicina)+" puta,pripazite da ne postanete ovisni.");
    }
    else  if(velicina>19 && velicina<41)
    {
        ui->ispis->setText("U posljednjih tjedan dana ste se kladili "+QString::number(velicina)+" puta, pokazujete ozbiljne znakove ovisnosti o klađenju, pokušajte smanjiti taj broj.");
    }
    else  if(velicina>40)
    {
        ui->ispis->setText("U posljednjih tjedan dana ste se kladili vrtoglavih "+QString::number(velicina)+" puta, kontaktirajte stručnu pomoć!\n");
    }


}
void MainWindow::on_actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju_triggered()
{
    ui->ispis->setText("<a href=\"https://www.pbsvi.hr/strucni-programi/kocka-terapijsko-rehabilitacijski-program-za-ovisnost-o-kockanju/\">Rehabilitacijski program KOCKA</a>");

}

void MainWindow::on_actionInformacije_o_programu_triggered()
{
    ui->ispis->setText("Program za projekt iz predmeta Algoritama i Programiranja u školskoj godini 2019./2020.\nVelika većina koda izrađena u jednom danu(25.5.2020.).\nAutori programa:\nMartin Šek(dizajn)\nMatija Fauković(kod)");
}
void MainWindow::on_DALJE_clicked(bool checked)
{
    checked=false;
}
void MainWindow::on_DALJE_pressed()
{

}
void MainWindow::on_actionO_programu_triggered()
{

}
