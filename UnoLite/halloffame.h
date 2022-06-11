#ifndef HALLOFFAME_H
#define HALLOFFAME_H

#include <QWidget>
#include <firstpage.h>

namespace Ui {
class halloffame;
}

class halloffame : public QWidget
{
    Q_OBJECT

public:
    explicit halloffame(QWidget *parent = nullptr);
    ~halloffame();

private slots:
    void on_HallOfFameBackBtn_clicked();

private:
    Ui::halloffame *ui;
    FirstPage *firstpage2;
};

#endif // HALLOFFAME_H
