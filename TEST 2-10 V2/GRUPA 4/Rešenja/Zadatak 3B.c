/*  PROGRAM KOJI UCITAVA NIZ OD 15 ELEMENATA A ZATIM SORTIRA NIZ RASTUCE.
NIZ SE SORTIRA RASTUCE POMOCU FUNKCIJE */
#include <stdio.h>

void sortirajNizRastuce(int [], int);

int main(void)
{
    int niz[15];
    int i;

    printf("Unos niza\n");
    for(i = 0; i < 15; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }


    sortirajNizRastuce(niz, 15);

    // PRIKAZ SORTIRANOG NIZA
    printf("\nNakon sortiranja niza rastuce\n");
    for(i = 0; i < 15; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}

void sortirajNizRastuce(int niz[], int n)
{
    int i, j, temp;

    // SORTIRANJE NIZA
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(niz[i] > niz[j]) {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
}
