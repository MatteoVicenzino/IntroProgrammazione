#include <stdio.h>

// funzione che calcola la sommatoria degli elementi a[i] dell'array,
// solo per gli elementi i pari

int sommatoria(int a[], int n)
{
    int somma = 0;
    for(int i = 0 ; i < n; i++) {
        if(a[i] % 2 == 0)
            somma += a[i];
    }
    
    return somma;
}

void main()
{
    int a[4];
    for(int i = 0; i < 4; i++) {
        printf("Inserisci valore: ");
        scanf("%d", &a[i]);
    }

    int res = sommatoria(a, 4);
    printf("Sommatoria: %d\n", res);
    
}

