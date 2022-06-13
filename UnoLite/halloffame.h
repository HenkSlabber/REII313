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

signals:
    void BackButtonPressed();

private slots:
    void on_HallOfFameBackBtn_clicked();

private:
    Ui::halloffame *ui;
};

#endif // HALLOFFAME_H
