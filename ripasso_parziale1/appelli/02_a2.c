#include <stdio.h>

int s_ric(int n)
{
    if (n < 10)
        return n;
    return ( n %10 + s_ric(n/10) );
}

int s_ite(int n)
{
    int s_n = 0; //sommatoria delle cifre
    
    while(n>0)
    {
        s_n = s_n + (n % 10);
        n = n/10;
    }
    
    return s_n;
}

void main()
{
    int n;
    printf("Valore di n: ");
    scanf("%d", &n);
    printf("Risultato sommatoria cifre: %d\n", s_ite(n));
}