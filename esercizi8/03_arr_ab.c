#include <stdio.h>
#include <stdlib.h>

// funzione che dati due array a e b di n elementi salva in un array b ogni elemento di a senza duplicati

int* m_din(int a[], int n, int b[], int m, int* ab, int g)
{
    for(int i = 0; i < n; i++) {
        *(ab+i) = a[i];
    }
    
    for(int i = n; i < (n+m); i++) {
        *(ab+i) = b[i-n];
    }
    return ab;
}

void main()
{
    int a[4];
    for(int i = 0; i < 4; i++) {
        printf("Inserisci valore a: ");
        scanf("%d", &a[i]);
    }

    int b[5];
    for(int i = 0; i < 5; i++) {
        printf("Inserisci valore b: ");
        scanf("%d", &b[i]);
    }

    int g = 4+5;
    int* ab = malloc(sizeof(int) * g);
    
    for(int i=0; i<g; i++){
        ab[i] = 0;
    }

    m_din(a, 4, b, 5, ab, g);
    
    for(int i = 0; i < g; i++)
        printf("%d ", ab[i]);

    free(ab);
    printf("\n");
    
}