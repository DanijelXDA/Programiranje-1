/* Pomeranje elemenata niza za k mesta udesno */
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
        printf("\n\nUnesite za koliko mesta pomerate elemente niza udesno: ");
        scanf("%d", &k);            /* uvek je %d konverzija */
    }while(k<1);

    k %= n;                         /* k je u opsegu od 0 do n-1

    /* Pomeranje elemenata niza za k mesta */
    for(i=n-1, j=k-1 ; j>=0; i--, j--)  // izdvajanje k elemenata
        pomoc[j] = a[i];                // sa desne strane niza

    for(i=n-1; i>=k; i--)               // pomeranje elemenata za k mesta
        a[i] = a[i-k];

    for(i=0; i<k; i++)                  // ubacivanje izdvojenih k elemenata
        a[i] = pomoc[i];                // na pocetak niza


    /* Prikaz novonastalog niza */
    printf("\n\nPrikaz novonastalog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %d\n", i, a[i]);   /* prva konverzija je uvek %d, */
                                           /* druga konverzija zavisi od  */
                                           /* tipa elementa niza          */

    return 0;
}
