#include <stdio.h>

int x_ric(int n)
{
    if (n == 1)
        return 1;
    return (x_ric(n-1) + (x_ric(n - 1))/n);
}

int x_ite(int n)
{
    int x_n = 0; //sommatoria delle cifre
    
    return x_n;
}

void main()
{
    int n;
    printf("Valore di n: ");
    scanf("%d", &n);
    printf("Risultato sommatoria cifre: %d\n", x_ric(n));
}