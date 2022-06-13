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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_multiplayerpage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *HostBtn;
    QPushButton *ConnectBtn;
    QPushButton *MultiplayerPageBackBtn;

    void setupUi(QWidget *multiplayerpage)
    {
        if (multiplayerpage->objectName().isEmpty())
            multiplayerpage->setObjectName(QString::fromUtf8("multiplayerpage"));
        multiplayerpage->resize(400, 300);
        verticalLayoutWidget = new QWidget(multiplayerpage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 30, 221, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        HostBtn = new QPushButton(verticalLayoutWidget);
        HostBtn->setObjectName(QString::fromUtf8("HostBtn"));

        verticalLayout->addWidget(HostBtn);

        ConnectBtn = new QPushButton(verticalLayoutWidget);
        ConnectBtn->setObjectName(QString::fromUtf8("ConnectBtn"));

        verticalLayout->addWidget(ConnectBtn);

        MultiplayerPageBackBtn = new QPushButton(verticalLayoutWidget);
        MultiplayerPageBackBtn->setObjectName(QString::fromUtf8("MultiplayerPageBackBtn"));

        verticalLayout->addWidget(MultiplayerPageBackBtn);


        retranslateUi(multiplayerpage);

        QMetaObject::connectSlotsByName(multiplayerpage);
    } // setupUi

    void retranslateUi(QWidget *multiplayerpage)
    {
        multiplayerpage->setWindowTitle(QCoreApplication::translate("multiplayerpage", "Form", nullptr));
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
