/********************************************************************************
** Form generated from reading UI file 'halloffamepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALLOFFAMEPAGE_H
#define UI_HALLOFFAMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HallOfFamePage
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HallOfFamePage)
    {
        if (HallOfFamePage->objectName().isEmpty())
            HallOfFamePage->setObjectName(QString::fromUtf8("HallOfFamePage"));
        HallOfFamePage->resize(800, 600);
        menubar = new QMenuBar(HallOfFamePage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        HallOfFamePage->setMenuBar(menubar);
        centralwidget = new QWidget(HallOfFamePage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        HallOfFamePage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HallOfFamePage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HallOfFamePage->setStatusBar(statusbar);

        retranslateUi(HallOfFamePage);

        QMetaObject::connectSlotsByName(HallOfFamePage);
    } // setupUi

    void retranslateUi(QMainWindow *HallOfFamePage)
    {
        HallOfFamePage->setWindowTitle(QCoreApplication::translate("HallOfFamePage", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HallOfFamePage: public Ui_HallOfFamePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALLOFFAMEPAGE_H
