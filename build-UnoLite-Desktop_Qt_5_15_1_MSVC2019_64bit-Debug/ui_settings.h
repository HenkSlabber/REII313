/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *UpdateNameTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *YourNameIs_2;
    QLabel *CurrentName;
    QPushButton *UpdateNameBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *SettingspageBackBtn;

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(400, 300);
        verticalLayoutWidget = new QWidget(settings);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 30, 201, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        UpdateNameTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        UpdateNameTextEdit->setObjectName(QString::fromUtf8("UpdateNameTextEdit"));

        verticalLayout->addWidget(UpdateNameTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        YourNameIs_2 = new QLabel(verticalLayoutWidget);
        YourNameIs_2->setObjectName(QString::fromUtf8("YourNameIs_2"));

        horizontalLayout_2->addWidget(YourNameIs_2);

        CurrentName = new QLabel(verticalLayoutWidget);
        CurrentName->setObjectName(QString::fromUtf8("CurrentName"));

        horizontalLayout_2->addWidget(CurrentName);


        verticalLayout->addLayout(horizontalLayout_2);

        UpdateNameBtn = new QPushButton(verticalLayoutWidget);
        UpdateNameBtn->setObjectName(QString::fromUtf8("UpdateNameBtn"));

        verticalLayout->addWidget(UpdateNameBtn);

        gridLayoutWidget = new QWidget(settings);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 220, 101, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SettingspageBackBtn = new QPushButton(gridLayoutWidget);
        SettingspageBackBtn->setObjectName(QString::fromUtf8("SettingspageBackBtn"));

        gridLayout->addWidget(SettingspageBackBtn, 0, 0, 1, 1);


        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Form", nullptr));
        YourNameIs_2->setText(QCoreApplication::translate("settings", "Your Name Is:  ", nullptr));
        CurrentName->setText(QString());
        UpdateNameBtn->setText(QCoreApplication::translate("settings", "Update Name", nullptr));
        SettingspageBackBtn->setText(QCoreApplication::translate("settings", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
