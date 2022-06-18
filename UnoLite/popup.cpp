#include "popup.h"
#include "ui_popup.h"
#include <QString>
#include "GlobalVariables.h"
#include "firstpage.h"
#include <QFile>
#include <QTextStream>

Popup::Popup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Popup)
{
    this->setFixedSize(400,450);
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
    //Create a text file to store player name
    QFile file(PlayerNameFile);
    if (file.open(QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << PlayerName << Qt::endl;
    }
    //Create Text file to store Hall of fame data
    //Open page
    firstpage = new FirstPage();
    firstpage->show();
    //close current page
    this->close();
}
