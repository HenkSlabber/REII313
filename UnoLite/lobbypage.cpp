#include "lobbypage.h"
#include "ui_lobbypage.h"

lobbypage::lobbypage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lobbypage)
{
    this->setFixedSize(400,450);
    ui->setupUi(this);
}

lobbypage::~lobbypage()
{
    delete ui;
}

void lobbypage::on_LeaveGameBtn_clicked()
{
    //Use slot to get back to previous page
    emit BackButtonPressed();
    //close current page
    this->close();
}

