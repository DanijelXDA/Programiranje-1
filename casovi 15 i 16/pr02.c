#include <stdio.h>

void obrada(int *, int *);

int main(void)
{
    int a, b;

    a = 4;
    b = 6;

    printf("\n\nNa pocetku programa vrednosti su:\na = %d\nb = %d\n", a, b);

    printf("\nPozivamo funkciju obrada.");

    obrada(&a, &b);


    printf("\nVratili smo se iz funkcije obrada.");

    printf("\n\nNa kraju programa vrednosti su:\na = %d\nb = %d\n", a, b);

    return 0;
}

void obrada(int *a, int *b)
{
    printf("\n\nNa pocetku funkcije vrednosti su:\na = %d\nb = %d\n", *a, *b);

    (*a)++;
    (*b)++;

    printf("\n\nNa kraju funkcije vrednosti su:\na = %d\nb = %d\n", *a, *b);
}
