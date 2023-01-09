#include <stdio.h>

/* Programma che calcola il MCD tra due numeri attraverso l'algoritmo di Euclide */

void main()
{
    int x;
    printf("inserisci il primo numero: ");
    scanf("%d", &x); 

    int y;
    printf("inserisci il secondo numero: ");
    scanf("%d", &y); 

    if((x <= 0) || (y <= 0))
    {
        printf("I due numeri devono essere diversi da zero");
        return(0);
    }
    else
    {
        while(x!=y)
        {
            if(x>y)
            {
                x = x - y;
            }
            else
            {
                y = y - x;
            }
        }
        printf("il MCD è %d\n", x);
        return(0);
    }
}