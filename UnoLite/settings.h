#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>


namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();

signals:
    void BackButtonPressed();

private slots:
    void on_SettingspageBackBtn_clicked();

    void on_UpdateNameBtn_clicked();

private:
    Ui::settings *ui;
    QString TextFromPlainTextEdit;
};

#endif // SETTINGS_H
