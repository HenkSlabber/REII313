#include "settings.h"
#include "ui_settings.h"
#include "GlobalVariables.h"

settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{

    ui->setupUi(this);
    ui->CurrentName->setText(PlayerName);
}

settings::~settings()
{
    delete ui;
}

void settings::on_SettingspageBackBtn_clicked()
{
    this->close();
    firstpage3 = new FirstPage();
    firstpage3->show();
}

void settings::on_UpdateNameBtn_clicked()
{
    TextFromPlainTextEdit = ui->UpdateNameTextEdit->toPlainText();
    PlayerName = TextFromPlainTextEdit;
    this->close();
    firstpage3 = new FirstPage();
    firstpage3->show();
}
