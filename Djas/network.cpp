#include "network.h"

network::network(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(800,800);

    btn = new QPushButton(this);
    btn->setText("Send");
    btn->show();
    connect(btn, SIGNAL(clicked()), this, SLOT(sendpacket()));


    receive_lbl = new QLabel(this);
    receive_lbl->move(50,50);
    receive_lbl->setFixedSize(200,600);
    receive_lbl->setText(" ");
    receive_lbl->show();

    rsocket = new QUdpSocket;
    rsocket->bind(QHostAddress::Any, 7755); //user 1
    //rsocket->bind(QHostAddress::Any, 777); //user 2 connect to this socket

    connect(rsocket, SIGNAL(readyRead()), this, SLOT(receivepacket()));
}

network::~network()
{
}

void  network::receivepacket()
{
    while(rsocket->hasPendingDatagrams())
    {
        QByteArray data;
        data.resize(rsocket->pendingDatagramSize());
        rsocket->readDatagram(data.data(), data.size());

        receive_lbl->setText(data + "\n" + receive_lbl->text());

    }
}

void network::sendpacket()
{
    QByteArray data = "hello";

    rsocket->writeDatagram(data, QHostAddress::Broadcast, 777); //send to socket of user 2
    //rsocket->writeDatagram(data, QHostAddress::Broadcast, 7755); //send to socket of user 1


}
