#include <stdio.h>
#include <math.h>

// Funzione che calcola la successione da 1 a n con un parametro k, verificare che il limite è sqrt(p)

float successione(int n, float p)
{
    float an;
    for(int i = 1; i <= n;i++)
    {
        if(i == 1)
        {
            an = p;
            printf("a_1: %f \n", an);
        }
        else
        {
            an = (an + (p / an)) / 2;
            printf("a_%d: %f \n", i, an);
        } 
    }
    
    return an;
}

void main()
{
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);

    float p;
    printf("Inserire p: ");
    scanf("%f", &p);

    float nesimo = successione(n, p);

    //verifica che lim successione è sqrt(p)
    printf("\nil termine n-esimo è %f", nesimo);
    float prova = sqrt(p);
    printf("\nla radice quadrata di p (%f) è %f\n", p, prova);
    
    return(0);
}