#ifndef RALE_H
#define RALE_H

#include <QMainWindow>

namespace Ui {
class rale;
}

class rale : public QMainWindow
{
    Q_OBJECT

public:
    explicit rale(QWidget *parent = 0);
    ~rale();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::rale *ui;
};

#endif // RALE_H
