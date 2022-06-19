#ifndef GAMESERVER_H
#define GAMESERVER_H

#include <QtNetwork/QTcpServer>

class MainWindow;

class gameserver : public QTcpServer
{
public:

    Q_OBJECT

        public:
            gameserver(MainWindow* pHelloServer,QObject *parent=0);
            MainWindow* m_pHelloWindow;

        private slots:
            void readyRead();
            void disconnected();

        protected:
            void incomingConnection(int socketfd);

        private:
            QSet<QTcpSocket*> clients;


};

#endif // GAMESERVER_H
