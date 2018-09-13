#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "cmath"

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

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    double a, o, p, d;
        QString stranica,nista;
        QMessageBox poruka;
        bool ok;
        bool c1 = ui->checkBox->isChecked();
        bool c2 = ui->checkBox_2->isChecked();
        bool c3  = ui->checkBox_3->isChecked();
        stranica = ui->lineEdit->text();
        a = stranica.toDouble(&ok);
        if(stranica.isEmpty())
        {
            poruka.setText("Niste uneli nista za stranicu");
            poruka.exec();
            ui->lineEdit->setFocus();
        }
        else if(!ok)
        {
            poruka.setText("Niste uneli dobru vrednost za stranicu");
            poruka.exec();
            ui->lineEdit->clear();
            ui->lineEdit->setFocus();
        }
        else if(a <= 0.)
        {
            poruka.setText("Niste uneli pozitivnu za stranicu");
            poruka.exec();
            ui->lineEdit->clear();
            ui->lineEdit->setFocus();
        }
        else
        {
            if(!c1 && !c2 && !c3){
            nista = "Niste odabrali nista";
            ui->textEdit->setText(nista);
            }
            if(c1)
            {
                o = 4.*a;
                nista += " Obim iznosi ";
                nista += QString::number(o) + "\n";

            }
            if(c2)
            {
                p = a * a;
                nista += " Povrsina iznosi ";
                nista += QString::number(p)+ "\n";

            }
            if(c3)
            {
                d = a * sqrt(2.);
                nista += " Dijagonala iznosi ";
                nista += QString::number(d)+ "\n";

            }
            ui->textEdit->setText(nista);
        }
}
