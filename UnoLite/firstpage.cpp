#include "firstpage.h"
#include "ui_firstpage.h"

FirstPage::FirstPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstPage)
{
    setWindowState(Qt::WindowMaximized);
    ui->setupUi(this);

}

FirstPage::~FirstPage()
{
    delete ui;
}

void FirstPage::on_SinglePlayerBtn_clicked()
{
    //Open page
    SinglePlayerPage = new singleplayerpage();
    SinglePlayerPage->show();
    //close current page
    this->close();
    //Create slot for new window to come back here
    QObject::connect(SinglePlayerPage, SIGNAL(BackButtonPressed()),this,SLOT(backbuttonpressed()));
}

void FirstPage::on_MultiplayerBtn_clicked()
{
    //Open page
    MultiPlayerPage = new multiplayerpage();
    MultiPlayerPage->show();
    //close current page
    this->close();
    //Create slot for new window to come back here
    QObject::connect(MultiPlayerPage, SIGNAL(BackButtonPressed()),this,SLOT(backbuttonpressed()));
}

void FirstPage::on_HallOfFameBtn_clicked()
{
    //Open page
    HallOfFame = new halloffame();
    HallOfFame->show();
    //close current page
    this->close();
    //Create slot for new window to come back here
    QObject::connect(HallOfFame, SIGNAL(BackButtonPressed()),this,SLOT(backbuttonpressed()));
}

void FirstPage::on_SettingsBtn_clicked()
{
    //Create signal to update settings page
//    emit UpdateCurrentNameLabel();
    //Open page
    Settings = new settings();
    //Settings->updatecurrentnamelabel();
    Settings->show();
    //close current page
    this->close();
    //Create slot for new window to come back here
    QObject::connect(Settings, SIGNAL(BackButtonPressed()),this,SLOT(backbuttonpressed()));

}

void FirstPage::on_QuitBtn_clicked()
{
    //close current page
    this->close();
}
void FirstPage::backbuttonpressed()
{
    //show shis page
    this->show();
}









