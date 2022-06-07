/********************************************************************************
** Form generated from reading UI file 'lobbypage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBYPAGE_H
#define UI_LOBBYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lobbypage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *LeaveGameBtn;

    void setupUi(QWidget *lobbypage)
    {
        if (lobbypage->objectName().isEmpty())
            lobbypage->setObjectName(QString::fromUtf8("lobbypage"));
        lobbypage->resize(400, 300);
        verticalLayoutWidget = new QWidget(lobbypage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 30, 291, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        verticalLayoutWidget_2 = new QWidget(lobbypage);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, 180, 181, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        LeaveGameBtn = new QPushButton(verticalLayoutWidget_2);
        LeaveGameBtn->setObjectName(QString::fromUtf8("LeaveGameBtn"));

        verticalLayout_2->addWidget(LeaveGameBtn);


        retranslateUi(lobbypage);

        QMetaObject::connectSlotsByName(lobbypage);
    } // setupUi

    void retranslateUi(QWidget *lobbypage)
    {
        lobbypage->setWindowTitle(QApplication::translate("lobbypage", "Form", nullptr));
        LeaveGameBtn->setText(QApplication::translate("lobbypage", "Leave Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lobbypage: public Ui_lobbypage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBYPAGE_H
