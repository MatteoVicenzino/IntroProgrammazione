#include <stdio.h>
#include <stdlib.h>

// funzione che dato un array a di n elementi salva in un array b ogni elemento di a senza duplicati

int * m_din(int a[], int n)
{
    int * b = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) {
        *(b+i) = a[i];
    }
    return b;
}

void main()
{
    int a[4];
    for(int i = 0; i < 4; i++) {
        printf("Inserisci valore: ");
        scanf("%d", &a[i]);
    }

    int * b = m_din(a, 4);
    
    for(int i = 0; i < 4; i++)
        printf("%d ", b[i]);

    free(b);
}

