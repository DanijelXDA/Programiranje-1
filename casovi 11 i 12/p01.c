#include <stdio.h>

#define MAX 30      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n;          /* Promenljive u vezi sa indeksima niza. */
                    /* Ove promenljive su uvek celobrojne!!! */

    int a[MAX], *m, p;  /* Promenljive u vezi sa nizom.          */
                        /* Tipovi ovih promenljivih zavise       */
                        /* od tipa elemenata niza                */


    /* Odredjivanje broja elemenata u nizu */
    do{
        printf("\n\nUnesite velicinu niza (max = %d): ", MAX);
        scanf("%d", &n);            /* uvek je %d konverzija */
    }while(n<1||n>MAX);

    /* Ucitavanje elemenata niza, jedan po jedan */
    printf("\n\nUnos elemenata niza:\n");
    for(m=a; m<a+n; m++){
        scanf("%d", m);             /* konverzija zavisi od tipa elementa niza */
    }

    /* Pomeranje elemenata niza udesno za 1 mesto */
    p = *(a+n-1);
    for(m=a+n-1; m>a; m--)
        *m = *(m-1);

    *a = p;


    /* Prikaz novonastalog niza */
    printf("\n\nPrikaz novonastalog niza:\n");
    for(m=a; m<a+n; m++)
        printf("%d\n", *m);      /* konverzija zavisi od  */
                                 /* tipa elementa niza    */

    return 0;
}
