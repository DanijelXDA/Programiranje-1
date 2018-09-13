/* Pomeranje elemenata niza za k mesta ulevo */
/*                                            */

#include <stdio.h>

#define MAX 50      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, i, j, k; /* Promenljive u vezi sa indeksima niza. */
                    /* Ove promenljive su uvek celobrojne!!! */

    int a[MAX], pomoc[MAX];  /* Promenljive u vezi sa nizom.          */
                             /* Tipovi ovih promenljivih zavise       */
                             /* od tipa elemenata niza                */

    /* Odredjivanje broja elemenata u nizu */
    do{
        printf("\n\nUnesite velicinu niza (max = %d): ", MAX);
        scanf("%d", &n);            /* uvek je %d konverzija */
    }while(n<1||n>MAX);

    /* Ucitavanje elemenata niza, jedan po jedan */
    printf("\n\nUnos elemenata niza:");
    for(i=0; i<n; i++){
        printf("\na[%d] = ", i);    /* uvek je %d konverzija */
        scanf("%d", &a[i]);         /* konverzija zavisi od tipa elementa niza */
    }

    /* Odredjivanje broja pomeranja elemenata u nizu */
    do{
        printf("\n\nUnesite za koliko mesta pomerate elemente niza ulevo: ");
        scanf("%d", &k);            /* uvek je %d konverzija */
    }while(k<1);

    k %= n;                         /* k je u opsegu od 0 do n-1          */

    /* Pomeranje elemenata niza za k mesta ulevo                          */
    for(i=0; i<k; i++)              // izdvajanje k elemenata
        pomoc[i] = a[i];            // sa leve strane niza

    for(i=0; i<n-k; i++)            // pomeranje elemenata za k mesta
        a[i] = a[i+k];

    for(i=n-k, j=0; i<n; i++, j++)  // ubacivanje izdvojenih k elemenata
        a[i] = pomoc[j];          // na kraj niza


    /* Prikaz novonastalog niza */
    printf("\n\nPrikaz novonastalog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %d\n", i, a[i]);   /* prva konverzija je uvek %d, */
                                           /* druga konverzija zavisi od  */
                                           /* tipa elementa niza          */

    return 0;
}
