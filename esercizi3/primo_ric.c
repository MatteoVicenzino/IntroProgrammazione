#include<stdio.h>

int primo(int n, int m)
{
    if(m == 1) // Condizione di base
        return 1; // Il numero è primo quindi ritorno 1
    if(n % m == 0) // m è divisore di n, quindi n non è primo
        return 0; // Il numero non è primo quindi ritorno 0
    return primo(n, m-1);
    
}


int main()
{
    int n;
    printf("Inserisci il numero (n): ");
    scanf("%d", &n);
    
    int m = n-1;
    int p = primo(n, m);
    if(p == 1)
        printf("%d è un numero primo\n", n);
    if(p == 0)
        printf("%d non è un numero primo\n", n);

    return(0);
}