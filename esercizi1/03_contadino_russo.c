#include <stdio.h>

/* programma del contadino russo: dati due numeri trova il prodotto in modo particolare */

void main()
{
    int m;
    printf("\nInserisci il primo numero: ");
    scanf("%d", &m);

    int n;
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n); 

    int p = 0;

    while(m != 0)
        {
            if(m % 2 == 1)
            {
                p = p + n;
            }

            m = m / 2;
            n = n * 2;
        }
    
    printf("\nIl prodotto è = %d\n", p);
        
}