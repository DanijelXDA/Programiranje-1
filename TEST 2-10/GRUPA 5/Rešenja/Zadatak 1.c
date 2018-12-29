/* PROGRAM DEFINISE JEDAN REALNI NIZ OD 6 ELEMENATA.
ZATIM VEZUJEMO POKAZIVAC NA NIZ[5] (POSLEDNJI ELEMENT U NIZU) I PRIKAZUJEMO VREDNOST NA KOJU ON POKAZUJE */
#include <stdio.h>

int main(void)
{
    float niz[6] = {12.1, 5.56, 3, 5, 66.6, 100};
    float *pok = niz + 5; // vezujemo pok na poslednji element niza

    printf("\nPokazivac pokazuje na poslednji element u nizu i ima vrednost %f\n", *pok);

    return 0;
}
