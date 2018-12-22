/* PROGRAM UCITAVA CELOBROJNI NIZ OD 5 ELEMENATA, ZATIM NIZ INVERTUJE I PRIKAZUJE INVERTOVANI NIZ.
NIZ SE INVERTUJE POMOCU FUNKCIJE */
#include <stdio.h>

void invertujNiz(int [], int);

int main(void)
{
    int niz[5];
    int i;

    printf("Unos niza\n");
    for(i = 0; i < 5; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }


    invertujNiz(niz, 5);

    // PRIKAZ INVERTOVANOG NIZA
    printf("\nNakon invertovanja niza\n");
    for(i = 0; i < 5; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}


void invertujNiz(int niz[], int n)
{
    int temp, i;

    // INVERTOVANJE NIZA
    for(i = 0; i < n / 2; i++) {
        temp = niz[i];
        niz[i] = niz[n - 1 - i];
        niz[n - 1 - i] = temp;
    }
}
