/********************************************************************************
** Form generated from reading UI file 'hostgamepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTGAMEPAGE_H
#define UI_HOSTGAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hostgamepage
{
public:
    QPushButton *HostagamepageBackBtn;
    QPushButton *startMultiplayerGameBtn;
    QLabel *label;

    void setupUi(QWidget *hostgamepage)
    {
        if (hostgamepage->objectName().isEmpty())
            hostgamepage->setObjectName(QString::fromUtf8("hostgamepage"));
        hostgamepage->resize(400, 450);
        HostagamepageBackBtn = new QPushButton(hostgamepage);
        HostagamepageBackBtn->setObjectName(QString::fromUtf8("HostagamepageBackBtn"));
        HostagamepageBackBtn->setGeometry(QRect(150, 350, 100, 24));
        startMultiplayerGameBtn = new QPushButton(hostgamepage);
        startMultiplayerGameBtn->setObjectName(QString::fromUtf8("startMultiplayerGameBtn"));
        startMultiplayerGameBtn->setGeometry(QRect(150, 140, 100, 25));
        label = new QLabel(hostgamepage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(160, 230, 63, 20));

        retranslateUi(hostgamepage);

        QMetaObject::connectSlotsByName(hostgamepage);
    } // setupUi

    void retranslateUi(QWidget *hostgamepage)
    {
        hostgamepage->setWindowTitle(QCoreApplication::translate("hostgamepage", "Uno", nullptr));
        HostagamepageBackBtn->setText(QCoreApplication::translate("hostgamepage", "Back", nullptr));
        startMultiplayerGameBtn->setText(QCoreApplication::translate("hostgamepage", "Start Game", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hostgamepage: public Ui_hostgamepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTGAMEPAGE_H
