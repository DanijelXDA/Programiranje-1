/* Primenom metode umetanja (insertion) sortirati elemente */
/* unetog realnog (double) niza po opadajucem redosledu.   */
/*                    insertion sort                       */


#include <stdio.h>

#define MAX 30      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, m, i, j;    /* Promenljive u vezi sa indeksima niza. */
                       /* Ove promenljive su uvek celobrojne!!! */

    double a[MAX], p;  /* Promenljive u vezi sa nizom.          */
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
    for(i=1; i<n; i++)
        for(j=i-1; j>=0 && a[j]<a[j+1]; j--){
            p    = a[j];           /* znak < u pitanju se postavlja za   */
            a[j] = a[j+1];         /* sortiranje po opadajucem redosledu */
            a[j+1] = p;
            }

    /* Prikaz sortiranog niza */
    printf("\n\nPrikaz sortiranog niza:\n");
    for(i=0; i<n; i++)
        printf("a[%d] = %lf\n", i, a[i]);   /* prva konverzija je uvek %d, */
                                            /* druga konverzija zavisi od  */
                                            /* tipa elementa niza          */

    return 0;
}
