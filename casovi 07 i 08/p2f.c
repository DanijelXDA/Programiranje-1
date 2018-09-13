/* Primenom metode izbora (selekcije) sortirati elemente */
/* unetog realnog niza (float) po rastucem redosledu.    */
/* Izmenjena varijanta metoda izbora (selekcije)         */
/*                    selection sort                     */


#include <stdio.h>

#define MAX 25      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, m, i, j;   /* Promenljive u vezi sa indeksima niza. */
                      /* Ove promenljive su uvek celobrojne!!! */

    float a[MAX], p;  /* Promenljive u vezi sa nizom.          */
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
        scanf("%f", &a[i]);         /* konverzija zavisi od tipa elementa niza */
    }

    /* Sortiranje elemenata niza */
    for(i=0; i<n-1; i++){
        for(m=i, j=i+1; j<n; j++)
            if(a[m]>a[j])           /* znak > u pitanju se postavlja za */
                m = j;              /* sortiranje po rastucem redosledu */
            if(m != i){             /* ako smo pronasli manji element,   */
                p    = a[i];        /* tek onda menjamo mesta elementima */
                a[i] = a[m];
                a[m] = p;
            }
    }

    /* Prikaz sortiranog niza */
    printf("\n\nPrikaz sortiranog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %f\n", i, a[i]);    /* prva konverzija je uvek %d, */
                                            /* druga konverzija zavisi od  */
                                            /* tipa elementa niza          */

    return 0;
}
