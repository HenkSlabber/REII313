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
#include <QtWidgets/QLabel>
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
    QLabel *label;

    void setupUi(QWidget *FirstPage)
    {
        if (FirstPage->objectName().isEmpty())
            FirstPage->setObjectName(QString::fromUtf8("FirstPage"));
        FirstPage->resize(400, 450);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FirstPage->sizePolicy().hasHeightForWidth());
        FirstPage->setSizePolicy(sizePolicy);
        FirstPage->setMinimumSize(QSize(0, 0));
        SinglePlayerBtn = new QPushButton(FirstPage);
        SinglePlayerBtn->setObjectName(QString::fromUtf8("SinglePlayerBtn"));
        SinglePlayerBtn->setGeometry(QRect(135, 150, 130, 25));
        MultiplayerBtn = new QPushButton(FirstPage);
        MultiplayerBtn->setObjectName(QString::fromUtf8("MultiplayerBtn"));
        MultiplayerBtn->setGeometry(QRect(135, 200, 130, 25));
        HallOfFameBtn = new QPushButton(FirstPage);
        HallOfFameBtn->setObjectName(QString::fromUtf8("HallOfFameBtn"));
        HallOfFameBtn->setGeometry(QRect(135, 250, 130, 25));
        SettingsBtn = new QPushButton(FirstPage);
        SettingsBtn->setObjectName(QString::fromUtf8("SettingsBtn"));
        SettingsBtn->setGeometry(QRect(135, 300, 130, 25));
        QuitBtn = new QPushButton(FirstPage);
        QuitBtn->setObjectName(QString::fromUtf8("QuitBtn"));
        QuitBtn->setGeometry(QRect(135, 350, 130, 25));
        label = new QLabel(FirstPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 200, 70));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(FirstPage);

        QMetaObject::connectSlotsByName(FirstPage);
    } // setupUi

    void retranslateUi(QWidget *FirstPage)
    {
        FirstPage->setWindowTitle(QCoreApplication::translate("FirstPage", "Uno", nullptr));
        SinglePlayerBtn->setText(QCoreApplication::translate("FirstPage", "Single player", nullptr));
        MultiplayerBtn->setText(QCoreApplication::translate("FirstPage", "Multiplayer", nullptr));
        HallOfFameBtn->setText(QCoreApplication::translate("FirstPage", "Hall of fame", nullptr));
        SettingsBtn->setText(QCoreApplication::translate("FirstPage", "Settings", nullptr));
        QuitBtn->setText(QCoreApplication::translate("FirstPage", "Quit", nullptr));
        label->setText(QCoreApplication::translate("FirstPage", "UNO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstPage: public Ui_FirstPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTPAGE_H
