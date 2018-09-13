#ifndef KONEKCIJA_H
#define KONEKCIJA_H

#include <QtSql>


class Konekcija
{
public:
    Konekcija();
    void dbOpen();
    void dbClose();

private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPutanja = "C:/Users/Administrator/Documents/B32 mini/b32.db";  // Obavezno podesiti adresu baze!!!
};

#endif // KONEKCIJA_H
