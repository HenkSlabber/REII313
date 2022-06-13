#include "singleplayerpage.h"
#include "ui_singleplayerpage.h"
#include "unoliteDufficulty1.h"
#include "unoliteDufficulty2.h"

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
    Dufficulty1 = new UnoLiteDufficulty1();
    Dufficulty1->setWindowState(Qt::WindowMaximized);
    Dufficulty1->show();
    //Dufficulty2 = new UnoLiteDufficulty2();
    //Dufficulty2->setWindowState(Qt::WindowMaximized);
    //Dufficulty2->show();

    //close current page
    this->close();
}
