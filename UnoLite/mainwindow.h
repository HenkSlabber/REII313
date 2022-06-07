#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "singleplayerpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SinglePlayerBtn_clicked();

    void on_MultiplayerBtn_clicked();

    void on_HallOfFameBtn_clicked();

    void on_SettingsBtn_clicked();

    void on_ExitBtn_clicked();

private:
    Ui::MainWindow *ui;
    singleplayerpage *SinglePlayerPage;
};
#endif // MAINWINDOW_H
