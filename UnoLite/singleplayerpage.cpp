#include "singleplayerpage.h"
#include "ui_singleplayerpage.h"
#include "mainwindow.h"


singleplayerpage::singleplayerpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::singleplayerpage)
{
    ui->setupUi(this);
   // QMainWindow().hide();
}

singleplayerpage::~singleplayerpage()
{
    delete ui;
}


void singleplayerpage::on_singleplayerpageBackBtn_clicked()
{
    //this->destroy();

    mainWindow = new MainWindow;
    mainWindow->show();
    this->hide();



}

