#ifndef POPUP_H
#define POPUP_H

#include <QWidget>
#include <QString>
#include "firstpage.h"

namespace Ui {
class Popup;
}

class Popup : public QWidget
{
    Q_OBJECT

public:
    explicit Popup(QWidget *parent = nullptr);
    ~Popup();

private slots:
    void on_SaveBtn_clicked();

private:
    Ui::Popup *ui;
    QString TextFromPlainTextEdit;
    FirstPage *firstpage;

};

#endif // POPUP_H
