/********************************************************************************
** Form generated from reading UI file 'lobbypage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBYPAGE_H
#define UI_LOBBYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lobbypage
{
public:
    QPushButton *LeaveGameBtn;
    QProgressBar *progressBar;

    void setupUi(QWidget *lobbypage)
    {
        if (lobbypage->objectName().isEmpty())
            lobbypage->setObjectName(QString::fromUtf8("lobbypage"));
        lobbypage->resize(400, 450);
        LeaveGameBtn = new QPushButton(lobbypage);
        LeaveGameBtn->setObjectName(QString::fromUtf8("LeaveGameBtn"));
        LeaveGameBtn->setGeometry(QRect(150, 350, 100, 25));
        progressBar = new QProgressBar(lobbypage);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(50, 200, 300, 25));
        progressBar->setValue(24);

        retranslateUi(lobbypage);

        QMetaObject::connectSlotsByName(lobbypage);
    } // setupUi

    void retranslateUi(QWidget *lobbypage)
    {
        lobbypage->setWindowTitle(QCoreApplication::translate("lobbypage", "Form", nullptr));
        LeaveGameBtn->setText(QCoreApplication::translate("lobbypage", "Leave Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lobbypage: public Ui_lobbypage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBYPAGE_H
