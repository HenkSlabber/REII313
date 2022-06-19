/********************************************************************************
** Form generated from reading UI file 'multiplayerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLAYERPAGE_H
#define UI_MULTIPLAYERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_multiplayerpage
{
public:
    QPushButton *HostBtn;
    QPushButton *ConnectBtn;
    QPushButton *MultiplayerPageBackBtn;

    void setupUi(QWidget *multiplayerpage)
    {
        if (multiplayerpage->objectName().isEmpty())
            multiplayerpage->setObjectName(QString::fromUtf8("multiplayerpage"));
        multiplayerpage->resize(400, 450);
        HostBtn = new QPushButton(multiplayerpage);
        HostBtn->setObjectName(QString::fromUtf8("HostBtn"));
        HostBtn->setGeometry(QRect(135, 70, 130, 25));
        ConnectBtn = new QPushButton(multiplayerpage);
        ConnectBtn->setObjectName(QString::fromUtf8("ConnectBtn"));
        ConnectBtn->setGeometry(QRect(135, 120, 130, 25));
        MultiplayerPageBackBtn = new QPushButton(multiplayerpage);
        MultiplayerPageBackBtn->setObjectName(QString::fromUtf8("MultiplayerPageBackBtn"));
        MultiplayerPageBackBtn->setGeometry(QRect(135, 300, 130, 25));

        retranslateUi(multiplayerpage);

        QMetaObject::connectSlotsByName(multiplayerpage);
    } // setupUi

    void retranslateUi(QWidget *multiplayerpage)
    {
        multiplayerpage->setWindowTitle(QCoreApplication::translate("multiplayerpage", "Uno", nullptr));
        HostBtn->setText(QCoreApplication::translate("multiplayerpage", "Host a game", nullptr));
        ConnectBtn->setText(QCoreApplication::translate("multiplayerpage", "Connect to a game", nullptr));
        MultiplayerPageBackBtn->setText(QCoreApplication::translate("multiplayerpage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class multiplayerpage: public Ui_multiplayerpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLAYERPAGE_H
