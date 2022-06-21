#ifndef HALLOFFAME_H
#define HALLOFFAME_H

#include <QWidget>
#include <QListWidget>

namespace Ui {
class halloffame;
}

class halloffame : public QWidget
{
    Q_OBJECT

public:
    explicit halloffame(QWidget *parent = nullptr);
    ~halloffame();
    QString Score = 0;

signals:
    void BackButtonPressed();

private slots:
    void on_HallOfFameBackBtn_clicked();

//    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

private:
    Ui::halloffame *ui;
    QListWidget *listWdiget;
};

#endif // HALLOFFAME_H
