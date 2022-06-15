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
