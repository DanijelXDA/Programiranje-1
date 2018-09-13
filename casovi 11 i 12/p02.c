/* Primenom metode izbora (selekcije) sortirati elemente */
/* unetog celobrojnog niza po rastucem redosledu         */
/*                    selection sort                     */


#include <stdio.h>

#define MAX 25      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n;          /* Promenljive u vezi sa indeksima niza. */
                    /* Ove promenljive su uvek celobrojne!!! */

    int a[MAX], p, *x, *y;  /* Promenljive u vezi sa nizom.          */
                            /* Tipovi ovih promenljivih zavise       */
                            /* od tipa elemenata niza                */

    /* Odredjivanje broja elemenata u nizu */
    do{
        printf("\n\nUnesite velicinu niza (max = %d): ", MAX);
        scanf("%d", &n);            /* uvek je %d konverzija */
    }while(n<1||n>MAX);

    /* Ucitavanje elemenata niza, jedan po jedan */
    printf("\n\nUnos elemenata niza:\n");
    for(x=a; x<a+n; x++){
        scanf("%d", x);         /* konverzija zavisi od tipa elementa niza */
    }

    /* Sortiranje elemenata niza */
    for(x=a; x<a+n-1; x++)
        for(y=x+1; y<a+n; y++)
            if(*x>*y)           /* znak > u pitanju se postavlja za */
            {                   /* sortiranje po rastucem redosledu */
                p  = *x;
                *x = *y;
                *y = p;
            }

    /* Prikaz sortiranog niza */
    printf("\n\nPrikaz sortiranog niza:\n");
    for(x=a; x<a+n; x++)
        printf("%d\n", *x);    /* konverzija zavisi od  */
                               /* tipa elementa niza    */

    return 0;
}
