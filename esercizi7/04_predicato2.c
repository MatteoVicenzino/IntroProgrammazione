#include <stdio.h>

// programma verifica se il predicato è vero
//predicato: esiste un elemento di a uguale alla sommatoria degli elementi di b

int predicato(int a[], int b[], int n, int m)
{
    int sommatoria = 0;
    for(int j = 0; j < m; j++) 
        sommatoria += b[j];
        
    printf("%d", sommatoria);
    
    for(int i = 0; i < n; i++) {
        if(a[i] == sommatoria)
            return 0;
    }
    return 1;
}

void main()
{
    int a[2];
    for(int i = 0; i < 2; i++) {
        printf("Inserisci valore: ");
        scanf("%d", &a[i]);
    }

    int b[3];
    for(int i = 0; i < 3; i++) {
        printf("Inserisci valore: ");
        scanf("%d", &b[i]);
    }

    if(predicato(a, b, 2, 3) == 0)
        printf("ESISTE, predicato vero\n");
    else
        printf("NON ESISTE, predicato falso\n");
    
}

