/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *SinglePlayerBtn;
    QPushButton *MultiplayerBtn;
    QPushButton *SettingsBtn;
    QPushButton *HallOfFameBtn;
    QPushButton *QuitBtn;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        SinglePlayerBtn = new QPushButton(MainWindow);
        SinglePlayerBtn->setObjectName(QString::fromUtf8("SinglePlayerBtn"));
        SinglePlayerBtn->setGeometry(QRect(160, 60, 80, 25));
        MultiplayerBtn = new QPushButton(MainWindow);
        MultiplayerBtn->setObjectName(QString::fromUtf8("MultiplayerBtn"));
        MultiplayerBtn->setGeometry(QRect(130, 100, 151, 31));
        SettingsBtn = new QPushButton(MainWindow);
        SettingsBtn->setObjectName(QString::fromUtf8("SettingsBtn"));
        SettingsBtn->setGeometry(QRect(150, 180, 91, 25));
        HallOfFameBtn = new QPushButton(MainWindow);
        HallOfFameBtn->setObjectName(QString::fromUtf8("HallOfFameBtn"));
        HallOfFameBtn->setGeometry(QRect(160, 140, 80, 25));
        QuitBtn = new QPushButton(MainWindow);
        QuitBtn->setObjectName(QString::fromUtf8("QuitBtn"));
        QuitBtn->setGeometry(QRect(180, 220, 51, 21));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Form", nullptr));
        SinglePlayerBtn->setText(QCoreApplication::translate("MainWindow", "Single Player", nullptr));
        MultiplayerBtn->setText(QCoreApplication::translate("MainWindow", "Multiplayer", nullptr));
        SettingsBtn->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        HallOfFameBtn->setText(QCoreApplication::translate("MainWindow", "Hall of fame", nullptr));
        QuitBtn->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
