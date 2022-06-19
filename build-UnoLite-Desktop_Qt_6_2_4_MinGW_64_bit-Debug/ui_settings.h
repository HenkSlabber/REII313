/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QPushButton *SettingspageBackBtn;
    QPushButton *UpdateNameBtn;
    QLabel *YourNameIs_2;
    QLabel *CurrentName;
    QPlainTextEdit *UpdateNameTextEdit;

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(400, 450);
        SettingspageBackBtn = new QPushButton(settings);
        SettingspageBackBtn->setObjectName(QString::fromUtf8("SettingspageBackBtn"));
        SettingspageBackBtn->setGeometry(QRect(150, 350, 100, 25));
        UpdateNameBtn = new QPushButton(settings);
        UpdateNameBtn->setObjectName(QString::fromUtf8("UpdateNameBtn"));
        UpdateNameBtn->setGeometry(QRect(100, 280, 200, 25));
        YourNameIs_2 = new QLabel(settings);
        YourNameIs_2->setObjectName(QString::fromUtf8("YourNameIs_2"));
        YourNameIs_2->setGeometry(QRect(60, 220, 95, 16));
        CurrentName = new QLabel(settings);
        CurrentName->setObjectName(QString::fromUtf8("CurrentName"));
        CurrentName->setGeometry(QRect(160, 220, 180, 16));
        UpdateNameTextEdit = new QPlainTextEdit(settings);
        UpdateNameTextEdit->setObjectName(QString::fromUtf8("UpdateNameTextEdit"));
        UpdateNameTextEdit->setGeometry(QRect(60, 40, 280, 170));

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Uno", nullptr));
        SettingspageBackBtn->setText(QCoreApplication::translate("settings", "Back", nullptr));
        UpdateNameBtn->setText(QCoreApplication::translate("settings", "Update Name", nullptr));
        YourNameIs_2->setText(QCoreApplication::translate("settings", "Your Name Is:  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
