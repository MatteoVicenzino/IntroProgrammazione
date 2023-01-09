#include <stdio.h>

// Programma che stampa il coefficiente binomiale di due numeri n e k inseriti dall'utente

void main()
{
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);

    int k;
    printf("Inserire k: ");
    scanf("%d", &k);

    int c;

    if(n >= k)
    {
        int nf = n; 
        //calcolo n fattoriale
        for(int i = n; i > 0; i--)
            {
                nf = nf * (i - 1);
            }
        
        
        int kf = k;
        //calcolo k fattoriale
        for(int j = k; j > 0; j--)
            {
                kf = kf * (j - 1);
            }
        
        int df = n-k;
        //calcolo n-k fattoriale
        for(int y = df; y > 0; y--)
            {
                df = df * (y - 1);
            }

        
        c = nf / kf * df; //calcolo il coefficiente binomiale
    }
    else
        c=0;


    printf("\nCoefficente binomiale di %d su %d è: %d\n", n, k, c);
    
    return(0);
}