#include "singleplayerpage.h"
#include "ui_singleplayerpage.h"
#include "unolite.h"

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
    firstpage0 = new FirstPage();
    firstpage0->show();
    this->close();
}

void singleplayerpage::on_StartGameBtn_clicked()
{
    UnoLite unolite;
    unolite.setWindowState(Qt::WindowMaximized);
    unolite.show();
}
