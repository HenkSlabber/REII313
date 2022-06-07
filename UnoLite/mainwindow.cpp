#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "singleplayerpage.h"

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

void MainWindow::on_SinglePlayerBtn_clicked()
{
    SinglePlayerPage = new singleplayerpage();
    SinglePlayerPage->show();
}

void MainWindow::on_MultiplayerBtn_clicked()
{

}

void MainWindow::on_HallOfFameBtn_clicked()
{

}

void MainWindow::on_SettingsBtn_clicked()
{

}

void MainWindow::on_ExitBtn_clicked()
{

}
