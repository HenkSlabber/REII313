#ifndef HALLOFFAME_H
#define HALLOFFAME_H

#include <QWidget>

namespace Ui {
class halloffame;
}

class halloffame : public QWidget
{
    Q_OBJECT

public:
    explicit halloffame(QWidget *parent = nullptr);
    ~halloffame();

private:
    Ui::halloffame *ui;
};

#endif // HALLOFFAME_H
