#include <stdio.h>

#define MAX 50      /* Definisanje najveceg broja elementa u nizu */

int main(void)
{
    int n, i;       /* Promenljive u vezi sa indeksima niza. */
                    /* Ove promenljive su uvek celobrojne!!! */

    int a[MAX], p, *pok;  /* Promenljive u vezi sa nizom.          */
                    /* Tipovi ovih promenljivih zavise       */
                    /* od tipa elemenata niza                */

    /* Odredjivanje broja elemenata u nizu */
    do{
        printf("\n\nUnesite velicinu niza (max = %d): ", MAX);
        scanf("%d", &n);            /* uvek je %d konverzija */
    }while(n<1||n>MAX);

    /* Ucitavanje elemenata niza, jedan po jedan */
    printf("\n\nUnos elemenata niza:\n");
    for(pok=a; pok<a+n; pok++){
        scanf("%d", pok);         /* konverzija zavisi od tipa elementa niza */
    }

    /* Zamena mesta elementima niza */
    for(i=0; i<n/2; i++){
        p          = *(a+i);
        *(a+i)     = *(a+n-1-i);
        *(a+n-1-i) = p;
    }

    /* Prikaz invertovanog niza */
    printf("\n\nPrikaz invertovanog niza:\n");
    for(pok=a; pok<a+n; pok++)
        printf("%d\n", *pok);   /* prva konverzija je uvek %d, */
                                            /* druga konverzija zavisi od  */
                                            /* tipa elementa niza          */

    return 0;
}
