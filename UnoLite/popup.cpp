#include "popup.h"
#include "ui_popup.h"
#include <QString>
#include "GlobalVariables.h"
#include "firstpage.h"

Popup::Popup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Popup)
{
    ui->setupUi(this);
}

Popup::~Popup()
{
    delete ui;
}

void Popup::on_SaveBtn_clicked()
{
    //Update Var with player name
    TextFromPlainTextEdit = ui->EnterNameHere->toPlainText();
    PlayerName = TextFromPlainTextEdit;
    //Open page
    firstpage = new FirstPage();
    firstpage->show();
    //close current page
    this->close();
}
