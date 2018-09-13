#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "jednake.h"
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
    double a, rezultat;
    QString stranica, resenje;
    QMessageBox poruka;
    bool ok;
    bool r1 = ui->radioButton->isChecked();
    bool r2= ui->radioButton_2->isChecked();
    bool r3 = ui->radioButton_3->isChecked();
    stranica = ui->lineEdit->text();
    a = stranica.toDouble(&ok);
    if(stranica.isEmpty())
    {
        poruka.setText("Niste uneli stranicu");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!ok)
    {
        poruka.setText("Niste uneli broj");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(a<=0.)
    {
        poruka.setText("Broj ne sme biti negativan");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(!r1 && !r2 && !r3)
    {
        poruka.setText("Niste odabrali nijednu opciju");
        poruka.exec();

    }
    else
    {
        if(r1)
        {
            jednakostranicniTrougao objekat;
            objekat.setStranica(a);
            rezultat = objekat.getPovrsina();
            ui->label_3->setText("Povrsina trougla iznosi");
            resenje = QString::number(rezultat);
            ui->lineEdit_2->setText(resenje);
        }
        else if(r2)
        {

            kvadrat objekat;
            objekat.setStranica(a);
            rezultat = objekat.getPovrsina();
            ui->label_3->setText("Povrsina kvadrata iznosi");
            resenje = QString::number(rezultat);
            ui->lineEdit_2->setText(resenje);
        }
        else
        {

            kocka objekat;
            objekat.setStranica(a);
            rezultat = objekat.getPovrsina();
            ui->label_3->setText("Povrsina kocke iznosi");
            resenje = QString::number(rezultat);
            ui->lineEdit_2->setText(resenje);
        }
        }


}
