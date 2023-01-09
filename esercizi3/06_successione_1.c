#include <stdio.h>

// Funzione che calcola la successione da 1 a n, verificare che il limite è 1

float successione(int n)
{
    float an;
    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            an = 0.5;
            printf("a_1: %f \n", an);
        }
        else
        {
            an = (an + 1) / 2;
            printf("a_%d: %f \n", i, an);
        } 
    }
    
    return an;
}


void main()
{
    int n ;
    printf("Inserire n: ");
    scanf("%d", &n);

    successione(n);
    
    return(0);
}

// limite della sucessione è 1 perché dall'iterazione 21 in poi si ha che an = (1+1)/2 = 1


/* STA ROBA NON FUNZIONA, non so perché

float successione(int n, int i)
{
    float an;
    if(i == 1)
    {
        an = 0.5;
    }
    else
    {
        an = (an + 1) / 2;
    } 
    
    return an;
}


void main()
{
    int n ;
    printf("Inserire n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        float x = successione(n, i);
        printf("%f\n", x);
    }
    
    return(0);
}
*/