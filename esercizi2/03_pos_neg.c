#include <stdio.h>

// Programma che dati due numeri a e b inseriti dall'utente, dice: (1) se b è positivo o negativo (2) se a è pari o dispari (3) stampa il risultato di a+b (4) dice qual è l'espressione per trovare a+b massimo e ne stampa il risultato

void main()
{
    int a;
    printf("Inserire a: ");
    scanf("%d", &a);

    int b;
    printf("Inserire b: ");
    scanf("%d", &b);

    if(b >= 0)
    {
        printf("%d è positivo\n", b);
    }
    else
    {
        printf("%d è negativo\n", b);
    }

    if(a%2 == 0)
    {
        printf("%d è pari\n", a);
    }
    else
    {
        printf("%d è dispari\n", a);
    }

    printf("Somma: %d\n", a+b);

    if((a >= 0)&&(b >= 0))
    {
        int s = a + b;
        printf("(+a) + (+b) = %d porta al valore massimo\n", s);
    }
    
    if((a >= 0)&&(b < 0))
    {
        int s = a - b;
        printf("(+a) + (-b) = %d porta al valore massimo\n", s);
    }

    if((a < 0)&&(b >= 0))
    {
        int s = (- a) + b;
        printf("(-a) + (+b) = %d porta al valore massimo\n", s);
    }

    if((a < 0)&&(b < 0))
    {
        int s = (- a) - b;
        printf("(-a) + (-b) = %d porta al valore massimo\n", s);
    }
    
    return(0);
}