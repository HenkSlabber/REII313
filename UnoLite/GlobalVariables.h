#ifndef GLOBALVARIABLES_H
#define GLOBALVARIABLES_H
#include <QString>
#include <QtNetwork/QUdpSocket>

//Var to save player name
static QString PlayerName = nullptr;
static QString PlayerNameFile = "PlayerNameFile.txt";
static QString HallOfFameFile = "HallOfFameFile.txt";
static QString HallOfFameData = nullptr;
static QString ScoreFile = "ScoreFile.txt";
static QString CurrentScore = nullptr;

QUdpSocket *rsocket;


#endif // GLOBALVARIABLES_H
