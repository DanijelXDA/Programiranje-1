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
  double r,o,p,R;
QString poluprecnik ,nista;
QMessageBox poruka;
bool ok;
bool c1 = ui->checkBox->isChecked();
bool c2 = ui->checkBox_2->isChecked();
bool c3 = ui->checkBox_3->isChecked();
poluprecnik = ui->lineEdit->text();
r = poluprecnik.toDouble(&ok);
if(poluprecnik.isEmpty())
{
    poruka.setText("Niste uneli poluprecnik kurga");
    poruka.exec();
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}




 else if (!ok)
{

poruka.setText("Niste uneli broj za poluprecnik");
poruka.exec();
ui->lineEdit->clear();
ui->lineEdit->setFocus();
}
else if(r <= 0.)
{
poruka.setText("Poluprecnik mora biti veci od nule");
poruka.exec();
ui->lineEdit->setFocus();

}
else
{
if(!c1 && !c2 && !c3)
nista = "niste odabrali nista";
}
if(c1)
{
o = 2 * r ;
nista += "Obim kruga iznosi";
nista += QString::number(o) +"\n";

}
if(c2)
{
p = r * r ;
nista += "Povrsina kruga inzosi";
nista += QString::number(p)+ "\n";

}
if(c3)
{
R = 2 * r ;
nista += "Precnik kruga iznosi";
nista += QString::number(R)+ "\n";
}
ui->textEdit->setText(nista);

}




