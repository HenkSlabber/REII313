/********************************************************************************
** Form generated from reading UI file 'singleplayerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEPLAYERPAGE_H
#define UI_SINGLEPLAYERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_singleplayerpage
{
public:
    QLabel *playerdifficulty;
    QComboBox *DufficultySelect;
    QLabel *AIplayer;
    QPushButton *StartGameBtn;
    QPushButton *singleplayerpageBackBtn;

    void setupUi(QWidget *singleplayerpage)
    {
        if (singleplayerpage->objectName().isEmpty())
            singleplayerpage->setObjectName(QString::fromUtf8("singleplayerpage"));
        singleplayerpage->resize(400, 450);
        playerdifficulty = new QLabel(singleplayerpage);
        playerdifficulty->setObjectName(QString::fromUtf8("playerdifficulty"));
        playerdifficulty->setGeometry(QRect(115, 30, 170, 35));
        QFont font;
        font.setPointSize(14);
        playerdifficulty->setFont(font);
        playerdifficulty->setAlignment(Qt::AlignCenter);
        DufficultySelect = new QComboBox(singleplayerpage);
        DufficultySelect->setObjectName(QString::fromUtf8("DufficultySelect"));
        DufficultySelect->setGeometry(QRect(180, 122, 156, 24));
        AIplayer = new QLabel(singleplayerpage);
        AIplayer->setObjectName(QString::fromUtf8("AIplayer"));
        AIplayer->setGeometry(QRect(40, 90, 320, 90));
        StartGameBtn = new QPushButton(singleplayerpage);
        StartGameBtn->setObjectName(QString::fromUtf8("StartGameBtn"));
        StartGameBtn->setGeometry(QRect(150, 230, 100, 25));
        singleplayerpageBackBtn = new QPushButton(singleplayerpage);
        singleplayerpageBackBtn->setObjectName(QString::fromUtf8("singleplayerpageBackBtn"));
        singleplayerpageBackBtn->setGeometry(QRect(150, 300, 100, 25));
        playerdifficulty->raise();
        AIplayer->raise();
        StartGameBtn->raise();
        singleplayerpageBackBtn->raise();
        DufficultySelect->raise();

        retranslateUi(singleplayerpage);

        QMetaObject::connectSlotsByName(singleplayerpage);
    } // setupUi

    void retranslateUi(QWidget *singleplayerpage)
    {
        singleplayerpage->setWindowTitle(QCoreApplication::translate("singleplayerpage", "Uno", nullptr));
        playerdifficulty->setText(QCoreApplication::translate("singleplayerpage", "Player difficulty", nullptr));
        AIplayer->setText(QCoreApplication::translate("singleplayerpage", "AI Difficulty", nullptr));
        StartGameBtn->setText(QCoreApplication::translate("singleplayerpage", "Start Game", nullptr));
        singleplayerpageBackBtn->setText(QCoreApplication::translate("singleplayerpage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class singleplayerpage: public Ui_singleplayerpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEPLAYERPAGE_H
