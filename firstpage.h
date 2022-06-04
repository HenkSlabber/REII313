#ifndef FIRSTPAGE_H
#define FIRSTPAGE_H

#include <QMainWindow>
#include <QtWidgets>
#include "ui_firstpage.h"

class firstpage : public QWidget
{
    Q_OBJECT

public:
     explicit firstpage(QWidget *parent = nullptr);


private:
    Ui::FirstPage ui;

private slots:

};
#endif // UNOLITE_H
