/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Popup
{
public:
    QLabel *label;
    QPlainTextEdit *EnterNameHere;
    QPushButton *SaveBtn;

    void setupUi(QWidget *Popup)
    {
        if (Popup->objectName().isEmpty())
            Popup->setObjectName(QString::fromUtf8("Popup"));
        Popup->resize(246, 109);
        label = new QLabel(Popup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 55, 16));
        EnterNameHere = new QPlainTextEdit(Popup);
        EnterNameHere->setObjectName(QString::fromUtf8("EnterNameHere"));
        EnterNameHere->setGeometry(QRect(40, 30, 161, 31));
        SaveBtn = new QPushButton(Popup);
        SaveBtn->setObjectName(QString::fromUtf8("SaveBtn"));
        SaveBtn->setGeometry(QRect(80, 70, 80, 25));

        retranslateUi(Popup);

        QMetaObject::connectSlotsByName(Popup);
    } // setupUi

    void retranslateUi(QWidget *Popup)
    {
        Popup->setWindowTitle(QCoreApplication::translate("Popup", "Form", nullptr));
        label->setText(QCoreApplication::translate("Popup", "Player Name:", nullptr));
        SaveBtn->setText(QCoreApplication::translate("Popup", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Popup: public Ui_Popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H