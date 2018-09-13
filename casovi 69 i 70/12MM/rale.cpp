#include "rale.h"
#include "ui_rale.h"
#include "cmath"
#include "QMessageBox"

rale::rale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rale)
{
    ui->setupUi(this);
}

rale::~rale()
{
    delete ui;
}

void rale::on_pushButton_2_clicked()
{
    this->close();
}

void rale::on_pushButton_clicked()
{
    bool iz1, iz2, iz3, ok1, ok2;
    double r, a, b;
    QString poruka,poruka2,poruka3, rezultat,rezultat2,rezultat3;

    iz1 = ui->checkBox->isChecked();
    iz2 = ui->checkBox_2->isChecked();
    iz3 = ui->checkBox_3->isChecked();

    a = ui->lineEdit->text().toDouble(&ok1);
    b = ui->lineEdit_2->text().toDouble(&ok2);

    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"Upozorenje!","Niste uneli prvu stranicu pravougaonika!");
        ui->lineEdit->setFocus();
    }
    else if(ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::warning(this,"Upozorenje","Niste uneli drugu stranicu pravougaonika!");
        ui->lineEdit_2->setFocus();
    }
    else if(!ok1)
    {
        QMessageBox::warning(this,"Upozorenje!","Prva stranica pravougaonika mora biti broj!");
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(!ok2)
    {
        QMessageBox::warning(this,"Upozorenje!","Druga stranica pravougaonika mora biti broj!");
        ui->lineEdit_2->clear();
        ui->lineEdit_2->setFocus();
    }
    else if(a <= 0.)
    {
        QMessageBox::warning(this,"Upozorenje!","Prva stranica pravougaonika mora biti veca od nule!");
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }
    else if(b <= 0.)
    {
        QMessageBox::warning(this,"Upozorenje!","Druga stranica pravougaonika mora biti veca od nule!");
        ui->lineEdit_2->clear();
        ui->lineEdit_2->setFocus();
    }
    else
    {
        if(!iz1 && !iz2 && !iz3)
        {
            QMessageBox::warning(this,"Upozorenje!","Niste izabrali niti jedno izracunavanje!");
        }
        if(iz1)
        {
            r = 2*a + 2*b;
            rezultat = QString::number(r);
            poruka += "Obim pravougaonika iznosi: " + rezultat + '\n';
            ui->textEdit->setText(poruka);
        }
        if(iz2)
        {
            r = a*b;
            rezultat2 = QString::number(r);
            poruka2 += "Povrstina pravougaonika iznosi: " + rezultat2 + '\n';
            ui->textEdit->setText(poruka2);
        }
        if(iz3)
        {
            r = sqrt(a*a + b*b);
            rezultat3 = QString::number(r);
            poruka3 += "Dijagonala pravougaonika iznosi: " + rezultat3 + '\n';
            ui->textEdit->setText(poruka3);
        }
    }
    ui->lineEdit->setFocus();
}
