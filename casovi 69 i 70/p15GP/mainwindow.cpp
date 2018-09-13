#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "cmath"
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
    QString stranica , resenje="";
    double a, o, p, d;
    QMessageBox poruka;
    bool ok;
    bool r1 = ui->checkBox->isChecked();
    bool r2 = ui->checkBox_2->isChecked();
    bool r3 = ui->checkBox_3->isChecked();
    stranica = ui->lineEdit->text();
    a = stranica.toDouble(&ok);
    if(stranica.isEmpty())
    {
        poruka.setText("Niste uneli nijednu vrednost");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!ok)
    {
        poruka.setText("Niste uneli odgovarajucu vrednost");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(a<=0.)
    {
        poruka.setText("Stranca mora biti pozitivna");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else
    {
        if(!r1 && !r2 && !r3)
        {
            resenje += "Niste odabrali nijednu opciju";
            ui->textEdit->setText(resenje);
        }
        if(r1)
        {
            o = 4. *a;
            resenje += "Obim iznosi ";
            resenje += QString::number(o)+"\n";
            ui->textEdit->setText(resenje);
        }
        if(r2)
        {
            p = a * a;
            resenje += "Povrsina iznosi ";
            resenje += QString::number(p)+"\n";
            ui->textEdit->setText(resenje);
        }
        if(r3)
        {
            d = sqrt(2)*a;
            resenje += "Dijagonala iznosi ";
            resenje += QString::number(d)+"\n";
            ui->textEdit->setText(resenje);
        }
    }
}
