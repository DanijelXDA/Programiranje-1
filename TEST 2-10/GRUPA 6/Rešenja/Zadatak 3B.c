#include <stdio.h>

void prvoPojavljivanje(int [], int, int);

int main(void)
{
    int niz[10];
    int i, broj;

    printf("Unos niza\n");
    for(i = 0; i < 10; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    printf("\nUnesite koji broj trazite u nizu\n>> ");
    scanf("%d", &broj);

    prvoPojavljivanje(niz, 10, broj);

    return 0;
}

void prvoPojavljivanje(int niz[], int n, int broj)
{
    int i;

    // PRETRAGA NIZA - PRVO POJAVLJIVANJE
    for(i = 0; i < n; i++)
        if(niz[i] == broj)
            break;

    if(i == n) // presli smo ceo niz, nema pojavljivanja i iskakanja iz petlje
        printf("\nTrazeni element se ne nalazi u nizu!\n");
    else
        printf("\nTrazeni element se nalazi u nizu sa indeksom %d i ima vrednost %d.\n", i, niz[i]);
}
