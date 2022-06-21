#include "halloffame.h"
#include "ui_halloffame.h"
#include <QFile>
#include <QTextStream>
#include "GlobalVariables.h"

halloffame::halloffame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::halloffame)
{
    listWdiget->clear();

    QFile* filename = new QFile(":/PlayerName.txt");
    QFile* fileScore = new QFile(":/ScoreFile.txt");

    if(!filename->open(QIODevice::ReadOnly))
    {
        if(!fileScore->open(QIODevice::ReadOnly))
        {
            return;
        }

    }
        QString name = filename->readLine();
        Score = fileScore->readLine();
        listWdiget->addItem(name+" " +Score);

    filename->close();
    fileScore->close();

    //Skuif code...
//    setWindowState(Qt::WindowMaximized);
//    ui->setupUi(this);
//    if(QFile::exists(HallOfFameFile))
//    {
//        QFile file(HallOfFameFile);
//        file.open(QIODevice::ReadWrite | QIODevice::Text);
//        HallOfFameData=file.readAll();

//    }else{
//        QFile file(HallOfFameFile);
//        if (file.open(QIODevice::ReadWrite)) {
//            QTextStream stream(&file);
//            HallOfFameData = PlayerName + " ," + CurrentScore + "\n";
//            stream << HallOfFameData << Qt::endl;
//        }
//    }

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

//void halloffame::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
//{

//}

