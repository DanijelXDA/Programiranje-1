#include "nikola.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    nikola w;
    w.show();

    return a.exec();
}
