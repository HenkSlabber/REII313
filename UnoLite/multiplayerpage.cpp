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

void multiplayerpage::on_HostBtn_clicked()
{
    HostGamePage = new hostgamepage();
    HostGamePage->show();
    this->close();
}


void multiplayerpage::on_ConnectBtn_clicked()
{
    LobbyPage = new lobbypage();
    LobbyPage->show();
    this->close();
}


void multiplayerpage::on_MultiplayerPageBackBtn_clicked()
{
    firstpage1 = new FirstPage();
    firstpage1->show();
    this->close();
}
