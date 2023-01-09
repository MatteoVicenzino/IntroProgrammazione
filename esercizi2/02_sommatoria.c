#include <stdio.h>

// Programma che dati due numeri n e k inseriti dall'utente, stampa il risultato della sommatoria di k^i per i che va da 1 a n

void main()
{
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);

    int k;
    printf("Inserire k: ");
    scanf("%d", &k);

    int somma = 0;
    int c = k;

    for(int i = 1; i <= n; i++)
        {
            somma = somma + c;
            c = c * k;
        }


    printf("Risultato sommatoria: %d\n", somma);

    return(0);
}