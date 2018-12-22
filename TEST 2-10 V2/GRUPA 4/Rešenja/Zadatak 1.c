/* PROGRAM UCITAVA NIZ OD N ELEMENATA, ZATIM SE KORISNIK PITA DA UNESE INDEKS ELEMENTA KOJI BI DA PRIKAZE.
ZATIM POKAZIVAC VEZUJEMO ZA NIZ[K] I PRIKAZUJEMO VREDNOST ELEMENTA NA KOJI POKAZIVAC POKAZUJE */
#include <stdio.h>

int main(void)
{
    int i, k, n, niz[50];
    int *pok;

    do {
        printf("Unesite velicinu niza:\n>> ");
        scanf("%d", &n);
    } while(n < 1 || n > 50);

    do {
        printf("\nUnesite indeks elementa u nizu koji bi da prikazate?\n>> ");
        scanf("%d", &k);
    } while( k < 1 || k >= n );

    printf("\nUnos niza\n");
    for(i = 0; i < n; i++)
    {
        printf("\tUnesite niz[%d] = ", i);
        scanf("%d", niz + i);
    }

    pok = niz + k; // Pokazivac pokazuje na niz[k]

    printf("\nPokazivac pokazuje na niz[%d] element u nizu i ima vrednost %d\n", k, *pok);

    return 0;
}
