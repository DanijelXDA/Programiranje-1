#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
    this->close();
}

void Widget::on_pushButton_clicked()
{
    QMessageBox poruka;
    QString ime, prezime, ispis;
    ime = ui->lineEdit->text();
    prezime = ui->lineEdit_2->text();
    bool r1 = ui->radioButton_1->isChecked();
    bool r2 = ui->radioButton_2->isChecked();
    bool rb1 = ui->radioButton_3->isChecked();
    bool rb2 = ui->radioButton_4->isChecked();
    bool rb3 = ui->radioButton_5->isChecked();
    if(ime.isEmpty())
    {
        poruka.setText("Niste uneli ime!");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(prezime.isEmpty())
    {
        poruka.setText("Niste uneli prezime!");
        poruka.exec();
        ui->lineEdit->setFocus();
    }
    else if(!r1 && !r2)
    {
        poruka.setText("Niste odabrali pol!");
        poruka.exec();
    }
    else if(!rb1 && !rb2 && !rb3)
    {
        poruka.setText("Niste odabrali obrazovni profil!");
        poruka.exec();
    }
    else
    {
        if(r1)
            ispis = " " + ime + " " + prezime + ""+" je upisan na obrazovni profil ";
        if(r2)
            ispis = " " + ime + " " + prezime + ""+" je upisana na obrazovni profil ";
        if(rb1)
            ispis += " Elektrotehnicar energetike.";
        if(rb2)
            ispis += " Elektrotehnicar informacionih tehnologija.";
        if(rb3)
            ispis += " Elektrotehnicar multimedija.";
        ui->textEdit->setText(ispis);
    }

}
