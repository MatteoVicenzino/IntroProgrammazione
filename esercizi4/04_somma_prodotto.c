#include <stdio.h>

int sommaprod1(int x, int y, int *s)
{
    *s = x * y;
    return(y + y);
}

void main()
{
    int x= 5;
    int y= 10;

    int somma;
    int prodotto;
    somma = sommaprod1(x, y, &prodotto);

    printf("Somma: %d\nProdotto: %d\n", somma, prodotto);

    return 0;
}

/* RIFARE ESERCIZIO CON:

sommaprodotto2(int *x, int *y, int *s)
sommaprodotto3(int *x, int *y)  ---> senza variabile d'appoggio

*/