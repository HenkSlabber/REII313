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

void hostgamepage::on_HostagamepageBackBtn_clicked()
{
    //Use slot to get back to previous page
    emit BackButtonPressed();
    //close current page
    this->close();
}

