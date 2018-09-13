/* Ubacivanje elementa na k-tu poziciju u nizu */

#include <stdio.h>

#define MAX 50      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, i, k, pozMaks;    /* Promenljive u vezi sa indeksima niza. */
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

    /* Odredjivanje koji se broj ubacuje u niz */
    printf("\n\nUnesite broj koji ubacujete u niz: ");
    scanf("%d", &broj);            /* konverzija zavisi od tipa elementa niza */

    /* Odredjivanje poziciju ubacivanja elementa u niz */
    pozMaks = (n<MAX)?n:(n-1);
    do{
        printf("\nBroj mozete ubaciti na pozicije od 0 do %d.\n\n", pozMaks);
        printf("\n\nUnesite na koju poziciju ubacujete uneti broj u niz: ");
        scanf("%d", &k);            /* uvek je %d konverzija */
    }while(k<0 || k>pozMaks);

    if(n<MAX) n++;                  /* da li ima mesta u nizu za ubacivanje */

    /* Ubacivanje broja u niz na k-tu poziciju */
    for(i=n-1; i>k; i--)               // pomeranje elemenata za 1 mesto
        a[i] = a[i-1];

    a[k] = broj;                  // ubacivanje broja na k-tu poziciju

    /* Prikaz novonastalog niza */
    printf("\n\nPrikaz novonastalog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %d\n", i, a[i]);   /* prva konverzija je uvek %d, */
                                           /* druga konverzija zavisi od  */
                                           /* tipa elementa niza          */

    return 0;
}
