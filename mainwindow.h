#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_DALJE_clicked();

    void on_prvaMomcad_clicked();

    void on_drugaMomcad_clicked();

    void on_remi_clicked();

    void on_DALJE_clicked(bool checked);

    void on_DALJE_pressed();

    void on_actionProvjera_o_ovisnosti_o_kla_enju_triggered();

    void on_actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju_triggered();

    void on_actionO_programu_triggered();

    void on_actionInformacije_o_programu_triggered();

    void on_actionIzlaz_iz_programa_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
