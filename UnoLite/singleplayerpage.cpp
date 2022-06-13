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
    //Use slot to get back to previous page
    emit BackButtonPressed();
    //close current page
    this->close();

}

void singleplayerpage::on_StartGameBtn_clicked()
{
    //Open game
    UnoLite unolite;
    unolite.setWindowState(Qt::WindowMaximized);
    unolite.show();
    //close current page
    this->close();
}
