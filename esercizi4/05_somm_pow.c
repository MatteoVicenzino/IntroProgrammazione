#include <stdio.h>

float pow_ric(float b, float e)
{
    if(e == 1)
        return b;
    return(b * pow_ric(b,e-1));
}

float s_n_ric(float n, float k)
{
    if(n == 1)
        return(k * k / 3);
    return( ( n * pow_ric(k,n+1) ) / (pow_ric(3,n)) + s_n_ric(n-1,k) );
}

void main()
{

    float n;
    printf("Inserisci il numero (n): ");
    scanf("%f", &n);
    float k;
    printf("Inserisci il numero (k): ");
    scanf("%f", &k);

    printf("%f\n", s_n_ric(n,k));
    
    return(0);
}

