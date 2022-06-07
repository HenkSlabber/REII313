#ifndef MULTIPLAYERPAGE_H
#define MULTIPLAYERPAGE_H

#include <QWidget>
#include "hostgamepage.h"
#include "lobbypage.h"


namespace Ui {
class multiplayerpage;
}

class multiplayerpage : public QWidget
{
    Q_OBJECT

public:
    explicit multiplayerpage(QWidget *parent = nullptr);
    ~multiplayerpage();

private slots:
    void on_HostBtn_clicked();

    void on_ConnectBtn_clicked();

private:
    Ui::multiplayerpage *ui;
    hostgamepage *HostGamePage;
    lobbypage *LobbyPage;
};

#endif // MULTIPLAYERPAGE_H
