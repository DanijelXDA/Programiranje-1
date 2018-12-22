/* PROGRAM DEFINISE JEDAN REALNI NIZ OD 6 ELEMENATA.
ZATIM VEZUJEMO POKAZIVAC NA PRVI ELEMENT U NIZU I PRIKAZUJEMO VREDNOST NA KOJU ON POKAZUJE */
#include <stdio.h>

int main(void)
{
    float niz[10] = {12.1, 5.56, 3, 5, 66.6, 100};
    float *pok = niz; // vezujemo pok na poslednji element niza

    printf("\nPokazivac pokazuje na prvi element u nizu i ima vrednost %f\n", *pok);

    return 0;
}
