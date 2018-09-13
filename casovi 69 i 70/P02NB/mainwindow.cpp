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
    double a, b, o, p;
    QString stranicaA, stranicaB, prazno;
    QMessageBox poruka;
    bool ok1, ok2;
    bool r1 = ui->radioButton->isChecked();
    bool r2 = ui->radioButton_2->isChecked();
    bool r3 = ui->radioButton_3->isChecked();
    bool error1, error2;

    stranicaA = ui->lineEdit->text();
    a = stranicaA.toDouble(&ok1);
    stranicaB = ui->lineEdit_2->text();
    b = stranicaB.toDouble(&ok2);
    error1 = (stranicaA.isEmpty())||!ok1||(a<=0.);
    error2 = (stranicaB.isEmpty())||!ok2||(b<=0.);

    if(error1 && error2){

    if(stranicaA.isEmpty())
    {
        poruka.setText("Niste uneli nista za prvu zadatu stranicu");
        poruka.exec();
        ui->lineEdit->setFocus();
    }

    else if(!ok1)
    {
        poruka.setText("Niste uneli broja za A");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }

    else if(a <= 0.)
    {
        poruka.setText("Niste uneli pozitivan broj za A");
        poruka.exec();
        ui->lineEdit->clear();
        ui->lineEdit->setFocus();
    }

        if(stranicaB.isEmpty())
            {
                poruka.setText("Niste uneli nista za drugu zadatu stranicu");
                poruka.exec();
                ui->lineEdit_2->setFocus();
            }



         else if(!ok2)
            {
                poruka.setText("Niste uneli broj za B");
                poruka.exec();
                ui->lineEdit_2->clear();
                ui->lineEdit_2->setFocus();
            }

         else if(b <= 0.)
            {
                poruka.setText("Niste uneli pozitivan broj za B");
                poruka.exec();
                ui->lineEdit_2->clear();
                ui->lineEdit_2->setFocus();
            }
    }

    else
    {
        if(!r1 && !r2 && !r3)
        {
            poruka.setText("Niste izabrali polje za izracunavanje");
            poruka.exec();
        }

        if(r1)
        {
            o = 2. * a + 2. * b;
            prazno = " Obim iznosi ";
            prazno += QString::number(o);
        }
        if(r2)
        {
             p = a * b;
             prazno += " Povrsina iznosi ";
             prazno += QString::number(p);

        }
        if(r3)
        {
            o = 2. * a + 2. * b;
            prazno = " Obim iznosi ";
            prazno += QString::number(o) + "\n";
            p = a * b;
            prazno += " Povrsina iznosi ";
            prazno += QString::number(p) + "\n";
        }
        ui->textEdit->setText(prazno);
    }
}
