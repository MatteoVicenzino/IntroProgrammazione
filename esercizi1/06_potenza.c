#include <stdio.h>

/* programma che dati base ed esponente calcola la potenza */

void main()
{
    int a;
    printf("Inserisci la base: ");
    scanf("%d", &a); 

    int b;
    printf("Inserisci l'esponente: ");
    scanf("%d", &b);
    
    if(b > 0)
    {
        int p = a;
        
        for (int i = 1; i < b; i++)
        {

            p = p * a;
            
        }
        
        printf("a^b = %d \n", p);
        
    }
    else
    {
        printf("L'esponente deve essere positivo\n");
    }
    
    return(0);
}