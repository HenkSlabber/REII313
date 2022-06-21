#ifndef MULTIPLAYERGAME_H
#define MULTIPLAYERGAME_H

#include <QMainWindow>
#include "card.h"
#include <QList>
#include <QLabel>
#include <QString>

class MultiplayerGame : public QMainWindow
{
    Q_OBJECT

public:
    MultiplayerGame(QWidget *parent = nullptr);
    ~MultiplayerGame();
    void initCards();
    void dealCards();
    void hideAll();
    void showDeck();
    void shuffleDeck();
    void showArrangeHands();
    void debug(QString);


private:
    QList<Card*> deck;
    QList<Card*> stack;
    QList<Card*> computerHand;
    QList<Card*> playerHand;
    bool mustPickUp;
    bool computerMustPickUp;
    QLabel *debugLabel;
    QLabel *winLabel;
    QLabel *loseLabel;
    static const bool debugView = false;
    QString Score = 0;

    Colour calc4Colour();

private slots:
    void cardClick(Card*);
    void computerMove();

};
#endif // MULTIPLAYERGAME_H
