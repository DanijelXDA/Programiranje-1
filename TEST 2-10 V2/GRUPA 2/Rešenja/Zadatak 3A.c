/* PROGRAM UCITAVA CELOBROJNI NIZ OD 10 ELEMENATA, ZATIM TAJ NIZ ROTIRA ULEVO ZA JEDNO MESTO I
PRIKAZUJE ROTIRANI NIZ
NIZ SE ROTIRA ULEVO BEZ UPOTREBE FUNKCIJE */
#include <stdio.h>

int main(void)
{
    int niz[10];
    int i, temp;

    printf("Unos niza\n");
    for(i = 0; i < 10; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    temp = niz[0];
    // ROTIRANJE NIZA ULEVO ZA JEDNO MESTO
    for(i = 1; i < 10; i++) {
        niz[i - 1] = niz[i];
    }
    niz[9] = temp;

    // PRIKAZ ROTIRANOG NIZA
    printf("\nNakon rotiranja ulevo za jedno mesto\n");
    for(i = 0; i < 10; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}
