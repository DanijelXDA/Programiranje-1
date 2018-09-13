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
    double a, b2;
    QString stranica, t2;
    QMessageBox poruka;
    bool ok, r1,r2,r3;
    stranica = ui->lineEdit->text();
    a = stranica.toDouble(&ok);
    r1 = ui->radioButton->isChecked();
    r2 = ui->radioButton_2->isChecked();
    r3 = ui->radioButton_3->isChecked();
    if(stranica.isEmpty())
        {
            poruka.setText("NIste uneli nista!");
            poruka.exec();
            ui->lineEdit->setFocus();
        }
        else if(!ok)
        {
            poruka.setText("Niste uneli dobru vrednost za starnicu!");
            poruka.exec();
            ui->lineEdit->clear();
            ui->lineEdit->setFocus();
        }
        else if(a<=0.)
        {
            poruka.setText("Stranica mora biti pozitivna! ");
            poruka.exec();
            ui->lineEdit->clear();
            ui->lineEdit->setFocus();
        }
        else if(!r1 && !r2 && !r3)
        {
            poruka.setText("Niste odabrali nista od ponudjenog!");
            poruka.exec();
        }
        else
        {
            if(r1)
            {
                jednakostranicniTrougao objekat;
                objekat.setStranica(a);
                b2 = objekat.getPovrsina();
                ui->label_3->setText("Povrsina trougla!");

                t2 = QString::number(b2);
                ui->lineEdit_2->setText(t2);
            }
            if(r2)
            {
                kvadrat objekat;
                objekat.setStranica(a);
                ui->label_3->setText("Povrsina kvadrat!");
                b2 = objekat.getPovrsina();
                t2 = QString::number(b2);
                ui->lineEdit_2->setText(t2);
            }
            if(r3)
            {
                    kocka objekat;
                    objekat.setStranica(a);
                    ui->label_3->setText("Povrsina kocke");
                    b2 = objekat.getPovrsina();
                    t2 = QString::number(b2);
                    ui->lineEdit_2->setText(t2);
        }
     }

}
