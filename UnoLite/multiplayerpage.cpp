#include "multiplayerpage.h"
#include "ui_multiplayerpage.h"

multiplayerpage::multiplayerpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::multiplayerpage)
{
    this->setFixedSize(400,450);
    ui->setupUi(this);
}

multiplayerpage::~multiplayerpage()
{
    delete ui;
}

void multiplayerpage::on_HostBtn_clicked()
{
    //Open page
    HostGamePage = new hostgamepage();
    HostGamePage->show();
    this->close();
    //Create slot for new window to come back here
    QObject::connect(HostGamePage, SIGNAL(BackButtonPressed()),this,SLOT(backbuttonpressed()));
}


void multiplayerpage::on_ConnectBtn_clicked()
{
    //Open page
    LobbyPage = new lobbypage();
    LobbyPage->show();
    //close current page
    this->close();
    //Create slot for new window to come back here
    QObject::connect(LobbyPage, SIGNAL(BackButtonPressed()),this,SLOT(backbuttonpressed()));
}


void multiplayerpage::on_MultiplayerPageBackBtn_clicked()
{
    emit BackButtonPressed();
    //close current page
    this->close();
}

void multiplayerpage::backbuttonpressed(){
    //show shis page
    this->show();
}
