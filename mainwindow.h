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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
