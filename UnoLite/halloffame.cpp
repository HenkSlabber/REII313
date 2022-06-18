#include "halloffame.h"
#include "ui_halloffame.h"
#include <QFile>
#include <QTextStream>
#include "GlobalVariables.h"

halloffame::halloffame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::halloffame)
{
    ui->setupUi(this);
    if(QFile::exists(HallOfFameFile))
    {
        QFile file(HallOfFameFile);
        file.open(QIODevice::ReadWrite | QIODevice::Text);
        HallOfFameData=file.readAll();

    }else{
        QFile file(HallOfFameFile);
        if (file.open(QIODevice::ReadWrite)) {
            QTextStream stream(&file);
            HallOfFameData = PlayerName + " ," + CurrentScore + "\n";
            stream << HallOfFameData << Qt::endl;
        }
    }

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
