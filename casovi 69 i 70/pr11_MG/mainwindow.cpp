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
    QString ime, prezime, ispis;
    QMessageBox poruka;
    bool r1 = ui->radioButton->isChecked();
    bool r2 = ui->radioButton_2->isChecked();
    bool rb1 = ui->radioButton_3->isChecked();
    bool rb2 = ui->radioButton_4->isChecked();
    bool rb3 = ui->radioButton_5->isChecked();
    ime = ui->lineEdit->text();
    prezime = ui->lineEdit_2->text();
    if(ime.isEmpty())
    {
        poruka.setText("Niste uneli ime");
        poruka.exec();
        ui->lineEdit->setFocus();

    }
    else if(prezime.isEmpty())
    {
        poruka.setText("Niste uneli prezime");
        poruka.exec();
        ui->lineEdit_2->setFocus();;
    }
    else if(!r1 & !r2)
    {
        poruka.setText("Niste uneli pol");
        poruka.exec();
    }
    else if(!rb1 && !rb2 && !rb3)
    {
        poruka.setText("Niste uneli obrazovni profil");
        poruka.exec();
    }
    else
    {
        if(r1)
            ispis = "ucenik \n";
        if(r2)
            ispis = "ucenica \n";

        ispis += " " + ui->lineEdit->text() +" "+ ui->lineEdit_2->text()+ " " +"\n";
        ispis += "je upisan";
        ispis += "obrazovni profil \n";
        if(rb1)
            ispis += "elektrotehnicar energetike ";
        if(rb2)
            ispis += "elektrotehnicar informacionih tehnologija ";
        if(rb3)
            ispis += "elektrotehnicar multimedija ";
        ui->textEdit->setText(ispis);


    }



}
