/********************************************************************************
** Form generated from reading UI file 'halloffame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALLOFFAME_H
#define UI_HALLOFFAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_halloffame
{
public:
    QTableWidget *HallofFameTable;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *HallOfFameBackBtn;

    void setupUi(QWidget *halloffame)
    {
        if (halloffame->objectName().isEmpty())
            halloffame->setObjectName(QString::fromUtf8("halloffame"));
        halloffame->resize(400, 300);
        HallofFameTable = new QTableWidget(halloffame);
        HallofFameTable->setObjectName(QString::fromUtf8("HallofFameTable"));
        HallofFameTable->setGeometry(QRect(30, 10, 331, 181));
        gridLayoutWidget = new QWidget(halloffame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 220, 121, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        HallOfFameBackBtn = new QPushButton(gridLayoutWidget);
        HallOfFameBackBtn->setObjectName(QString::fromUtf8("HallOfFameBackBtn"));

        gridLayout->addWidget(HallOfFameBackBtn, 0, 0, 1, 1);


        retranslateUi(halloffame);

        QMetaObject::connectSlotsByName(halloffame);
    } // setupUi

    void retranslateUi(QWidget *halloffame)
    {
        halloffame->setWindowTitle(QCoreApplication::translate("halloffame", "Form", nullptr));
        HallOfFameBackBtn->setText(QCoreApplication::translate("halloffame", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class halloffame: public Ui_halloffame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALLOFFAME_H
