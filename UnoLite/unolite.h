#ifndef UNOLITE_H
#define UNOLITE_H

#include <QMainWindow>
#include "card.h"
#include <QList>
#include <QLabel>

class UnoLite : public QMainWindow
{
    Q_OBJECT

public:
    UnoLite(QWidget *parent = nullptr);
    ~UnoLite();
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
#endif // UNOLITE_H
