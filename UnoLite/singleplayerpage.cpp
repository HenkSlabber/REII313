#include "singleplayerpage.h"
#include "ui_singleplayerpage.h"

singleplayerpage::singleplayerpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::singleplayerpage)
{
    ui->setupUi(this);
}

singleplayerpage::~singleplayerpage()
{
    delete ui;
}


void singleplayerpage::on_singleplayerpageBackBtn_clicked()
{
    this->close();
    firstpage0 = new FirstPage();
    firstpage0->show();
}
