#include "p2.h"

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
