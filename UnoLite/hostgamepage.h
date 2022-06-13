#ifndef HOSTGAMEPAGE_H
#define HOSTGAMEPAGE_H

#include <QWidget>

namespace Ui {
class hostgamepage;
}

class hostgamepage : public QWidget
{
    Q_OBJECT

public:
    explicit hostgamepage(QWidget *parent = nullptr);
    ~hostgamepage();

signals:
    void BackButtonPressed();

private slots:
    void on_HostagamepageBackBtn_clicked();

private:
    Ui::hostgamepage *ui;
};

#endif // HOSTGAMEPAGE_H
