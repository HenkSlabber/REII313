#ifndef POPUP_H
#define POPUP_H

#include <QWidget>
#include <QString>


namespace Ui {
class Popup;
}

class Popup : public QWidget
{
    Q_OBJECT

public:
    explicit Popup(QWidget *parent = nullptr);
    ~Popup();

    Popup *PopUp;

private slots:
    void on_SaveBtn_clicked();

private:
    Ui::Popup *ui;
    QString TextFromPlainTextEdit;

};

#endif // POPUP_H
