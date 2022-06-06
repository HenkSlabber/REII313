#include "hostgamepage.h"
#include "ui_hostgamepage.h"

hostgamepage::hostgamepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hostgamepage)
{
    ui->setupUi(this);
}

hostgamepage::~hostgamepage()
{
    delete ui;
}
