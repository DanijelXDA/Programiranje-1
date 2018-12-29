/*  PROGRAM KOJI UCITAVA NIZ OD 15 ELEMENATA A ZATIM SORTIRA NIZ RASTUCE.
NIZ SE SORTIRA RASTUCE BEZ FUNKCIJE */
#include <stdio.h>

int main(void)
{
    int niz[15];
    int i, j, temp;

    printf("Unos niza\n");
    for(i = 0; i < 15; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    // SORTIRANJE NIZA
    for(i = 0; i < 14; i++)
        for(j = i + 1; j < 15; j++)
            if(niz[i] > niz[j]) {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }

    // PRIKAZ SORTIRANOG NIZA
    printf("\nNakon sortiranja niza rastuce\n");
    for(i = 0; i < 15; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}
