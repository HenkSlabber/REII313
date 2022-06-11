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
    firstpage2 = new FirstPage();
    firstpage2->show();
}
