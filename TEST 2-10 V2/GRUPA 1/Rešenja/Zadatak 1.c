/* PROGRAM DEFINISE JEDAN CELOBROJNI NIZ OD 5 ELEMENATA.
ZATIM SE DEKLARISE I DEFINISE POKAZIVAC NA CELOBROJNI PODATAK I ZATIM TAJ POKAZIVAC VEZUJEMO ZA NIZ[2] I PRIKAZUJEMO
VREDNOST NA KOJU POKAZIVAC POKAZUJE */
#include <stdio.h>

int main(void)
{
    int niz[5] = {12, 25, 30, 45, 9};
    int *pok = niz + 2; // vezujemo pok na 3. element niza

    printf("\nPokazivac pokazuje na element niz[3] i ima vrednost %d\n", *pok);

    return 0;
}
