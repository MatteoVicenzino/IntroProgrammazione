#include <stdio.h>

// SELECTION SORT

int order(int a[], int n, int k)
{

    //ordino l'array
    int min;
    for(int i = 0; i < n; i++) {
        min = i; //suppongo che il minimo sia in pos i
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[i])
                min = j; //l'ipotesi era sbagliata, il nuovo minimo in pos j
        }
        int t = a[min];
        a[min] = a[i];
        a[i] = t;
        
        for(int i=0; i<5;i++) //stampa array modificato
            printf("%d ", a[i]);
        printf("\n");
    }
    
    printf("\n");
    for(int i=0; i<5;i++) //stampa array modificato
        printf("%d ", a[i]);
    printf("\n");
    
    return a[k]; //ritorno il k-esimo elemento
}


void main()
{
    int k;
    printf("Inserisci k: ");
    scanf("%d", &k);
    
    int a[5] = {1, 10, 4, 99, 5};
    for(int i = 0; i < 5; i++) //stampa array originale
        printf("%d ", a[i]);
    printf("\n");
    printf("\n");
    
    if(k <= 5) 
        printf("%d\n", order(a, 5, k));
    else
        printf("k > n\n");
    
}

