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
    QString stranica1, resenje = "";
    double a, o, p, d;
    QMessageBox poruka;
    bool ok1;
    bool r1 = ui->checkBox->isChecked();
    bool r2 = ui->checkBox_2->isChecked();
    bool r3 = ui->checkBox_3->isChecked();
    stranica1 = ui->lineEdit->text();
    a = stranica1.toDouble(&ok1);

    ui->lineEdit->setFocus();
    if(stranica1.isEmpty())
    {
        poruka.setText("Niste uneli nista");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!ok1)
    {
        poruka.setText("Niste uneli dobar poluprecnik");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(a<=0.)
    {
        poruka.setText("Poluprecnik ne sme biti negativan");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else{
        if(!r1 && !r2 && !r3)
        {
            resenje +="Niste odabrali nista";
            ui->textEdit->setText(resenje);
        }
        if(r1)
        {
            o = 2. * a * 3.14;
            resenje += "Obim iznosi ";
            resenje += QString::number(o)+"\n";
            ui->textEdit->setText(resenje);
        }
        if(r2)
        {
            p = a * a * 3.14;
            resenje += "Povrsina iznosi ";
            resenje += QString::number(p)+"\n";
            ui->textEdit->setText(resenje);
        }
        if(r3)
        {
            d = 2 * a;
            resenje += "Obim iznosi ";
            resenje += QString::number(d)+"\n";
            ui->textEdit->setText(resenje);
        }
    }
}
