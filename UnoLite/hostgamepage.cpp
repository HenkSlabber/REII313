#include "hostgamepage.h"
#include "ui_hostgamepage.h"
#include "GlobalVariables.h"
#include "MultiplayerGame.h"

hostgamepage::hostgamepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hostgamepage)
{
//    setWindowState(Qt::WindowMaximized);
    ui->setupUi(this);

//    QTimer *t = new QTimer(this);
//    connect(t, SIGNAL(timeout()), this, SLOT(readyRead()));
//    t->start(20);
}

hostgamepage::~hostgamepage()
{
    delete ui;
}

void hostgamepage::on_HostagamepageBackBtn_clicked()
{
    //Use slot to get back to previous page
    emit BackButtonPressed();
    //close current page
    this->close();
}


//void hostgamepage::on_startMultiplayerGameBtn_clicked()
//{
//    ui->startMultiplayerGameBtn->hide();
//    //ui->label->setText("Connecting");
//    QTcpServer *TCPServer = new QTcpServer(this);

//    bool success = TCPServer->listen(QHostAddress::Any, quint16(5002));
//    if(!success){
//        ui->label->setText("Server failed");
//    }else{
//        ui->label->setText("Server Started");
//    }

//    connect(this, SIGNAL(newConnection()), this, SLOT(NewConnection(int socketfd)));
//}

//void hostgamepage::NewConnection(int socketfd)
//{
//    QTcpSocket *client = new QTcpSocket();
//    client->setSocketDescriptor(socketfd);
//    clients.insert(client);

//    connect(client, SIGNAL(readyRead()), this,SLOT(readyRead()));
//    connect(client, SIGNAL(disconnected()), this,SLOT(disconnected()));

//    MultiplayerGame = new class MultiplayerGame;
//    MultiplayerGame->setWindowState(Qt::WindowMaximized);
//    MultiplayerGame->show();

//    this->close();

//}

//void hostgamepage::readyRead()
//{
//    QTcpSocket *client = (QTcpSocket*)sender();
//    while (client->canReadLine())
//    {
//        QString line = QString::fromUtf8(client->readLine()).trimmed();
//    }

//}

//void hostgamepage::disconnected()
//{
//    QTcpSocket *client = (QTcpSocket*)sender();
//    clients.remove(client);
//}


