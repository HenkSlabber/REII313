#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "settings.h"
#include "halloffame.h"
#include "multiplayerpage.h"
#include "singleplayerpage.h"
#include "popup.h"
#include <QString>



namespace Ui {
class MainWindow;
}


class MainWindow : public QWidget
{

    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_QuitBtn_clicked();

    void on_SettingsBtn_clicked();

    void on_HallOfFameBtn_clicked();

    void on_MultiplayerBtn_clicked();

    void on_SinglePlayerBtn_clicked();

private:
    Ui::MainWindow *ui;
    settings *Settings;
    halloffame *HallOfFame;
    multiplayerpage *MultiPlayerPage;
    singleplayerpage *SinglePlayerPage;
};

#endif // MAINWINDOW_H
