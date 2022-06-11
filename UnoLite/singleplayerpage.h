#ifndef SINGLEPLAYERPAGE_H
#define SINGLEPLAYERPAGE_H

#include <QWidget>
#include <firstpage.h>

namespace Ui {
class singleplayerpage;
}

class singleplayerpage : public QWidget
{
    Q_OBJECT

public:
    explicit singleplayerpage(QWidget *parent = nullptr);
    ~singleplayerpage();

private slots:

    void on_singleplayerpageBackBtn_clicked();

private:
    Ui::singleplayerpage *ui;
    FirstPage *firstpage0;
};

#endif // SINGLEPLAYERPAGE_H
