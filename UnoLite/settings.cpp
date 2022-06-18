#include "settings.h"
#include "ui_settings.h"
#include "GlobalVariables.h"
#include <QFile>

settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{
    this->setFixedSize(400,450);

    ui->setupUi(this);
    ui->CurrentName->setText(PlayerName);
    ui->setupUi(this);

}

settings::~settings()
{
    delete ui;
}

void settings::on_SettingspageBackBtn_clicked()
{
    //Use slot to get back to previous page
    emit BackButtonPressed();
    //close current page
    this->close();
}

void settings::on_UpdateNameBtn_clicked()
{
    //update Var with new player name
    TextFromPlainTextEdit = ui->UpdateNameTextEdit->toPlainText();
    PlayerName = TextFromPlainTextEdit;
    //Update filename in PlayerNameFile
    QFile file(PlayerNameFile);
    if (file.open(QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << PlayerName << Qt::endl;
    }
    //Use slot to get back to previous page
    emit BackButtonPressed();
    //close current page
    this->close();
}
