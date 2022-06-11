#include "firstpage.h"
#include "ui_firstpage.h"

FirstPage::FirstPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstPage)
{
    ui->setupUi(this);
}

FirstPage::~FirstPage()
{
    delete ui;
}

void FirstPage::on_SinglePlayerBtn_clicked()
{
    SinglePlayerPage = new singleplayerpage();
    SinglePlayerPage->show();
    this->close();
}

void FirstPage::on_MultiplayerBtn_clicked()
{
    MultiPlayerPage = new multiplayerpage();
    MultiPlayerPage->show();
    this->close();
}

void FirstPage::on_HallOfFameBtn_clicked()
{
    HallOfFame = new halloffame();
    HallOfFame->show();
    this->close();
}

void FirstPage::on_SettingsBtn_clicked()
{
    Settings = new settings();
    Settings->show();
    this->close();
}

void FirstPage::on_QuitBtn_clicked()
{
    this->close();
}









