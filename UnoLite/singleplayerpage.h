#ifndef SINGLEPLAYERPAGE_H
#define SINGLEPLAYERPAGE_H

#include <QWidget>
#include "unolite.h"

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
//    FirstPage *firstpage0;
};

#endif // SINGLEPLAYERPAGE_H
