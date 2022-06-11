#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <firstpage.h>


namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();

private slots:
    void on_SettingspageBackBtn_clicked();

    void on_UpdateNameBtn_clicked();

private:
    Ui::settings *ui;
    QString TextFromPlainTextEdit;
    FirstPage *firstpage3;
};

#endif // SETTINGS_H
