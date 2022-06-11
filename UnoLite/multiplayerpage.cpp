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
    this->close();
    HostGamePage = new hostgamepage();
    HostGamePage->show();
}


void multiplayerpage::on_ConnectBtn_clicked()
{
    this->close();
    LobbyPage = new lobbypage();
    LobbyPage->show();
}


void multiplayerpage::on_MultiplayerPageBackBtn_clicked()
{
    this->close();
    firstpage1 = new FirstPage();
    firstpage1->show();
}
