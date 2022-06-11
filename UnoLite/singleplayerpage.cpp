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

