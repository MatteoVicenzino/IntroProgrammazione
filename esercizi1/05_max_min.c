#include <stdio.h>

/* programma che dati n numeri stampa il valore massimo e quello minimo*/

void main()
{
    int x;
    printf("\nInserisci il numero (n): ");
    scanf("%d", &x); 
    
    if(x > 0)
    {
        int a;
        printf("Inserisci un numero (1): ");
        scanf("%d", &a);

        int m;
        int n;
        m = a;
        n = a;
    
        for (int i = 2; i <= x; i++)
        {
            
            int b;
            printf("Inserisci un numero (%d): ", i);
            scanf("%d", &b);

            if(b > m)
            {
                m = b;
            }

            if(b < n)
            {
                n = b;
            }
            
        }
        
        printf("\nIl numero massimo inserito è = %d", m);
        printf("\nIl numero minimo inserito è = %d\n", n);
        
    }
    
    return(0);
    
}