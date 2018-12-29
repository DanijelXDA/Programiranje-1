/*
PROGTAM UCITAVA CELOBROJNI NIZ OD 15 ELEMENATA.
ZATIM SE NIZ SORTIRA OPADAJUCE.
SORTIRARANJE SE VRSI POMOCU FUNKCIJE
*/
#include <stdio.h>

void sortirajNizOpadajuce(int [], int);

int main(void)
{
    int niz[15];
    int i;

    printf("Unos niza\n");
    for(i = 0; i < 15; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }


    sortirajNizOpadajuce(niz, 15);

    // PRIKAZ SORTIRANOG NIZA
    printf("\nNakon sortiranja niza opadajuce\n");
    for(i = 0; i < 15; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}

void sortirajNizOpadajuce(int niz[], int n)
{
    int i, j, temp;

    // SORTIRANJE NIZA
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(niz[i] < niz[j]) {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
}
