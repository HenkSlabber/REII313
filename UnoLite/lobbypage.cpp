#include "lobbypage.h"
#include "ui_lobbypage.h"

lobbypage::lobbypage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lobbypage)
{
    ui->setupUi(this);
}

lobbypage::~lobbypage()
{
    delete ui;
}

void lobbypage::on_LeaveGameBtn_clicked()
{
    emit BackButtonPressed();
    this->close();
}

