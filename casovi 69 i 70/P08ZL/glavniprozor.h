#ifndef GLAVNIPROZOR_H
#define GLAVNIPROZOR_H

#include <QMainWindow>

namespace Ui {
class GlavniProzor;
}

class GlavniProzor : public QMainWindow
{
    Q_OBJECT

public:
    explicit GlavniProzor(QWidget *parent = 0);
    ~GlavniProzor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::GlavniProzor *ui;
};

#endif // GLAVNIPROZOR_H
