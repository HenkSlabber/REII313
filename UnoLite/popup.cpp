#include "popup.h"
#include "ui_popup.h"
#include <QString>
#include "GlobalVariables.h"

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
    TextFromPlainTextEdit = ui->EnterNameHere->toPlainText();
    PlayerName = TextFromPlainTextEdit;
    this->close();
    firstpage = new FirstPage();
    firstpage->show();
}
