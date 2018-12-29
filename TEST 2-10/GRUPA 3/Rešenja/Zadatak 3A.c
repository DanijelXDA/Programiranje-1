/* PROGRAM UCITAVA CELOBROJNI NIZ OD 5 ELEMENATA, ZATIM NIZ INVERTUJE I PRIKAZUJE INVERTOVANI NIZ.
NIZ SE INVERTUJE BEZ FUNKCIJE */
#include <stdio.h>

int main(void)
{
    int niz[5];
    int i, temp;

    printf("Unos niza\n");
    for(i = 0; i < 5; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }


    // INVERTOVANJE NIZA
    for(i = 0; i < 5 / 2; i++) {
        temp = niz[i];
        niz[i] = niz[5 - 1 - i];
        niz[5 - 1 - i] = temp;
    }

    // PRIKAZ INVERTOVANOG NIZA
    printf("\nNakon invertovanja niza\n");
    for(i = 0; i < 5; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}
