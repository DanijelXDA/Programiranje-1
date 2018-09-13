/********************************************************************************
** Form generated from reading UI file 'glavniprozor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLAVNIPROZOR_H
#define UI_GLAVNIPROZOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlavniProzor
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GlavniProzor)
    {
        if (GlavniProzor->objectName().isEmpty())
            GlavniProzor->setObjectName(QStringLiteral("GlavniProzor"));
        GlavniProzor->resize(463, 375);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(12);
        GlavniProzor->setFont(font);
        centralWidget = new QWidget(GlavniProzor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 401, 71));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 40, 277, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 70, 401, 101));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 30, 161, 17));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 50, 161, 17));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 70, 171, 17));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 170, 401, 91));
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 381, 64));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 270, 181, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        GlavniProzor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GlavniProzor);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 463, 26));
        GlavniProzor->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GlavniProzor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GlavniProzor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GlavniProzor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GlavniProzor->setStatusBar(statusBar);

        retranslateUi(GlavniProzor);

        QMetaObject::connectSlotsByName(GlavniProzor);
    } // setupUi

    void retranslateUi(QMainWindow *GlavniProzor)
    {
        GlavniProzor->setWindowTitle(QApplication::translate("GlavniProzor", "GlavniProzor", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("GlavniProzor", "Ulazni podaci", Q_NULLPTR));
        label->setText(QApplication::translate("GlavniProzor", "Poluprecnik kruga:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("GlavniProzor", "Vrsta proracuna", Q_NULLPTR));
        radioButton->setText(QApplication::translate("GlavniProzor", "Obim kruga", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("GlavniProzor", "Povrsina kuga", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("GlavniProzor", "I obim i povrsina kruga", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("GlavniProzor", "Rezultat", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GlavniProzor", "Izracunaj", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GlavniProzor", "Kraj programa", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GlavniProzor: public Ui_GlavniProzor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLAVNIPROZOR_H
