#ifndef NETWORK_H
#define NETWORK_H

#include <QMainWindow>
#include <QtNetwork/QUdpSocket>
#include <QPushButton>
#include <QLabel>

class network : public QMainWindow
{
    Q_OBJECT

public:
    network(QWidget *parent = nullptr);
    ~network();

private:
    QPushButton *btn;
    QLabel *receive_lbl;
    QUdpSocket *rsocket;

private slots:
     void sendpacket();
     void receivepacket();
};
#endif // NETWORK_H
