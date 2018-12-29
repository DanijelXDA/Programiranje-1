/* PROGRAM UCITAVA NIZ OD 6 ELEMENATA.
ZATIM POKAZIVAC NA CELOBROJNI NIZ VEZUJEMO ZA NIZ[K] (K JE INDEKS OD 0 DO 5 I UNOSI GA KORISNIK)
ZATIM PRIKAZUJE VREDNOST NA KOJU POKAZIVAC POKAZUJE */
#include <stdio.h>

int main(void)
{
    int i, k, niz[6];
    int *pok;

    do {
        printf("\nUnesite indeks elementa u nizu koji bi da prikazate?\n>> ");
        scanf("%d", &k);
    } while(k < 1 || k >= 6);

    printf("\nUnos niza\n");
    for(i = 0; i < 6; i++)
    {
        printf("\tUnesite niz[%d] = ", i);
        scanf("%d", niz + i);
    }

    pok = niz + k; // Pokazivac pokazuje na niz[k]

    printf("\nPokazivac pokazuje na %d. element u nizu i ima vrednost %d\n", k, *pok);

    return 0;
}
