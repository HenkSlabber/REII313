#ifndef HALLOFFAMEPAGE_H
#define HALLOFFAMEPAGE_H

#include <QMainWindow>

namespace Ui {
class HallOfFamePage;
}

class HallOfFamePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit HallOfFamePage(QWidget *parent = nullptr);
    ~HallOfFamePage();

private:
    Ui::HallOfFamePage *ui;
};

#endif // HALLOFFAMEPAGE_H
