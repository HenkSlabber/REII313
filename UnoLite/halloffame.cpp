#include "halloffame.h"
#include "ui_halloffame.h"

halloffame::halloffame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::halloffame)
{
    ui->setupUi(this);
}

halloffame::~halloffame()
{
    delete ui;
}

void halloffame::on_HallOfFameBackBtn_clicked()
{
    //Use slot to get back to previous page
    emit BackButtonPressed();
    //close current page
    this->close();
}
