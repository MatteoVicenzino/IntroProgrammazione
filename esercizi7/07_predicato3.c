#include <stdio.h>

// funzione che dato un array verifica se la somma di 3 elementi consecutivi è uguale a k

int pred(int a[], int n, int k)
{

    for(int i = 0; i < n-2; i++) {
        int somma = a[i] + a[i+1] + a[i+2];
        if(somma == k)
            return 1;
    }
    
    return 0; // se non lo trovo ritorno 0 (predicato falso)
}


void main()
{
    int k;
    printf("Inserisci k: ");
    scanf("%d", &k);
    
    int a[5] = {1, 10, 4, 0, 69};
    for(int i = 0; i < 5; i++) //stampa array originale
        printf("%d ", a[i]);
    printf("\n");
    
    if(pred(a, 5, k) == 1) 
        printf("VERO\n");
    else
        printf("FALSO\n");
    
}