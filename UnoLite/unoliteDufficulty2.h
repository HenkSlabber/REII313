#ifndef UNOLITEDUFFICULTY2_H
#define UNOLITEDUFFICULTY2_H

#include <QMainWindow>
#include "card.h"
#include <QList>
#include <QLabel>

class UnoLiteDufficulty2 : public QMainWindow
{
    Q_OBJECT

public:
    UnoLiteDufficulty2(QWidget *parent = nullptr);
    ~UnoLiteDufficulty2();
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

    Colour calc4Colour();

private slots:
    void cardClick(Card*);
    void computerMove();

};
#endif // UNOLITEDUFFICULTY2_H
