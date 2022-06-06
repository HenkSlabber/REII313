#ifndef MULTIPLAYERPAGE_H
#define MULTIPLAYERPAGE_H

#include <QWidget>

namespace Ui {
class multiplayerpage;
}

class multiplayerpage : public QWidget
{
    Q_OBJECT

public:
    explicit multiplayerpage(QWidget *parent = nullptr);
    ~multiplayerpage();

private:
    Ui::multiplayerpage *ui;
};

#endif // MULTIPLAYERPAGE_H
