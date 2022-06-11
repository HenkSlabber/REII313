#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"
#include "halloffame.h"
#include "multiplayerpage.h"
#include "singleplayerpage.h"
#include "GlobalVariables.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
   ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_QuitBtn_clicked()
{
    MainWindow::close();
}

void MainWindow::on_SettingsBtn_clicked()
{
    Settings = new settings();
    this->close();
    Settings->show();
}

void MainWindow::on_HallOfFameBtn_clicked()
{
    HallOfFame = new halloffame();
    this->close();
    HallOfFame->show();
}

void MainWindow::on_MultiplayerBtn_clicked()
{
    MultiPlayerPage = new multiplayerpage();
    this->close();
    MultiPlayerPage->show();
}

void MainWindow::on_SinglePlayerBtn_clicked()
{
    SinglePlayerPage = new singleplayerpage();
    this->close();
    SinglePlayerPage->show();
}
