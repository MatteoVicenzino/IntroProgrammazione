#include <stdio.h>

// programma che verifica se nell'array di interi dato ci sono duplicati

int pred(int a[], int n)
{
    for(int i = 0 ; i < n; i++) // per ogni i predicato è vero
    {
        for(int j = 0; j < n; j++) // per ogni j il predicato è falso
        {
            if(a[i] == a[j] && i != j)
            {
                return 1; // se trovo un predicato vero ritorno errore
            }
           //printf("(%d e %d sono diversi) E (%d e %d sono uguali)\n", i, j, a[i], a[j]);
        }
    }
    return 0; // se non trovo un predicato vero ritorno tutto ok
}

void main()
{
    int a[4];
    for(int i = 0; i < 4; i++)
    {
        printf("Inserisci valore: ");
        scanf("%d", &a[i]);
    }

    if(pred(a, 4) == 0)
        printf("VERO\n");
    else
        printf("FALSO\n");
    
}

