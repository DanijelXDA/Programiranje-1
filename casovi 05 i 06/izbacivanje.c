/* Izbacivanje elementa sa k-te pozicije u nizu */

#include <stdio.h>

#define MAX 50      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, i, k;             /* Promenljive u vezi sa indeksima niza. */
                             /* Ove promenljive su uvek celobrojne!!! */

    int a[MAX], broj;        /* Promenljive u vezi sa nizom.          */
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

    /* Odredjivanje pozicije izbacivanja elementa iz niza */
    do{
        printf("\nBroj mozete izbaciti sa pozicije od 0 do %d.\n\n", n-1);
        printf("\n\nUnesite sa koje pozicije u nizu izbacujete element: ");
        scanf("%d", &k);            /* uvek je %d konverzija */
    }while(k<0 || k>n-1);

    /* Izbacivanje broja iz niza sa k-te pozicije */
    for(i=k; i<n-1; i++)               // pomeranje elemenata za 1 mesto
        a[i] = a[i+1];

    n--;                  // azuriranje broja elemenata u nizu

    /* Prikaz novonastalog niza */
    printf("\n\nPrikaz novonastalog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %d\n", i, a[i]);   /* prva konverzija je uvek %d, */
                                           /* druga konverzija zavisi od  */
                                           /* tipa elementa niza          */

    return 0;
}
