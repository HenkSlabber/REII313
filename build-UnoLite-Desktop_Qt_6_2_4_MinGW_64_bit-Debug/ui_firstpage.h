/********************************************************************************
** Form generated from reading UI file 'firstpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTPAGE_H
#define UI_FIRSTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstPage
{
public:
    QPushButton *SinglePlayerBtn;
    QPushButton *MultiplayerBtn;
    QPushButton *HallOfFameBtn;
    QPushButton *SettingsBtn;
    QPushButton *QuitBtn;

    void setupUi(QWidget *FirstPage)
    {
        if (FirstPage->objectName().isEmpty())
            FirstPage->setObjectName(QString::fromUtf8("FirstPage"));
        FirstPage->resize(495, 448);
        SinglePlayerBtn = new QPushButton(FirstPage);
        SinglePlayerBtn->setObjectName(QString::fromUtf8("SinglePlayerBtn"));
        SinglePlayerBtn->setGeometry(QRect(160, 110, 131, 25));
        MultiplayerBtn = new QPushButton(FirstPage);
        MultiplayerBtn->setObjectName(QString::fromUtf8("MultiplayerBtn"));
        MultiplayerBtn->setGeometry(QRect(140, 160, 171, 25));
        HallOfFameBtn = new QPushButton(FirstPage);
        HallOfFameBtn->setObjectName(QString::fromUtf8("HallOfFameBtn"));
        HallOfFameBtn->setGeometry(QRect(160, 210, 131, 25));
        SettingsBtn = new QPushButton(FirstPage);
        SettingsBtn->setObjectName(QString::fromUtf8("SettingsBtn"));
        SettingsBtn->setGeometry(QRect(179, 260, 91, 25));
        QuitBtn = new QPushButton(FirstPage);
        QuitBtn->setObjectName(QString::fromUtf8("QuitBtn"));
        QuitBtn->setGeometry(QRect(200, 310, 51, 25));

        retranslateUi(FirstPage);

        QMetaObject::connectSlotsByName(FirstPage);
    } // setupUi

    void retranslateUi(QWidget *FirstPage)
    {
        FirstPage->setWindowTitle(QCoreApplication::translate("FirstPage", "Form", nullptr));
        SinglePlayerBtn->setText(QCoreApplication::translate("FirstPage", "Single player", nullptr));
        MultiplayerBtn->setText(QCoreApplication::translate("FirstPage", "Multiplayer", nullptr));
        HallOfFameBtn->setText(QCoreApplication::translate("FirstPage", "Hall of fame", nullptr));
        SettingsBtn->setText(QCoreApplication::translate("FirstPage", "Settings", nullptr));
        QuitBtn->setText(QCoreApplication::translate("FirstPage", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstPage: public Ui_FirstPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTPAGE_H
