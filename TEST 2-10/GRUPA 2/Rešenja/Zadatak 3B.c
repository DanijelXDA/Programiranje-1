/* PROGRAM UCITAVA CELOBROJNI NIZ OD 10 ELEMENATA, ZATIM TAJ NIZ ROTIRA UDESNO ZA JEDNO MESTO I
PRIKAZUJE ROTIRANI NIZ
NIZ SE ROTIRA ULEVO POMOCU FUNKCIJE */
#include <stdio.h>

void rotirajUlevo(int [], int);

int main(void)
{
    int niz[10];
    int i, temp;

    printf("Unos niza\n");
    for(i = 0; i < 10; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }


    rotirajUlevo(niz, 10);

    // PRIKAZ ROTIRANOG NIZA
    printf("\nNakon rotiranja ulevo za jedno mesto\n");
    for(i = 0; i < 10; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}


void rotirajUlevo(int niz[], int n)
{
    int temp, i;

    temp = niz[0];
    // ROTIRANJE NIZA ULEVO ZA JEDNO MESTO
    for(i = 1; i < n; i++) {
        niz[i - 1] = niz[i];
    }
    niz[n - 1] = temp;
}
