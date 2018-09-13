#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox poruka;
    QString poluprecnik,resenje,izbor,obim,povrsina,precnik;
    double r,o,p,d;

    bool ok;

    poluprecnik = ui->lineEdit->text();
    r = poluprecnik.toDouble(&ok);

    izbor = ui->comboBox->currentText();

    if(poluprecnik.isEmpty())
    {
        poruka.setText("NIste uneli vrednost za poluprecnik kruga!");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!ok)
    {
        poruka.setText("Niste uneli broj kao vrednost poluprecnika kruga!");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(r <= 0)
    {
        poruka.setText("Vrednost poluprecnika kruga mora biti veca od nule!");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(izbor == "Izaberite vrstu proracuna")
    {
        poruka.setText("Niste izabrali vrstu proracuna!");
        poruka.exec();
    }
    else
    {
        if(izbor == "Obim kruga")
        {
            o = 2. * r * 3.14;
            obim = QString::number(o);
            resenje = "Obim kruga iznosi: "  + obim;
            ui->textEdit->setText(resenje);
        }
        if(izbor == "Povrsina kruga")
        {
            p = r * r * 3.14;
            povrsina = QString::number(p);
            resenje = "Povrsina kruga iznosi: " + povrsina;
            ui->textEdit->setText(resenje);
        }
        if(izbor == "Precnik kruga")
        {
            d = 2 * r;
            precnik = QString::number(d);
            resenje = "Precnik kruga iznosi: "  + precnik;
            ui->textEdit->setText(resenje);
        }
    }

}
