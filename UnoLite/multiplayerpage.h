#ifndef MULTIPLAYERPAGE_H
#define MULTIPLAYERPAGE_H

#include <QWidget>
#include "hostgamepage.h"
#include "lobbypage.h"
#include <QtNetwork/QTcpSocket>


namespace Ui {
class multiplayerpage;
}

class multiplayerpage : public QWidget
{
    Q_OBJECT

public:
    explicit multiplayerpage(QWidget *parent = nullptr);
    ~multiplayerpage();

signals:
    void BackButtonPressed();

public slots:
    void backbuttonpressed();

private slots:
    void on_HostBtn_clicked();

    void on_ConnectBtn_clicked();

    void on_MultiplayerPageBackBtn_clicked();

    void displayError( QAbstractSocket::SocketError socketError );

private:
    Ui::multiplayerpage *ui;
    hostgamepage *HostGamePage;
    lobbypage *LobbyPage;
    QTcpSocket *clientSocket;

};

#endif // MULTIPLAYERPAGE_H
