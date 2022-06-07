#include "multiplayerpage.h"
#include "ui_multiplayerpage.h"
#include "hostgamepage.h"
#include "lobbypage.h"

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
}


void multiplayerpage::on_ConnectBtn_clicked()
{
    LobbyPage = new lobbypage();
    LobbyPage->show();
}

