/********************************************************************************
** Form generated from reading UI file 'hostgamepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTGAMEPAGE_H
#define UI_HOSTGAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hostgamepage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *ThisisyourIPAddress;
    QLabel *HostIPAddress;
    QLabel *Thisisyourgameid;
    QLabel *GameID;
    QColumnView *ConnectedPlayersTable;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *HostagamepageBackBtn;

    void setupUi(QWidget *hostgamepage)
    {
        if (hostgamepage->objectName().isEmpty())
            hostgamepage->setObjectName(QString::fromUtf8("hostgamepage"));
        hostgamepage->resize(400, 300);
        verticalLayoutWidget = new QWidget(hostgamepage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(120, 20, 141, 87));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ThisisyourIPAddress = new QLabel(verticalLayoutWidget);
        ThisisyourIPAddress->setObjectName(QString::fromUtf8("ThisisyourIPAddress"));

        verticalLayout->addWidget(ThisisyourIPAddress);

        HostIPAddress = new QLabel(verticalLayoutWidget);
        HostIPAddress->setObjectName(QString::fromUtf8("HostIPAddress"));

        verticalLayout->addWidget(HostIPAddress);

        Thisisyourgameid = new QLabel(verticalLayoutWidget);
        Thisisyourgameid->setObjectName(QString::fromUtf8("Thisisyourgameid"));

        verticalLayout->addWidget(Thisisyourgameid);

        GameID = new QLabel(verticalLayoutWidget);
        GameID->setObjectName(QString::fromUtf8("GameID"));

        verticalLayout->addWidget(GameID);

        ConnectedPlayersTable = new QColumnView(hostgamepage);
        ConnectedPlayersTable->setObjectName(QString::fromUtf8("ConnectedPlayersTable"));
        ConnectedPlayersTable->setGeometry(QRect(30, 110, 311, 111));
        gridLayoutWidget = new QWidget(hostgamepage);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 230, 121, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        HostagamepageBackBtn = new QPushButton(gridLayoutWidget);
        HostagamepageBackBtn->setObjectName(QString::fromUtf8("HostagamepageBackBtn"));

        gridLayout->addWidget(HostagamepageBackBtn, 0, 0, 1, 1);


        retranslateUi(hostgamepage);

        QMetaObject::connectSlotsByName(hostgamepage);
    } // setupUi

    void retranslateUi(QWidget *hostgamepage)
    {
        hostgamepage->setWindowTitle(QApplication::translate("hostgamepage", "Form", nullptr));
        ThisisyourIPAddress->setText(QApplication::translate("hostgamepage", "This is your IP address: ", nullptr));
        HostIPAddress->setText(QString());
        Thisisyourgameid->setText(QApplication::translate("hostgamepage", "This is your Game ID:  ", nullptr));
        GameID->setText(QString());
        HostagamepageBackBtn->setText(QApplication::translate("hostgamepage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hostgamepage: public Ui_hostgamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTGAMEPAGE_H
