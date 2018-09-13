/* Primenom metode izbora (selekcije) sortirati elemente */
/* unetog celobrojnog niza po rastucem redosledu         */
/*                    selection sort                     */


#include <stdio.h>

#define MAX 50      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, i, j;    /* Promenljive u vezi sa indeksima niza. */
                    /* Ove promenljive su uvek celobrojne!!! */

    int a[MAX], p;  /* Promenljive u vezi sa nizom.          */
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

    /* Sortiranje elemenata niza */
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i]>a[j])           /* znak > u pitanju se postavlja za */
            {                       /* sortiranje po rastucem redosledu */
                p    = a[i];
                a[i] = a[j];
                a[j] = p;
            }

    /* Prikaz sortiranog niza */
    printf("\n\nPrikaz sortiranog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %d\n", i, a[i]);    /* prva konverzija je uvek %d, */
                                            /* druga konverzija zavisi od  */
                                            /* tipa elementa niza          */

    return 0;
}
