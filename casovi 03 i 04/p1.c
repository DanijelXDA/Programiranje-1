#include <stdio.h>

/* Definisanje novog tipa podataka u programu */
typedef struct{
    double poluprecnik;
    double obim;
    double povrsina;
} Krug;

/* Prototipovi funkcija koje cemo definisati u programu */
void unesiPoluprecnik(Krug *);
void izracunajObim(Krug *);
void izracunajPovrsinu(Krug *);
void prikaziRezultate(Krug);


/* Glavni program */
int main(void)
{
    Krug k;     // Deklarisanje promenljive k koja je tipa Krug

    unesiPoluprecnik(&k);    // Pozivanje funkcije
    izracunajObim(&k);
    izracunajPovrsinu(&k);
    prikaziRezultate(k);

    return 0;
}

/* Funkcija koja ucitava vrednost poluprecnika */
void unesiPoluprecnik(Krug *x)
{
    double r;
    do{
        printf("\nUnesite vrednost za poluprecnik kruga: ");
        scanf("%lf", &r);
    }while(r <= 0.);

    (*x).poluprecnik = r;

    return;
}

/* Funkcija koja izracunava obim kruga */
void izracunajObim(Krug *x)
{
    (*x).obim = 2. * (*x).poluprecnik * 3.14159;
    return;
}

/* Funkcija koja ucitava povrsinu kruga */
void izracunajPovrsinu(Krug *x)
{
    (*x).povrsina = (*x).poluprecnik * (*x).poluprecnik * 3.14159;
    return;
}

/* Funkcija koja prikazuje vrednosti za obim i povrsinu kruga */
void prikaziRezultate(Krug x)
{
    printf("\n\nZa krug poluprecnika %lf", x.poluprecnik);
    printf("\nobim iznosi %lf,\na povrsina %lf\n\n", x.obim, x.povrsina);
    return;
}
