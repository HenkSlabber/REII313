#include "halloffamepage.h"
#include "ui_halloffamepage.h"

HallOfFamePage::HallOfFamePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HallOfFamePage)
{
    ui->setupUi(this);
}

HallOfFamePage::~HallOfFamePage()
{
    delete ui;
}
