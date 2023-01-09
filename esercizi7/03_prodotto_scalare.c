#include <stdio.h>

// programma calcola il prodotto scalare di due vettori dati

int scalare(int a[], int b[], int n)
{
    int prodotto[n];
    for(int i = 0 ; i < n; i++) { //calcolo del vettore c
        prodotto[i] = a[i] * b[i];
    }
    
    printf("vettore prodotto scalare a*b:\n"); //stampa dei risultati
    for(int i = 0; i < n; i++) { 
        printf("%d, ", prodotto[i]);
    }
    return 0;
}

void main()
{
    int n = 3;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("Inserisci valore: ");
        scanf("%d", &a[i]);
    }

    int b[n];
    for(int i = 0; i < n; i++)
    {
        printf("Inserisci valore: ");
        scanf("%d", &b[i]);
    }

    scalare(a, b, n);
    
}

