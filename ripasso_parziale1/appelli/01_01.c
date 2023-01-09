#include <stdio.h>

int pow(int b, int n)
{
    if(n == 0)
        return 1;
    return (b * (pow(b, n-1)));
}

int sommatoria(int n)
{
    if (n == 1)
        return 1;
    return (n + sommatoria(n-1));
}

void main()
{
    int n;
    printf("Valore di n: ");
    scanf("%d", &n);
    printf("Risultato sommatoria: %d\n", (sommatoria(n) * pow(2, n)));
}