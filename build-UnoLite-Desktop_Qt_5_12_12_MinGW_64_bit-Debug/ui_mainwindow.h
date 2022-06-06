/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *SinglePlayerBtn;
    QPushButton *MultiplayerBtn;
    QPushButton *HallOfFameBtn;
    QPushButton *SettingsBtn;
    QPushButton *ExitBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(407, 437);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 100, 221, 211));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        SinglePlayerBtn = new QPushButton(verticalLayoutWidget);
        SinglePlayerBtn->setObjectName(QString::fromUtf8("SinglePlayerBtn"));

        verticalLayout_3->addWidget(SinglePlayerBtn);

        MultiplayerBtn = new QPushButton(verticalLayoutWidget);
        MultiplayerBtn->setObjectName(QString::fromUtf8("MultiplayerBtn"));

        verticalLayout_3->addWidget(MultiplayerBtn);

        HallOfFameBtn = new QPushButton(verticalLayoutWidget);
        HallOfFameBtn->setObjectName(QString::fromUtf8("HallOfFameBtn"));

        verticalLayout_3->addWidget(HallOfFameBtn);

        SettingsBtn = new QPushButton(verticalLayoutWidget);
        SettingsBtn->setObjectName(QString::fromUtf8("SettingsBtn"));

        verticalLayout_3->addWidget(SettingsBtn);

        ExitBtn = new QPushButton(verticalLayoutWidget);
        ExitBtn->setObjectName(QString::fromUtf8("ExitBtn"));

        verticalLayout_3->addWidget(ExitBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 407, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        SinglePlayerBtn->setText(QApplication::translate("MainWindow", "Single Player", nullptr));
        MultiplayerBtn->setText(QApplication::translate("MainWindow", "Multiplayer", nullptr));
        HallOfFameBtn->setText(QApplication::translate("MainWindow", "Hall of Fame", nullptr));
        SettingsBtn->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        ExitBtn->setText(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
