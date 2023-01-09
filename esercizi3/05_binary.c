#include <stdio.h>
#include <math.h>

// Funzione che dato un numero in base binaria lo converte in base decimale

int decimale(int n)
{
    int a = 0;
    int somma;
    for(int i = 0; n != 0; i++)
    {
        a = n % 10;
        somma = a + (a * pow(2, i));
        n = n / 10;
    }
    return somma;
}

void main()
{
    int n;
    printf("Inserire il numero in base 2: ");
    scanf("%d", &n);

    printf("L’equivalente in base 10 è: %d\n", decimale(n));
    
    return(0);
}