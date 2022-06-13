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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_singleplayerpage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *StartGameBtn;
    QPushButton *singleplayerpageBackBtn;
    QLabel *playerdifficulty;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *AIplayer;
    QComboBox *DufficultySelect;

    void setupUi(QWidget *singleplayerpage)
    {
        if (singleplayerpage->objectName().isEmpty())
            singleplayerpage->setObjectName(QString::fromUtf8("singleplayerpage"));
        singleplayerpage->resize(400, 300);
        verticalLayoutWidget = new QWidget(singleplayerpage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 210, 101, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        StartGameBtn = new QPushButton(verticalLayoutWidget);
        StartGameBtn->setObjectName(QString::fromUtf8("StartGameBtn"));

        verticalLayout->addWidget(StartGameBtn);

        singleplayerpageBackBtn = new QPushButton(verticalLayoutWidget);
        singleplayerpageBackBtn->setObjectName(QString::fromUtf8("singleplayerpageBackBtn"));

        verticalLayout->addWidget(singleplayerpageBackBtn);

        playerdifficulty = new QLabel(singleplayerpage);
        playerdifficulty->setObjectName(QString::fromUtf8("playerdifficulty"));
        playerdifficulty->setGeometry(QRect(81, 36, 161, 31));
        horizontalLayoutWidget = new QWidget(singleplayerpage);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 80, 321, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AIplayer = new QLabel(horizontalLayoutWidget);
        AIplayer->setObjectName(QString::fromUtf8("AIplayer"));

        horizontalLayout->addWidget(AIplayer);

        DufficultySelect = new QComboBox(horizontalLayoutWidget);
        DufficultySelect->setObjectName(QString::fromUtf8("DufficultySelect"));

        horizontalLayout->addWidget(DufficultySelect);


        retranslateUi(singleplayerpage);

        QMetaObject::connectSlotsByName(singleplayerpage);
    } // setupUi

    void retranslateUi(QWidget *singleplayerpage)
    {
        singleplayerpage->setWindowTitle(QCoreApplication::translate("singleplayerpage", "Form", nullptr));
        StartGameBtn->setText(QCoreApplication::translate("singleplayerpage", "Start Game", nullptr));
        singleplayerpageBackBtn->setText(QCoreApplication::translate("singleplayerpage", "Back", nullptr));
        playerdifficulty->setText(QCoreApplication::translate("singleplayerpage", "Player difficulty", nullptr));
        AIplayer->setText(QCoreApplication::translate("singleplayerpage", "AI Difficulty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class singleplayerpage: public Ui_singleplayerpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEPLAYERPAGE_H
