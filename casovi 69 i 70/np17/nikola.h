#ifndef NIKOLA_H
#define NIKOLA_H

#include <QMainWindow>

namespace Ui {
class nikola;
}

class nikola : public QMainWindow
{
    Q_OBJECT

public:
    explicit nikola(QWidget *parent = 0);
    ~nikola();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::nikola *ui;
};

#endif // NIKOLA_H
