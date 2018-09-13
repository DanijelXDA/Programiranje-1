/* Primenom metode zamene suseda sortirati elemente      */
/* unetog realnog niza (double) po opadajucem redosledu. */
/*                     bubble sort                       */


#include <stdio.h>

#define MAX 30      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, i, j, dalje; /* Promenljive u vezi sa indeksima niza. */
                        /* Ove promenljive su uvek celobrojne!!! */

    double a[MAX], p;   /* Promenljive u vezi sa nizom.          */
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
        scanf("%lf", &a[i]);        /* konverzija zavisi od tipa elementa niza */
    }

    /* Sortiranje elemenata niza */
    for(dalje=1, i=0; i<n-1 && dalje; i++){
        for(dalje=0, j=n-1; j>i; j--)
            if(a[j-1]<a[j]){          /* znak > u pitanju se postavlja za */
                p      = a[j-1];      /* sortiranje po rastucem redosledu */
                a[j-1] = a[j];
                a[j]   = p;
                dalje  = 1;
            }
    }

    /* Prikaz sortiranog niza */
    printf("\n\nPrikaz sortiranog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %lf\n", i, a[i]);   /* prva konverzija je uvek %d, */
                                            /* druga konverzija zavisi od  */
                                            /* tipa elementa niza          */

    return 0;
}
