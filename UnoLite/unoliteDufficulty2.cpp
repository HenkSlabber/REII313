#include "unoliteDufficulty2.h"
#include <QRandomGenerator>
#include <QTimer>

UnoLiteDufficulty2::UnoLiteDufficulty2(QWidget *parent)
    : QMainWindow(parent)
{
    debugLabel = new QLabel(this);
    debugLabel->setGeometry(10, 550, 400, 200);
    debugLabel->setAlignment(Qt::AlignTop);
    debugLabel->show();

    winLabel = new QLabel(this);
    winLabel->setGeometry(0, 0, width(), height());
    winLabel->setStyleSheet("font-size: 64px");
    winLabel->setAlignment(Qt::AlignCenter);
    winLabel->setText("Player Wins");
    winLabel->hide();

    loseLabel = new QLabel(this);
    loseLabel->setGeometry(0, 0, width(), height());
    loseLabel->setStyleSheet("font-size: 64px");
    loseLabel->setAlignment(Qt::AlignCenter);
    loseLabel->setText("Computer Wins");
    loseLabel->hide();

    mustPickUp = false;
    computerMustPickUp = false;
    initCards();
    shuffleDeck();
    dealCards();
    //showDeck();
    showArrangeHands();
}

UnoLiteDufficulty2::~UnoLiteDufficulty2()
{
}

void UnoLiteDufficulty2::initCards()
{
    Card *c;
    for (int i = 0; i < 10; ++i)
    {
        c = new Card(this);
        deck.append(c);
        c->hide();
        c->setup(QString::number(i), Red);
    }
    c = new Card(this);
    deck.append(c);
    c->hide();
    c->setup("+2", Red);
    for (int i = 0; i < 10; ++i)
    {
        c = new Card(this);
        deck.append(c);
        c->hide();
        c->setup(QString::number(i), Green);
    }
    c = new Card(this);
    deck.append(c);
    c->hide();
    c->setup("+2", Green);
    for (int i = 0; i < 10; ++i)
    {
        c = new Card(this);
        deck.append(c);
        c->hide();
        c->setup(QString::number(i), Yellow);
    }
    c = new Card(this);
    deck.append(c);
    c->hide();
    c->setup("+2", Yellow);
    for (int i = 0; i < 10; ++i)
    {
        c = new Card(this);
        deck.append(c);
        c->hide();
        c->setup(QString::number(i), Blue);
    }
    c = new Card(this);
    deck.append(c);
    c->hide();
    c->setup("+2", Blue);

    // +4's
    c = new Card(this);
    deck.append(c);
    c->hide();
    c->setup("+4", None);
    c = new Card(this);
    deck.append(c);
    c->hide();
    c->setup("+4", None);
}

void UnoLiteDufficulty2::dealCards()
{
    while (stack.length() > 0)
        deck.append(stack.takeFirst());

    while (computerHand.length() > 0)
        deck.append(computerHand.takeFirst());

    while (playerHand.length() > 0)
        deck.append(playerHand.takeFirst());

    shuffleDeck();

    for (int i = 0; i < 7; ++i)
    {
        playerHand.append(deck.takeFirst());
        computerHand.append(deck.takeFirst());
    }
    stack.prepend(deck.takeFirst());
    while ((stack.first()->cardName() == "+2") || (stack.first()->cardName() == "+4"))
        stack.prepend(deck.takeFirst());
}

void UnoLiteDufficulty2::hideAll()
{
    QListIterator<Card*> deckIterator(deck);
    while (deckIterator.hasNext())
    {
        Card *c = deckIterator.next();
        c->hide();
    }
    QListIterator<Card*> stackIterator(stack);
    while (stackIterator.hasNext())
    {
        Card *c = stackIterator.next();
        c->hide();
    }
    QListIterator<Card*> computerHandIterator(computerHand);
    while (computerHandIterator.hasNext())
    {
        Card *c = computerHandIterator.next();
        c->hide();
    }
    QListIterator<Card*> playerHandIterator(playerHand);
    while (playerHandIterator.hasNext())
    {
        Card *c = playerHandIterator.next();
        c->hide();
    }
}

void UnoLiteDufficulty2::showDeck()
{
    int x = 0;
    int y = 0;
    QListIterator<Card*> deckIterator(deck);
    while (deckIterator.hasNext())
    {
        Card *c = deckIterator.next();
        c->move(70*x, 102*y);
        c->show();
        ++x;
        if (x == 11)
        {
            ++y;
            x = 0;
        }
    }
}

void UnoLiteDufficulty2::shuffleDeck()
{
    QList<Card*> newDeck;
    while(deck.length() > 0)
        newDeck.append(deck.takeAt(QRandomGenerator::global()->bounded(deck.length())));

    deck = newDeck;
}

void UnoLiteDufficulty2::showArrangeHands()
{
    hideAll();
    Card *c;
    int i = 0;

    QListIterator<Card*> computerHandIterator(computerHand);
    while (computerHandIterator.hasNext())
    {
        c = computerHandIterator.next();
        c->move(i*70+10, 10);
        ++i;
        if (debugView)
            c->showFront();
        else
            c->showBack();
    }

    i = 0;
    QListIterator<Card*> playerHandIterator(playerHand);
    while (playerHandIterator.hasNext())
    {
        c = playerHandIterator.next();
        c->move(i*70+10, 400);
        ++i;
        c->showFront();
        if (c->cardName() == "+4")
            c->showCorners();
    }

    if (stack.length() > 0)
    {
        c = stack.first();
        c->move(100, 200);
        c->showFront();
    }

    if (deck.length() > 0)
    {
        c = deck.first();
        c->move(300, 200);
        if (debugView)
            c->showFront();
        else
            c->showBack();
    }
}

void UnoLiteDufficulty2::cardClick(Card *c)
{
    bool validMove = false;
    if (c == deck.first())
    {
        //debug("Clicked on deck: " + c->cardColour() + " " + c->cardName());
        int pickupCards = 1;
        if (mustPickUp)
        {
            if (stack.first()->cardName() == "+2")
            {
                pickupCards = 2;
                if ((stack.length() >= 2) && (stack.at(1)->cardName() == "+2"))
                    pickupCards = 4;
            }
            else if (stack.first()->cardName() == "+4")
            {
                pickupCards = 4;
                if ((stack.length() >= 2) && (stack.at(1)->cardName() == "+4"))
                    pickupCards = 8;
            }
        }
        if (deck.length() >= pickupCards)
        {
            while (pickupCards > 0)
            {
                playerHand.append(deck.takeFirst());
                if (playerHand.last()->cardName() == "+4")
                    playerHand.last()->setup("+4", None);

                debug("Player picks up: " + playerHand.last()->cardColour() + " " + playerHand.last()->cardName());
                --pickupCards;
            }
            mustPickUp = false;
            validMove = true;
        }
    }
    else if (playerHand.contains(c))
    {
        //debug("Clicked on player card: " + c->cardColour() + " " + c->cardName());
        if (mustPickUp && (stack.first()->cardName() == "+4") && (c->cardName() == "+4"))
        {
            stack.prepend(c);
            playerHand.removeOne(c);
            debug("Player played 1: " + c->cardColour() + " " + c->cardName());
            validMove = true;
            mustPickUp = false;
            computerMustPickUp = true;
        }
        else if (mustPickUp && (stack.first()->cardName() == "+2") && (c->cardName() == "+2"))
        {
            stack.prepend(c);
            playerHand.removeOne(c);
            debug("Player played 2: " + c->cardColour() + " " + c->cardName());
            validMove = true;
            mustPickUp = false;
            computerMustPickUp = true;
        }
        else if ((!mustPickUp) && (stack.first()->cardColour() == c->cardColour()))
        {
            stack.prepend(c);
            playerHand.removeOne(c);
            debug("Player played 3: " + c->cardColour() + " " + c->cardName());
            validMove = true;
            if (c->cardName() == "+2")
                computerMustPickUp = true;
        }
        else if ((!mustPickUp) && (stack.first()->cardName() == c->cardName()))
        {
            stack.prepend(c);
            playerHand.removeOne(c);
            debug("Player played 4: " + c->cardColour() + " " + c->cardName());
            validMove = true;
            if (c->cardName() == "+2")
                computerMustPickUp = true;
        }
        else if (c->cardName() == "+4")
        {
            stack.prepend(c);
            playerHand.removeOne(c);

            debug("Player played 5: " + c->cardColour() + " " + c->cardName());
            validMove = true;
            computerMustPickUp = true;
        }
    }

    if (validMove)
    {
        showArrangeHands();
        if (playerHand.length() == 0)
        {
            winLabel->raise();
            winLabel->show();
        }
        else if (computerHand.length() == 0)
        {
            loseLabel->raise();
            loseLabel->show();
        }
        else
            QTimer::singleShot(2000, this, SLOT(computerMove()));
    }
}

void UnoLiteDufficulty2::computerMove()
{
    if (stack.length() > 22)
    {
        for (int i = 0; i < 20; ++i)
            deck.append(stack.takeLast());
        shuffleDeck();
    }

    QListIterator<Card*> computerHandIterator(computerHand);
    bool moved = false;

    if (computerMustPickUp)
    {
        int pickupCards = 1;
        if (stack.first()->cardName() == "+2")
        {
            pickupCards = 2;
            if ((stack.length() >= 2) && (stack.at(1)->cardName() == "+2"))
                pickupCards = 4;
        }
        else if (stack.first()->cardName() == "+4")
        {
            pickupCards = 4;
            if ((stack.length() >= 2) && (stack.at(1)->cardName() == "+4"))
                pickupCards = 8;
        }

        if (deck.length() >= pickupCards)
        {
            while (pickupCards > 0)
            {
                computerHand.append(deck.takeFirst());
                debug("Computer picks up 1: " + computerHand.last()->cardColour() + " " + computerHand.last()->cardName());
                --pickupCards;
                if (computerHand.last()->cardName() == "+4")
                    computerHand.last()->setup("+4", None);
            }
            computerMustPickUp = false;
        }
        goto finish;
    }

    if (computerHand.length() < 3)
    {
        computerHandIterator.toFront();
        while (computerHandIterator.hasNext())
        {
            Card *c = computerHandIterator.next();
            if (c->cardName() == "+4")
            {
                stack.prepend(c);
                computerHand.removeOne(c);
                stack.first()->setup("+4", calc4Colour());
                debug("Computer played +4: " + stack.first()->cardColour());
                moved = true;
                goto end;
            }
        }
    }
    computerHandIterator.toFront();
    while (computerHandIterator.hasNext())
    {
        Card *c = computerHandIterator.next();
        if (c->cardName() == stack.first()->cardName())
        {
            stack.prepend(c);
            computerHand.removeOne(c);
            debug("Computer played 1: " + c->cardColour() + " " + c->cardName());
            moved = true;
            goto end;
        }
    }
    computerHandIterator.toFront();
    while (computerHandIterator.hasNext())
    {
        Card *c = computerHandIterator.next();
        if (c->cardColour() == stack.first()->cardColour())
        {
            stack.prepend(c);
            computerHand.removeOne(c);
            debug("Computer played 2: " + c->cardColour() + " " + c->cardName());
            moved = true;
            goto end;
        }
    }

    end:
    if (!moved)
    {
        computerHand.append(deck.takeFirst());
        if (computerHand.last()->cardName() == "+4")
            computerHand.last()->setup("+4", None);
        debug("Computer picks up 2: " + computerHand.last()->cardColour() + " " + computerHand.last()->cardName());
    }
    else if ((stack.first()->cardName() == "+2") || (stack.first()->cardName() == "+4"))
        mustPickUp = true;

    finish:
    showArrangeHands();
    if (playerHand.length() == 0)
    {
        winLabel->raise();
        winLabel->show();
    }
    else if (computerHand.length() == 0)
    {
        loseLabel->raise();
        loseLabel->show();
    }
}

Colour UnoLiteDufficulty2::calc4Colour()
{
    int nR, nG, nY, nB;
    nR = nG = nY = nB = 0;
    QListIterator<Card*> computerHandIterator(computerHand);
    while (computerHandIterator.hasNext())
    {
        Card *c = computerHandIterator.next();
        if (c->cardColour() == "Red")
            ++nR;
        else if (c->cardColour() == "Green")
            ++nG;
        else if (c->cardColour() == "Yellow")
            ++nY;
        else if (c->cardColour() == "Blue")
            ++nB;
    }
    Colour colour4 = None;
    if ((nR >= nG) && (nR >= nY) && (nR >= nB))
        colour4 = Red;
    else if ((nG >= nR) && (nG >= nY) && (nG >= nB))
        colour4 = Green;
    else if ((nY >= nR) && (nY >= nG) && (nY >= nB))
        colour4 = Yellow;
    else
        colour4 = Blue;
    return colour4;
}

void UnoLiteDufficulty2::debug(QString s)
{
    debugLabel->setText(s + "\n" + debugLabel->text());
}
