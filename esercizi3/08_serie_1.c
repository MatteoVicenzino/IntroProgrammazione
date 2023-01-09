#include <stdio.h>
#include <math.h>

// Funzione che calcola la serie da 0 a n, verificare che il limite per n che tende a +infinito è (pi greco^2)/8

double successione(int n)
{
    double sn = 0;
    for(int i = 0; i <= n; i++)
    {
        double nesimo = pow(2*i + 1, 2);
        nesimo = 1/nesimo;
        sn = sn + nesimo;
        printf("n_%d: %lf \n", i, sn);
    }
    
    return sn;
}

void main()
{
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);

    successione(n);

    //verifica che lim successione è (pi greco^2)/8

    float prova = (pow(3.1415, 2))/8;
    printf("\n(pi greco^2) / 8 = %f\n", prova);

    
    return(0);
}

