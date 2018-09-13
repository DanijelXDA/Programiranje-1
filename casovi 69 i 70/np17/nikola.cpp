#include "nikola.h"
#include "ui_nikola.h"
#include <QMessageBox>


nikola::nikola(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nikola)
{
    ui->setupUi(this);
}

nikola::~nikola()
{
    delete ui;
}

void nikola::on_pushButton_2_clicked()
{
    this -> close();
}

void nikola::on_pushButton_clicked()
{
    QString stranica1 , stranica2 , resenje = " " ;
    double a , b , o , p ;
    QMessageBox poruka ;
    bool ok1 ,ok2 ;
    bool r1 = ui->radioButton->isChecked();
    bool r2 = ui->radioButton_2->isChecked();
    bool r3 = ui->radioButton_3->isChecked();
    stranica1 = ui->lineEdit->text();
    stranica2 = ui->lineEdit_2->text();
    a = stranica1.toDouble(&ok1);
    b = stranica2.toDouble(&ok2);
    if(stranica1.isEmpty())
    {
        poruka.setText("Niste uneli nikakvu vrednost!");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!ok1)
    {
        poruka.setText("Uneta vrednost mora biti broj!!");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(a<=0.)
    {
        poruka.setText("Broj mora biti pozitivan!");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }

    if(stranica2.isEmpty())
    {
        poruka.setText("Niste uneli nikakvu vrednost!");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!ok2)
    {
        poruka.setText("Uneta vrednost mora biti broj!");
        poruka.exec();
        ui->lineEdit_2->clear();
        ui->lineEdit->setFocus();
    }
    else if(a<=0.)
    {
        poruka.setText("Broj mora biti pozitivan!");
        poruka.exec();
        ui->lineEdit_2->clear();
        ui->lineEdit->setFocus();
    }
    else
    {
        if(!r1 && !r2 && !r3)
        {
            poruka.setText("Niste odabrali nijednu opciju!");
            poruka.exec();
            ui->textEdit->setText(resenje);
        }
        if(r1)
        {
            o = 2. * a + 2. * b ;
            resenje +="Obim  iznosi";
            resenje +=QString :: number(o) + "\n";
            ui->textEdit->setText(resenje);
        }
        if(r2)
        {
            p = a * b ;
            resenje +="Povrsina iznosi";
            resenje +=QString :: number(p) + "\n";
            ui->textEdit->setText(resenje);
        }
        if(r3)
        {
            o = 2. * a + 2. * b ;
            resenje +="Obim  iznosi";
            resenje +=QString :: number(o) + "\n";
            ui->textEdit->setText(resenje);

            p = a * b ;
            resenje +="Povrsina iznosi";
            resenje +=QString :: number(p) + "\n";
            ui->textEdit->setText(resenje);
        }
    }
}
