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
    this->close();
    SinglePlayerPage = new singleplayerpage();
    SinglePlayerPage->show();
}

void FirstPage::on_MultiplayerBtn_clicked()
{
    this->close();
    MultiPlayerPage = new multiplayerpage();
    MultiPlayerPage->show();
}

void FirstPage::on_HallOfFameBtn_clicked()
{
    this->close();
    HallOfFame = new halloffame();
    HallOfFame->show();
}

void FirstPage::on_SettingsBtn_clicked()
{
    this->close();
    Settings = new settings();
    Settings->show();
}

void FirstPage::on_QuitBtn_clicked()
{
    FirstPage::close();
}









