#include "glavniprozor.h"
#include "ui_glavniprozor.h"
#include<QMessageBox>
#include<cmath>
GlavniProzor::GlavniProzor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GlavniProzor)
{
    ui->setupUi(this);
}

GlavniProzor::~GlavniProzor()
{
    delete ui;
}

void GlavniProzor::on_pushButton_2_clicked()
{
    this->close();
}

void GlavniProzor::on_pushButton_clicked()
{
    QString poluprecnik,resenje;
    double r,o,p;
    bool ok;
    bool r1=ui->radioButton->isChecked();
       bool r2=ui->radioButton_2->isChecked();
          bool r3=ui->radioButton_3->isChecked();
    poluprecnik=ui->lineEdit->text();
    r=poluprecnik.toDouble(&ok);
    if(poluprecnik.isEmpty())
    {
        QMessageBox::information(this,"Poruka","Niste nista uneli za poluprecnik kruga!");
        ui->lineEdit->setFocus();
    }
   else if(!ok)
    {
        QMessageBox::information(this,"Poruka","Niste  uneli brojnu vrednost za poluprecnik kruga!");
          ui->lineEdit->clear();
        ui->lineEdit->setFocus();

    }
  else  if(r<=0.)
    {
        QMessageBox::information(this,"Poruka","Niste  uneli broj veci od 0 za poluprecnik kruga!");
          ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
  else  if(!r1 && !r2 && !r3)
    {
        QMessageBox::information(this,"Poruka","Niste odabrali nijednu vrstu proracuna!");
        ui->lineEdit->setFocus();
    }
    else
    {
        if(r1)
        {
            o=2*r*3.14;
            resenje+="Obim iznosi:";
            resenje+=QString::number(o);
            ui->textEdit->setText(resenje);
        }
        if(r2)
        {
            p=r*r*3.14;
            resenje+="Povrsina iznosi:";
            resenje+=QString::number(p);
            ui->textEdit->setText(resenje);
        }
        if(r3)
        {
            o=2*r*3.14;
            resenje+="Obim iznosi:";
            resenje+=QString::number(o);
            ui->textEdit->setText(resenje);
            resenje+="\n";
            p=r*r*3.14;
            resenje+="Povrsina iznosi:";
            resenje+=QString::number(p);
            ui->textEdit->setText(resenje);
        }
    }
}
