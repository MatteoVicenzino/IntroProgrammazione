#include <stdio.h>
#include <math.h>

// Funzione che calcola la serie da 0 a n, verificare che il limite per n che tende a +infinito è (pi greco^2)/8

float serie(int n)
{

    if(n==0)
        return 1;
    return( (1.0 / ((2 * n) + 1) * ((2 * n) + 1) ) + serie(n-1) );
    
}

void main()
{
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);

    printf("%f", serie(n));

    //verifica che lim successione è (pi greco^2)/8
/*
    float prova = (pow(3.1415, 2))/8;
    printf("\n(pi greco^2) / 8 = %f\n", prova);
*/
    
    return(0);
}

