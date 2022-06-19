#include "multiplayerpage.h"
#include "ui_multiplayerpage.h"
#include <QMessageBox>


multiplayerpage::multiplayerpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::multiplayerpage)
{
    setWindowState(Qt::WindowMaximized);
    clientSocket = new QTcpSocket(this);
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

    clientSocket->connectToHost(ui->IPAddress->toPlainText(),quint16(5002));
    connect(clientSocket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(displayError(QAbstractSocket::SocketError)));

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

void multiplayerpage::displayError( QAbstractSocket::SocketError socketError ){
    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        QMessageBox::information(this, tr("Uno Client"),
                                 tr("The host was not found. Please check the host name and port settings"));
        break;
    case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::information(this, tr("Uno Client"),
                                 tr("The connection was refused by the peer."
                                    "Make sure the Uno server is running,"
                                    "and check that the host name and port"
                                    "setting are connected."));
        break;
    default:
        QMessageBox::information(this,tr("Uno Client"),
                                 tr("The following error occurred: %1.")
                                 .arg(clientSocket->errorString()));
        break;
    }

}
