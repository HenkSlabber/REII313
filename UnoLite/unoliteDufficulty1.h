#ifndef UNOLITEDUFFICULTY1_H
#define UNOLITEDUFFICULTY1_H

#include <QMainWindow>
#include "card.h"
#include <QList>
#include <QLabel>
#include <QPushButton>

class UnoLiteDufficulty1 : public QMainWindow
{
    Q_OBJECT

public:
    UnoLiteDufficulty1(QWidget *parent = nullptr);
    ~UnoLiteDufficulty1();
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
//    QPushButton *b1 = new QPushButton(this);
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
//    void b1f();

};

#endif // UNOLITEDUFFICULTY1_H
