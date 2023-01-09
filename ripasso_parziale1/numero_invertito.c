#include <stdio.h>

int countdigits(int n)
{
    int digits = 1; //variabile in cui salvo la dimensione di n
    while(n > 10)
    {
        digits *= 10;
        n /= 10;
    }
    printf("%d\n\n", digits);
    return digits;
}


int myf(int n) // 1234 legge 4 lo scrive al alle migliaia
{
    int m = 0; //numero invertito
    int j = countdigits(n);
    printf("%d\n\n", j);
    for(int i = j; i >= 1 ; i / 10)
    {
        int cifra = n % 10; //prendo la cifra delle unità
        m = m + (cifra * i); //la moltiplico per 1000 e salvo in m
        n /= 10; // passo alla prossima cifra della unità
    }
    // esco dal ciclo quando ho finito con la cifra in posto 1 
    printf("%d\n\n", m);
    return m;
}


void main()
{
    int n;
    printf("Inserisci n: ");
    scanf("%d", &n);

    printf("%d\n", myf(n));

    
}