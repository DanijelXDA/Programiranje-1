/* PROGRAM UCITAVA CELOBROJNI NIZ OD 10 ELEMENATA I ROTIRA NIZ UDESNO ZA JEDNO MESTO  POMOCU FUNKCIJE rotirajUdesno() */
#include <stdio.h>

void rotirajUdesno(int [], int); // prototip funkcije

int main(void)
{
    int niz[10];
    int i;

    printf("Unos niza\n");
    for(i = 0; i < 10; i++) { // unos niza od 10 elemenata
        printf("\tniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    rotirajUdesno(niz, 10);

    // PRIKAZ ROTIRANOG NIZA
    printf("\nNakon rotiranja udesno za jedno mesto\n");
    for(i = 0; i < 10; i++)
        printf("\tniz[%d] = %d\n", i, niz[i]);

    return 0;
}


void rotirajUdesno(int niz[], int n) // definicija funkcije
{
    int i, temp;

    temp = niz[n - 1];
    // ROTIRANJE NIZA UDESNO ZA JEDNO MESTO
    for(i = n - 2; i >= 0; i--) {
        niz[i + 1] = niz[i];
    }
    niz[0] = temp;

    return;
}
