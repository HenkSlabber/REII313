#ifndef SINGLEPLAYERPAGE_H
#define SINGLEPLAYERPAGE_H

#include <QWidget>
#include "unoliteDufficulty1.h"
#include "unoliteDufficulty2.h"

namespace Ui {
class singleplayerpage;
}

class singleplayerpage : public QWidget
{
    Q_OBJECT

public:
    explicit singleplayerpage(QWidget *parent = nullptr);
    ~singleplayerpage();

signals:
    void BackButtonPressed();

private slots:

    void on_singleplayerpageBackBtn_clicked();

    void on_StartGameBtn_clicked();

private:
    Ui::singleplayerpage *ui;
    UnoLiteDufficulty1 *Dufficulty1;
    UnoLiteDufficulty2 *Dufficulty2;
};

#endif // SINGLEPLAYERPAGE_H
