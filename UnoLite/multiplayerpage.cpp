#include "multiplayerpage.h"
#include "ui_multiplayerpage.h"

multiplayerpage::multiplayerpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::multiplayerpage)
{
    ui->setupUi(this);
}

multiplayerpage::~multiplayerpage()
{
    delete ui;
}
