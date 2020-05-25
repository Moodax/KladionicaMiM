/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionProvjera_o_ovisnosti_o_kla_enju;
    QAction *actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju;
    QAction *actionInformacije_o_programu;
    QWidget *centralwidget;
    QPushButton *DALJE;
    QPushButton *prvaMomcad;
    QPushButton *drugaMomcad;
    QPushButton *remi;
    QLabel *ispis;
    QLineEdit *upis;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuDodatne_opcije;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 561);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 172, 136, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(76, 76, 76, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 63, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(25, 25, 25, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(34, 34, 34, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush9(QColor(51, 51, 51, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        MainWindow->setPalette(palette);
        QFont font;
        font.setPointSize(15);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 172, 136);"));
        actionProvjera_o_ovisnosti_o_kla_enju = new QAction(MainWindow);
        actionProvjera_o_ovisnosti_o_kla_enju->setObjectName(QString::fromUtf8("actionProvjera_o_ovisnosti_o_kla_enju"));
        actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju = new QAction(MainWindow);
        actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju->setObjectName(QString::fromUtf8("actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju"));
        actionInformacije_o_programu = new QAction(MainWindow);
        actionInformacije_o_programu->setObjectName(QString::fromUtf8("actionInformacije_o_programu"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DALJE = new QPushButton(centralwidget);
        DALJE->setObjectName(QString::fromUtf8("DALJE"));
        DALJE->setGeometry(QRect(350, 310, 131, 81));
        QPalette palette1;
        QBrush brush10(QColor(0, 0, 139, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        DALJE->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tw Cen MT"));
        font1.setPointSize(15);
        font1.setKerning(true);
        DALJE->setFont(font1);
        DALJE->setAutoFillBackground(false);
        DALJE->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 172, 136);"));
        prvaMomcad = new QPushButton(centralwidget);
        prvaMomcad->setObjectName(QString::fromUtf8("prvaMomcad"));
        prvaMomcad->setGeometry(QRect(20, 420, 101, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        prvaMomcad->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Tw Cen MT"));
        font2.setPointSize(15);
        prvaMomcad->setFont(font2);
        prvaMomcad->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 172, 136);"));
        drugaMomcad = new QPushButton(centralwidget);
        drugaMomcad->setObjectName(QString::fromUtf8("drugaMomcad"));
        drugaMomcad->setGeometry(QRect(380, 420, 101, 91));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        drugaMomcad->setPalette(palette3);
        drugaMomcad->setFont(font2);
        drugaMomcad->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 172, 136);"));
        remi = new QPushButton(centralwidget);
        remi->setObjectName(QString::fromUtf8("remi"));
        remi->setGeometry(QRect(200, 420, 101, 91));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        remi->setPalette(palette4);
        remi->setFont(font2);
        remi->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 172, 136);"));
        ispis = new QLabel(centralwidget);
        ispis->setObjectName(QString::fromUtf8("ispis"));
        ispis->setGeometry(QRect(20, 10, 461, 251));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        ispis->setPalette(palette5);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Fixedsys"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        ispis->setFont(font3);
        ispis->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 139);"));
        ispis->setLocale(QLocale(QLocale::Croatian, QLocale::Croatia));
        ispis->setFrameShape(QFrame::Panel);
        ispis->setFrameShadow(QFrame::Sunken);
        ispis->setTextFormat(Qt::AutoText);
        ispis->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        ispis->setWordWrap(true);
        ispis->setOpenExternalLinks(true);
        ispis->setTextInteractionFlags(Qt::TextBrowserInteraction);
        upis = new QLineEdit(centralwidget);
        upis->setObjectName(QString::fromUtf8("upis"));
        upis->setGeometry(QRect(20, 310, 271, 81));
        QPalette palette6;
        QBrush brush11(QColor(231, 231, 231, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush10);
        QBrush brush12(QColor(231, 231, 231, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        upis->setPalette(palette6);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Fixedsys"));
        font4.setPointSize(15);
        upis->setFont(font4);
        upis->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 139);"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 20));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush10);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
        QBrush brush13(QColor(0, 0, 139, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        menuBar->setPalette(palette7);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Fixedsys"));
        font5.setPointSize(8);
        menuBar->setFont(font5);
        menuDodatne_opcije = new QMenu(menuBar);
        menuDodatne_opcije->setObjectName(QString::fromUtf8("menuDodatne_opcije"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::HighlightedText, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        menuDodatne_opcije->setPalette(palette8);
        menuDodatne_opcije->setFont(font5);
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuDodatne_opcije->menuAction());
        menuDodatne_opcije->addSeparator();
        menuDodatne_opcije->addAction(actionProvjera_o_ovisnosti_o_kla_enju);
        menuDodatne_opcije->addAction(actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju);
        menuDodatne_opcije->addAction(actionInformacije_o_programu);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "KladionicaMiM", nullptr));
        actionProvjera_o_ovisnosti_o_kla_enju->setText(QCoreApplication::translate("MainWindow", "Provjera o ovisnosti o kla\304\221enju", nullptr));
        actionRehabilitacijski_program_za_lije_enje_ovisnosti_o_kla_enju->setText(QCoreApplication::translate("MainWindow", "Rehabilitacijski program za lije\304\215enje ovisnosti o kla\304\221enju", nullptr));
        actionInformacije_o_programu->setText(QCoreApplication::translate("MainWindow", "Informacije o programu", nullptr));
        DALJE->setText(QCoreApplication::translate("MainWindow", "DALJE", nullptr));
        prvaMomcad->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        drugaMomcad->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        remi->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        ispis->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Dobrodo\305\241li u kladionicu MiM!</p><p>Za po\304\215etak upi\305\241ite broj lige u kojoj \305\276elite ulo\305\276iti svoj novac te </p><p>pritisnite DALJE :</p><p>1. Premier League</p><p>2. Bundesliga</p><p>3. Serie A</p><p>4. La Liga</p><p>5. 1.HNL</p></body></html>", nullptr));
        menuDodatne_opcije->setTitle(QCoreApplication::translate("MainWindow", "Dodatne opcije", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
