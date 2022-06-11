#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "singleplayerpage.h"
#include "multiplayerpage.h"
#include "halloffame.h"
#include "settings.h"

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

void MainWindow::on_MultiplayerBtn_clicked()
{
    MultiPlayerPage = new multiplayerpage();
    MultiPlayerPage->show();
    this->hide();
}

void MainWindow::on_HallOfFameBtn_clicked()
{
    HallOfFame = new halloffame();
    HallOfFame->show();
    this->hide();
}

void MainWindow::on_SettingsBtn_clicked()
{
    Settings = new settings();
    Settings->show();
    this->hide();
}

void MainWindow::on_ExitBtn_clicked()
{
   delete ui;
}

void MainWindow::on_SinglePlayerBtn_clicked()
{
    SinglePlayerPage = new singleplayerpage();
    SinglePlayerPage->show();
    this->hide();
}

