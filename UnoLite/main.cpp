#include "popup.h"
#include "GlobalVariables.h"
#include "firstpage.h"
#include <QApplication>
#include <QFile>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    //check to see if there is a palyer name
    QApplication a(argc, argv);
    Popup popup;
    FirstPage firstpage;
    //Check if Player name file exist and update Var
    if(QFile::exists(PlayerNameFile))
    {
        QFile file(PlayerNameFile);
        file.open(QIODevice::ReadWrite | QIODevice::Text);
        PlayerName= file.readAll();
        if(QFile::exists(ScoreFile))
        {
            QFile file(ScoreFile);
            file.open(QIODevice::ReadWrite | QIODevice::Text);
            CurrentScore= file.readAll();
        }else{
            QFile file(ScoreFile);
            if (file.open(QIODevice::ReadWrite)) {
                QTextStream stream(&file);
                CurrentScore = "0";
                stream << CurrentScore << Qt::endl;
            }
        }
    }else{
        popup.show();
    }
    if(PlayerName == nullptr){
     popup.show();
    }else{
        firstpage.show();
    }
    return a.exec();
}
