#ifndef HOSTGAMEPAGE_H
#define HOSTGAMEPAGE_H

#include <QWidget>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include "MultiplayerGame.h"
#include <QTimer>

namespace Ui {
class hostgamepage;
}

class hostgamepage : public QWidget
{
    Q_OBJECT

public:
    explicit hostgamepage(QWidget *parent = nullptr);
    ~hostgamepage();

signals:
    void BackButtonPressed();

private slots:
    void on_HostagamepageBackBtn_clicked();

    void on_startMultiplayerGameBtn_clicked();

    void NewConnection(int socketfd);

    void readyRead();

    void disconnected();

private:
    Ui::hostgamepage *ui;
    QSet<QTcpSocket*> clients;
    MultiplayerGame* MultiplayerGame;

};

#endif // HOSTGAMEPAGE_H
