#include <stdio.h>

// funzione che dato un array vuoto di n elelmenti lo inizializza con i primi n numeri triangolari

int triangolari(int a[], int n)
{
    a[0] = 1;
    printf("%d\n", a[0]);
    for(int i = 1; i < n; i++) {
        a[i] = a[i-1] + (i+1);
        printf("%d\n", a[i]);
    }
}

void main()
{
    // printf("Inserisci n: ");
    // scanf("%d", &n);
    
    int a[6];
    triangolari(a, 6);
    
    
}

