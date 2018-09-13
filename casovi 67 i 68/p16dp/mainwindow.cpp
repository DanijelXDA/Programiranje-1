#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmath"
#include "jednacine.h"
#include <QMessageBox>


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
    QString stranica, resenje = "", izbor;
    QMessageBox poruka;
    bool ok;
    bool r1 = ui->radioButton->isChecked();
    bool r2 = ui->radioButton_2->isChecked();
    bool r3 = ui->radioButton_3->isChecked();
    izbor = ui->comboBox->currentText();
    stranica = ui->lineEdit->text();
    a = stranica.toDouble();

    if(stranica.isEmpty()){
        poruka.setText("Niste uneli vrednost");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!ok){
        poruka.setText("Niste uneli odgovarajucu vrednost");
        poruka.exec();
        ui->lineEdit->setFocus();
        ui->lineEdit->clear();
    }
    else if(a<=0){
        poruka.setText("Broj mora da bude pozitivan");
        poruka.exec();
        ui->lineEdit->setFocus();
        ui->lineEdit->clear();
    }
    else
    if(r1){
        if(izbor == "Obim")
        {
            jednakostranicniTrougao objekat;
            objekat.setStranica(a);
            rezultat = objekat.getObim();
            ui->label_4->setText("Obim jednakostranicnog trougla je ");
            resenje += QString::number(rezultat);
            ui->textEdit->setText(resenje);
        }
          if(izbor == "Povrsina")
        {
            jednakostranicniTrougao objekat;
            objekat.setStranica(a);
            rezultat = objekat.getPovrsina();
            ui->label_4->setText("Povrsina jednakostranicnog trougla je ");
            resenje += QString::number(rezultat);
            ui->textEdit->setText(resenje);
        }
    }
        if(r2){
                if(izbor == "Obim")
                {
                    kvadrat objekat;
                    objekat.setStranica(a);
                    rezultat = objekat.getObim();
                    ui->label_4->setText("Obim kvadrata je ");
                    resenje += QString::number(rezultat);
                    ui->textEdit->setText(resenje);
                }
                  if(izbor == "Povrsina")
                {
                    kvadrat objekat;
                    objekat.setStranica(a);
                    rezultat = objekat.getPovrsina();
                    ui->label_4->setText("Povrsina kvadrata je ");
                    resenje += QString::number(rezultat);
                    ui->textEdit->setText(resenje);
                }
        }
               if (r3){
                        if(izbor == "Obim")
                        {
                            sestougao objekat;
                            objekat.setStranica(a);
                           rezultat = objekat.getObim();
                            ui->label_4->setText("Obim sestougla je ");
                            resenje += QString::number(rezultat);
                            ui->textEdit->setText(resenje);
                        }
                        if(izbor == "Povrsina")
                        {
                            jednakostranicniTrougao objekat;
                            objekat.setStranica(a);
                            rezultat = objekat.getPovrsina();
                            ui->label_4->setText("Povrsina sestougla je ");
                            resenje += QString::number(rezultat);
                            ui->textEdit->setText(resenje);
                        }



    }
        }
