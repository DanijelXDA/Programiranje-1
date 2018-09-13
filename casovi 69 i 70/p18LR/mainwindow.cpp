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
    QString stranica, resenje="";
    double r, p, o;
    QMessageBox poruka;
    bool ok;
    bool r1=ui->radioButton->isChecked();
    bool r2=ui->radioButton_2->isChecked();
    bool r3=ui->radioButton_3->isChecked();
    stranica=ui->lineEdit->text();
    r=stranica.toDouble(&ok);

    if(stranica.isEmpty()){
        poruka.setText("Morate uneti neki broj.");
        poruka.exec();
        ui->lineEdit->setFocus();
       }
    else if(!ok){
        poruka.setText("Morate uneti neki broj.");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(r<=0.){
        poruka.setText("Morate uneti pozitivan broj.");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }

    else
        if(r1){
        o=2. * r * 3.14;
        resenje += "Obim kruga iznosi ";
        resenje += QString::number(o);
        ui->textEdit->setText(resenje);
        }

        if(r2){
        p=r * r * 3.14;
        resenje += "Povrsina kruga iznosi ";
        resenje += QString::number(p);
        ui->textEdit->setText(resenje);
        }

        if(r3){
        o=2. * r * 3.14;
        resenje += "Obim kruga iznosi ";
        resenje += QString::number(o);
        ui->textEdit->setText(resenje);

        p=r * r * 3.14;
        resenje +="\n""Povrsina kruga iznosi ";
        resenje += QString::number(p);
        ui->textEdit->setText(resenje);
        }


}
