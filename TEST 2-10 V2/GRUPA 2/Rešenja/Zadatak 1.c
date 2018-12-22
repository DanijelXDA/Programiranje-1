/* PROGRAM UCITAVA NIZ OD 8 ELEMENATA, ZATIM VEZUJEMO POKAZIVAC ZA NIZ[5]
I PRIKAZUJEMO VREDNOST NA KOJU POKAZIVAC POKAZUJE */
#include <stdio.h>

int main(void)
{
    int i, niz[8];
    int *pok = niz + 5; // pokazivac pokazuje na niz[5]

    for(i = 0; i < 8; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", niz + i);
    }

    printf("\nPokazivac pokazuje na element u niz[5] i ima vrednost %d\n", *pok);

    return 0;
}
