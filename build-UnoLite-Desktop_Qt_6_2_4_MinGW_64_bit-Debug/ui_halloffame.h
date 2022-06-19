/********************************************************************************
** Form generated from reading UI file 'halloffame.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALLOFFAME_H
#define UI_HALLOFFAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_halloffame
{
public:
    QTableWidget *HallofFameTable;
    QPushButton *HallOfFameBackBtn;

    void setupUi(QWidget *halloffame)
    {
        if (halloffame->objectName().isEmpty())
            halloffame->setObjectName(QString::fromUtf8("halloffame"));
        halloffame->resize(400, 450);
        HallofFameTable = new QTableWidget(halloffame);
        HallofFameTable->setObjectName(QString::fromUtf8("HallofFameTable"));
        HallofFameTable->setGeometry(QRect(30, 70, 340, 250));
        HallOfFameBackBtn = new QPushButton(halloffame);
        HallOfFameBackBtn->setObjectName(QString::fromUtf8("HallOfFameBackBtn"));
        HallOfFameBackBtn->setGeometry(QRect(135, 350, 119, 24));

        retranslateUi(halloffame);

        QMetaObject::connectSlotsByName(halloffame);
    } // setupUi

    void retranslateUi(QWidget *halloffame)
    {
        halloffame->setWindowTitle(QCoreApplication::translate("halloffame", "Uno", nullptr));
        HallOfFameBackBtn->setText(QCoreApplication::translate("halloffame", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class halloffame: public Ui_halloffame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALLOFFAME_H
