#include "network.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    network w;
    w.show();
    return a.exec();
}
