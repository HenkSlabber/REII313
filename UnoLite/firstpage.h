#ifndef FIRSTPAGE_H
#define FIRSTPAGE_H

#include <QWidget>
#include "singleplayerpage.h"
#include "multiplayerpage.h"
#include "halloffame.h"
#include "settings.h"

namespace Ui {
class FirstPage;
}

class FirstPage : public QWidget
{
    Q_OBJECT

public:
    explicit FirstPage(QWidget *parent = nullptr);
    ~FirstPage();

public slots:
    void backbuttonpressed();

private slots:
    void on_QuitBtn_clicked();

    void on_SettingsBtn_clicked();

    void on_HallOfFameBtn_clicked();

    void on_MultiplayerBtn_clicked();

    void on_SinglePlayerBtn_clicked();

private:
    Ui::FirstPage *ui;
    singleplayerpage *SinglePlayerPage;
    multiplayerpage *MultiPlayerPage;
    halloffame *HallOfFame;
    settings *Settings;
};

#endif // FIRSTPAGE_H
