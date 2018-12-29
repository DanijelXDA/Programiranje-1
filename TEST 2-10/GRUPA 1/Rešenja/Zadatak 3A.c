/* PROGRAM UCITAVA CELOBROJNI NIZ OD 10 ELEMENATA I ROTIRA NIZ UDESNO ZA JEDNO MESTO */
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

    temp = niz[9];
    // ROTIRANJE NIZA UDESNO ZA JEDNO MESTO
    for(i = 8; i >= 0; i--) {
        niz[i + 1] = niz[i];
    }
    niz[0] = temp;

    // PRIKAZ ROTIRANOG NIZA
    printf("\nNakon rotiranja udesno za jedno mesto\n");
    for(i = 0; i < 10; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}
