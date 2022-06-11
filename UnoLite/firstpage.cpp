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
    this->close();
    SinglePlayerPage->show();
}

void FirstPage::on_MultiplayerBtn_clicked()
{
    MultiPlayerPage = new multiplayerpage();
    this->close();
    MultiPlayerPage->show();
}

void FirstPage::on_HallOfFameBtn_clicked()
{
    HallOfFame = new halloffame();
    this->close();
    HallOfFame->show();
}

void FirstPage::on_SettingsBtn_clicked()
{
    Settings = new settings();
    this->close();
    Settings->show();
}

void FirstPage::on_QuitBtn_clicked()
{
    FirstPage::close();
}









