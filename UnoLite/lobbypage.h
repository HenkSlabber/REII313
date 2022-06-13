#ifndef LOBBYPAGE_H
#define LOBBYPAGE_H

#include <QWidget>

namespace Ui {
class lobbypage;
}

class lobbypage : public QWidget
{
    Q_OBJECT

public:
    explicit lobbypage(QWidget *parent = nullptr);
    ~lobbypage();

signals:
    void BackButtonPressed();

private slots:
    void on_LeaveGameBtn_clicked();

private:
    Ui::lobbypage *ui;
};

#endif // LOBBYPAGE_H
