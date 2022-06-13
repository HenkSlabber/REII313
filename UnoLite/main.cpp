#include "popup.h"
#include "GlobalVariables.h"
#include "firstpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //check to see if there is a palyer name
    QApplication a(argc, argv);
    Popup popup;
    FirstPage firstpage;
    if(PlayerName == nullptr){
        popup.show();
    }else{
        firstpage.show();
    }
    return a.exec();
}
